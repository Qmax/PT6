/*Created by Ravivarman,Qmax
 * 11th Jan 2013
 */

#include "shortlocater.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QBrush>
#include <quuid.h>
#include <QtDebug>
#include <QFile>

#include <QTextStream>

ShortLocater::ShortLocater(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    qDebug()<<"----------------------------SHORT LOCATER START----------------------------";

    //DISPLAY
    dis=new DISPLAY(ui.displayPanel);
    dis->selectGeometry(150,30);
    ui.units->setFont(QFont("DejaVu Sans", 85, 50, false));

    QPluginLoader loader2("libBackPlaneInterface.so",this);
    IBackPlane = qobject_cast<IntefaceBackPlane*>(loader2.instance());
    IBackPlane->InitializeBpObject();
    QPluginLoader loader3("libPTPsocInterface2.so",this);
    IPsoc = qobject_cast<IPSOCCOMMUNICATION*>(loader3.instance());
    IPsoc->openSerial();
    QPluginLoader loader4("libPTDMMLibInterface2.so",this);
    IDMMLib = qobject_cast<IDMMLibInterface*>(loader4.instance());
    QPluginLoader loader5("libGPIOEventInterface.so",this);
    IGPIOEvent = qobject_cast<PTGPIOEventInterface*>(loader5.instance());
    QPluginLoader loader6("libPTKeyEventInterfaces.so",this);
    IPTKeyEvent = qobject_cast<PTEventInterface*>(loader6.instance());
    QPluginLoader loader8("libPTGPIOPinInterface.so",this);
    IGPIOPin = qobject_cast<InterfaceGPIOPins*>(loader8.instance());
    QPluginLoader testing("libAppBckPsoc.so",this);
    test = qobject_cast<IPTAppBckPsocInterface*>(testing.instance());
    QPluginLoader loaderhaadc("libADCHighAccuracy.so", this);
    HAADC = qobject_cast<IHACADCTestJigInterface*> (loaderhaadc.instance());
    HAADC->setHACADC(ui.HAADC_WIDGET);
    ui.HAADC_WIDGET->setWindowFlags(Qt::Dialog);
    HAADC->showWidget();
//
//    toolboxFlag=false;
//    ToolBox(toolboxFlag);

    Initializations();

    connect(m_nADCtimer,SIGNAL(timeout()),this,SLOT(Measure()));

}
void ShortLocater::ToolBox(bool flag){
    ui.debugPanel->setVisible(flag);
    if(flag==false)
    	ui.frontPanel_SHLOC->setVisible(true);
    else
    	ui.frontPanel_SHLOC->setVisible(false);
    ui.calibrateDisplay->setVisible(flag);
    ui.HAADC_WIDGET->setVisible(flag);
    ui.pushButton->setVisible(flag);
    ui.pushButton_16->setVisible(flag);
    ui.HAADC->setVisible(flag);
    ui.HAADC_WIDGET->setVisible(flag);
    ui.haadcClose->setVisible(flag);

}
void ShortLocater::Initializations(){

	IPsoc->resetRelays();
	IPsoc->srcImpedanceSelection(SRC_IMP_0E);
//	IPsoc->shLocatorDetection();
    m_nADCtimer = new QTimer(this);

    IBackPlane->writeBackPlaneRegister(0x0FFF,0x001E);//clear all interrupts
    IBackPlane->writeBackPlaneRegister(0x0000,0x0020);//disable all interrupts
    IBackPlane->writeBackPlaneRegister(0x0000,0x0024);//disable global interrupt
    IBackPlane->writeBackPlaneRegister(0x0100,0x0020);//enabling psoc INT0embedded key interrupt)

    IPTKeyEvent->InvokeGPIOEvent(this,"/dev/input/event2","pt_kpp",&m_nPTKeyCode);
    IGPIOEvent->InvokeGPIOEvent(this,"/dev/input/event7","gpioevent",&m_nGPIOCode);
    IBackPlane->writeBackPlaneRegister(0x0001,0x0024);

    //        IBackPlane->writeBackPlaneRegister();
    ohms=QChar(0x2126);
    micro=QChar(0x00B5);

    //~~~~~~~~~~~~~Reading Short Values from File~~~~~~~~~~~~~~~~~~~~~~
	QStringList stringList;
	bool ok=true;
	QFile textFile;
   	textFile.setFileName("shortValuesI.txt");

    if (textFile.open(QIODevice::ReadOnly))
    {
        QTextStream textStream(&textFile);
        while (!textStream.atEnd())
        {
            stringList.append(textStream.readLine());
        }
        r200EShortValue=stringList.value(0).toDouble(&ok);
        qDebug()<<"200E Short Value:"<<r200EShortValue;
        r2EShortValue=stringList.value(1).toDouble(&ok);
        qDebug()<<"2E Short Value:"<<r2EShortValue;
       	r200mEShortValue=stringList.value(2).toDouble(&ok);
        qDebug()<<"200mE Short Value:"<<r200mEShortValue;
    }else{
        r200EShortValue=r200mEShortValue=r2EShortValue=0.0;
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //~~~~~~~~Check for debug panel~~~~~~~~~~~~~~~~~~~~~~~~
    QStringList debugPanel;
    QFile textFile2("debugPanel.txt");
    if (textFile2.open(QIODevice::ReadOnly))
    {
        QTextStream textStream(&textFile2);
        while (!textStream.atEnd())
        {
            debugPanel.append(textStream.readLine());
            if(debugPanel.value(0)=="1")
                ToolBox(true);
            else
                ToolBox(false);
        }
    }else{
        ToolBox(false);
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    IDMMLib->ApplyDACOffset(false);

    dis->setValue("OL");
    IBackPlane->writeBackPlaneRegister(0x0,0x16);
    //	Beep(false);

    AutoFlag=false;
    on_Auto_clicked();

    OffsetFlag=false;
    BuzzerFlag=false;
    msgBoxLive=false;

    ui.progressBar_2->setValue(0);
    for(int i=0;i<100;i++)
        avgRetval[i]=0.0;

    retval=retval2=retval3=0.0;
    nullify=0.0;
    nullit=0.0;
    avg=0;

    noOFsamples=1;

    rangePrevValue=33;

    ui.uE->setText(micro+ohms);

    on_r200But_clicked();
    ui.holdCap->setVisible(false);
    runFlag=true;
    startStop();

	ui.openShortEnable->setChecked(true);

	m_nAvgCount=0;
	movingAverage=5;

	ui.splashWidget->setVisible(false);
		usleep(1000);

}

void ShortLocater::customEvent(QEvent *e){
    qDebug()<<"SL Custom Event";
    if(e->type() == ((QEvent::Type)1234)){
        qDebug()<<"Embedded Probe";
        ProbeFunction();
    }
    if(e->type() == ((QEvent::Type)5678)){
        qDebug()<<"PT Keypad:-"<<m_nPTKeyCode;
        KeyFunction();
    }
    else
        qDebug()<<"Unknown Event";
    QEvent(e->type());
}

void ShortLocater::ProbeFunction(){
    unsigned int l_nRegisterValue=0,reads;

    IBackPlane->readBackPlaneRegister(0x001E);
    qDebug()<<"data read at 1E"<<l_nRegisterValue;
    IBackPlane->writeBackPlaneRegister(0x0100,0x001E);

//    IPsoc->writeSerial(0x01);
//    usleep(1000);
//    reads=IPsoc->readSerial();
    reads = IPsoc->embeddedProbeStatus();

    qDebug()<<"Embedded Probe reads:"<<hex<<reads;
    changeByProbe(reads);

    IBackPlane->writeBackPlaneRegister(0x0001,0x0024);


}
void ShortLocater::changeByProbe(unsigned int key){
    if(key==0xc){//0x90||key==0x98){
        ui.offset->animateClick(1);
    }
    else if(key==0xa){//0xA0||key==0xA8){
        ui.Auto->animateClick(1);
    }
    else if(key==0x9){//0xC0||key==0xC8){
        if(AutoFlag==false){
            if(rangeFlag=="200E")
                ui.r2EBut->animateClick(1);
            else if(rangeFlag=="2E")
                ui.r200mEBut->animateClick(1);
            else if(rangeFlag=="200mE")
                ui.r200But->animateClick(1);
        }
        else{
            ui.buzzer->animateClick(1);
        }

    }
}

void ShortLocater::KeyFunction(){
    if(m_nPTKeyCode==1){
        qDebug()<<("\nMENU");
        IBackPlane->closeObject();
        IPsoc->closeSerial();
        parentWidget()->close();
    }
    else if(m_nPTKeyCode==2){
        qDebug()<<("\nESC");
        if(msgBoxLive!=true)
            Exit();
    }
    else if(m_nPTKeyCode==3){
        qDebug()<<("\nNULL");
    }
    else if(m_nPTKeyCode==4){
        qDebug()<<("\nF1");
        if(msgBoxLive!=true)
            on_r200But_clicked();
    }
    else if(m_nPTKeyCode==5){
        qDebug()<<("\nF2");
        if(msgBoxLive!=true){

        }
    }
    else if(m_nPTKeyCode==6){
        qDebug()<<("\nF3");
        if(msgBoxLive!=true){

        }
    }
    else if(m_nPTKeyCode==7){
        qDebug()<<("\nF4");
    }
    else if(m_nPTKeyCode==8){
        qDebug()<<("\nF5");
        //		if(msgBoxLive!=true)
        //			ui.pushButton->animateClick(1);
    }
    else if(m_nPTKeyCode==9){
        qDebug()<<("\nUP");
        if(msgBoxLive!=true){
        }
    }
    else if(m_nPTKeyCode==10){
        qDebug()<<("\nDOWN");
        if(msgBoxLive!=true){
        }
    }
    else if(m_nPTKeyCode==11){
        qDebug()<<("\nRIGHT");
        if(msgBoxLive!=true){
        }
    }
    else if(m_nPTKeyCode==12){
        qDebug()<<("\nLEFT");
        if(msgBoxLive!=true){
        }
    }
    else if(m_nPTKeyCode==13){
        qDebug()<<("\nENTER");
    }
    else if(m_nPTKeyCode==14){
        qDebug()<<("\nSETUP");
        /*		if(toolboxFlag==true){
			toolboxFlag=false;
			ToolBox(toolboxFlag);
		}else{
			toolboxFlag=true;
			ToolBox(toolboxFlag);
		}*/
    }
    else if(m_nPTKeyCode==15){
        qDebug()<<("\nDEFAULT");
    }
    else if(m_nPTKeyCode==16){
        qDebug()<<("\nTOUCH");
        IGPIOPin->toggleTouchButton();
    }
    else if(m_nPTKeyCode==17){
        qDebug()<<("\nFILE");
        on_printImage_clicked();
    }
    else if(m_nPTKeyCode==18){
        qDebug()<<("\nSCALE");
    }
    else if(m_nPTKeyCode==19){
        qDebug()<<("\nRUN/STOP");
    }
}
bool ShortLocater::showMessageBox(bool ok, bool cancel, QString text, QString okText ="Ok", QString calcelText = "Cancel") {
    msgBoxLive = true;
    msgBox = new QMessageBox(this);
    msgBox->setFont(QFont("DejaVu Sans", 15, 50, false));
    msgBox->setIcon(QMessageBox::Information);
    msgBox->setStyleSheet("color : white;background-color :rgb(88,88,87,255);");
    msgBox->setWindowIcon(QIcon(":/image.png"));
    msgBox->setText(text);
    if (ok == true) {
        connectButton = msgBox->addButton(okText, QMessageBox::YesRole);
        connectButton->setFont(QFont("DejaVu Sans", 20, 50, false));
        connectButton->setStyleSheet("width:20;height;20");
    }
    if (cancel == true) {
        abortButton = msgBox->addButton(calcelText, QMessageBox::NoRole);
        abortButton->setFont(QFont("DejaVu Sans", 20, 50, false));
        abortButton->setStyleSheet("width:20;height;20");
    }
    msgBox->exec();
    if (msgBox->clickedButton() == connectButton) {
        msgBoxLive = false;
        return true;
    }
    if (cancel == true)
        if (msgBox->clickedButton() == abortButton) {
        //qDebug()<<"abort button clicked";
        msgBoxLive = false;
        return false;
    }
    return true;
}
ShortLocater::~ShortLocater(){
    //restoreState();
    IBackPlane->closeObject();
    //	IAppCard->CloseAppObject();
    IPsoc->closeSerial();
    qDebug()<<"----------------------------SHORT LOCATER ENDS----------------------------";

}
void ShortLocater::startStop(){
    if(runFlag==true){	//ON
        avg=0;
        m_nADCtimer->start(300);
        qDebug()<<"Measurement started.....";
        IGPIOPin->illuminateRunStopButton(0);
    }
    else{
        m_nADCtimer->stop();
        //		Beep(false);
        qDebug()<<"Measurement ended.....";
        IGPIOPin->illuminateRunStopButton(1);
    }
}

void ShortLocater::Exit(){

	on_exit_clicked();
/*    if(m_nADCtimer->isActive())
        IPTMessageBox->QMsgBoxshowMessageBox(true, false, "Stop the timer and Exit","Ok","Cancel",this);
    else{
        if(IPTMessageBox->QMsgBoxshowMessageBox(true,true,"Do you want to close Short Locator ?","Yes","No",this)){
            //			Beep(false);
            IBackPlane->closeObject();
            IPsoc->closeSerial();
            parentWidget()->close();
        }else 	{
            IPTMessageBox->CloseMsgBox();
            msgBox->close();
        }
    }*/
}

void ShortLocater::Configure(int x){


    if(x==33){
        IDMMLib->MeasureResistance(R200mE,2);
        qDebug()<<"200mE Configured......";
    }
    else if(x==66){
        IDMMLib->MeasureResistance(R2E,2);
        qDebug()<<"2E Configured......";
    }
    else if(x==99){
        IDMMLib->MeasureResistance(SLR200E,2);
        qDebug()<<"200E Configured......";
    }
}
void ShortLocater::checkProbeConnect(){
	if((IPsoc->embeddedProbeStatus() & 0x08)!=0x08){
		showMessageBox(true,false,"Probe Disconnected!","OK","");
	}

}
void ShortLocater::Measure(){
//	checkProbeConnect();
/*
	if(OffsetFlag==true)
		ui.openShortEnable->setChecked(false);
	else
		ui.openShortEnable->setChecked(true);
*///commented on 9th july 2014
    if(rangeFlag=="200mE"){
        retval2=IDMMLib->displayResistance(R200mE);
        if(ui.openShortEnable->isChecked())
            retval=retval2-r200mEShortValue;
        else
        	retval=retval2;
    }
    else if(rangeFlag=="2E"){
        retval2=IDMMLib->displayResistance(R2E);
        if(ui.openShortEnable->isChecked())
            retval=retval2-r2EShortValue;
        else
        	retval=retval2;
    }
    else if(rangeFlag=="200E"){
        retval2=IDMMLib->displayResistance(SLR200E);
        if(ui.openShortEnable->isChecked())
            retval=retval2-r200EShortValue;
        else
        	retval=retval2;
    }
    qDebug()<<"Measured Value"<<retval2;
    qDebug()<<"Measured Value with probe calibration"<<retval;
    if(OffsetFlag!=true){
        if(AutoFlag==true){
            if(rangeFlag=="200mE"&&retval>0.22){
                rangeFlag="2E";
                on_r2EBut_clicked();
            }
            else if(rangeFlag=="2E"&&retval>2.2){
                rangeFlag="200E";
                on_r200But_clicked();
            }
            else if(rangeFlag=="200E"&&retval>220){
                dis->setValue("OL");
                IBackPlane->writeBackPlaneRegister(0x0,0x16);
            }
            else if(rangeFlag=="200E"&&retval<=2.2){
                rangeFlag="2E";
                on_r2EBut_clicked();
            }
            else if(rangeFlag=="2E"&&retval<=0.22){
                rangeFlag="200mE";
                on_r200mEBut_clicked();
            }
            else if(rangeFlag=="200mE"&&retval<-0.22){
                dis->setValue("-OL");
            }
        }
    }
    if(retval>220){
        dis->setValue("OL");
        IBackPlane->writeBackPlaneRegister(0x0,0x16);
        ui.progressBar_2->setMinimum(0);
        ui.progressBar_2->setMaximum(200);
        ui.progressBar_2->setValue(200);
    }

    ui.displayOffset->setText(QString::number(nullify));
    retval=retval-nullify;
    retval=retval-nullit;
    ui.displayInput->setText(QString::number(retval,'f',10));
    Beep(retval);
    if(retval>220.00){
        dis->setValue("OL");
//    	dis->setValue(retval);
        IBackPlane->writeBackPlaneRegister(0x0,0x16);
        ui.progressBar_2->setMinimum(0);
        ui.progressBar_2->setMaximum(200);
        ui.progressBar_2->setValue(200);
    }
    else{
        if(rangeFlag=="200E"){
            if(retval>220){
                dis->setValue("OL");
//            	dis->setValue(retval);
                IBackPlane->writeBackPlaneRegister(0x0,0x16);
                ui.progressBar_2->setMinimum(0);
                ui.progressBar_2->setMaximum(200);
                ui.progressBar_2->setValue(200);
            }
            else{
            	retval3=0;
            	if(m_nAvgCount==movingAverage){
            		for(int i=0;i<movingAverage;i++)
            			retval3=retval3+m_dOutput[i];
            		for(int k=0;k<movingAverage;k++)
            			qDebug()<<"value"<<k<<":"<<m_dOutput[k];
            		retval3=retval3/movingAverage;
            			qDebug()<<"sum of 3:"<<retval3;
                	QString tempRetval=convertToUnits(retval3);
                	qDebug()<<"output from convertToUnits:"<<tempRetval;
                	dis->setRange(200);
                    dis->setValue(retval3);
//                    for(int j=0;j<(movingAverage-1);j++)
//                    	m_dOutput[j]=m_dOutput[j+1];
//                    m_nAvgCount--;
                    m_nAvgCount=0;
            	}
            	else{
            		m_dOutput[m_nAvgCount]=retval;
            		m_nAvgCount++;
            	}
//            	QString tempRetval=convertToUnits(retval);
//            	qDebug()<<"output from convertToUnits:"<<tempRetval;
//                dis->setValue(tempRetval);
            }

            ui.progressBar_2->setMinimum(0);
            ui.progressBar_2->setMaximum(200);
            ui.progressBar_2->setValue((int)retval);


        }
        else if(rangeFlag=="2E"){
            if(retval>2.2){
                dis->setValue("OL");
//            	dis->setValue(retval);
                IBackPlane->writeBackPlaneRegister(0x0,0x16);
                ui.progressBar_2->setMinimum(0);
                ui.progressBar_2->setMaximum(200);
                ui.progressBar_2->setValue(200);
            }
            else{retval3=0;
            	if(m_nAvgCount==movingAverage){
            		for(int i=0;i<movingAverage;i++)
            			retval3+=m_dOutput[i];
            		for(int k=0;k<movingAverage;k++)
            			qDebug()<<"value"<<k<<":"<<m_dOutput[k];
            		retval3/=movingAverage;
            			qDebug()<<"sum of 3:"<<retval3;
                	QString tempRetval=convertToUnits(retval3);
                	qDebug()<<"output from convertToUnits:"<<tempRetval;
                	dis->setRange(2);
                    dis->setValue(retval3);
//                    for(int j=0;j<(movingAverage-1);j++)
//                    	m_dOutput[j]=m_dOutput[j+1];
//                    m_nAvgCount--;
                    m_nAvgCount=0;
            	}
            	else{
            		m_dOutput[m_nAvgCount]=retval;
            		m_nAvgCount++;
            	}
//            	QString tempRetval=convertToUnits(retval);
//            	qDebug()<<"output from convertToUnits:"<<tempRetval;
//                dis->setValue(tempRetval);
            }

            ui.progressBar_2->setMinimum(0);
            ui.progressBar_2->setMaximum(2000);
            ui.progressBar_2->setValue((int)(retval*1000));
            if((retval*1000)>2000)ui.progressBar_2->setValue(2000);
        }
        else if(rangeFlag=="200mE"){
            if(retval<-0.22)
                dis->setValue("-OL");
            else if(retval>0.22){
                dis->setValue("OL");
//            	dis->setValue(retval);
                IBackPlane->writeBackPlaneRegister(0x0,0x16);
                ui.progressBar_2->setMinimum(0);
                ui.progressBar_2->setMaximum(200);
                ui.progressBar_2->setValue(200);
            }
            else{retval3=0;
            	if(m_nAvgCount==movingAverage){
            		for(int i=0;i<movingAverage;i++)
            			retval3+=m_dOutput[i];
            		for(int k=0;k<movingAverage;k++)
            			qDebug()<<"value"<<k<<":"<<m_dOutput[k];
            		retval3/=movingAverage;
            			qDebug()<<"sum of 3:"<<retval3;
                	QString tempRetval=convertToUnits(retval3);
                	qDebug()<<"output from convertToUnits:"<<tempRetval;
                	dis->setRange(200);
                    dis->setValue(retval3*1000);
//                    for(int j=0;j<(movingAverage-1);j++)
//                    	m_dOutput[j]=m_dOutput[j+1];
//                    m_nAvgCount--;
                    m_nAvgCount=0;
            	}
            	else{
            		m_dOutput[m_nAvgCount]=retval;
            		m_nAvgCount++;
            	}
//            	QString tempRetval=convertToUnits(retval);
//            	qDebug()<<"output from convertToUnits:"<<tempRetval;
//                dis->setValue(tempRetval);
            }
            ui.progressBar_2->setMinimum(0);
            ui.progressBar_2->setMaximum(200);
            ui.progressBar_2->setValue((int)(retval*1000));
            if((retval*1000)>200)ui.progressBar_2->setValue(200);
        }
    }

    //	}
    /*	if(switchy->value()==true&&ui.label_2->text()!="OL")
		Beep(true);
	else
		Beep(false);*/

    ADC data=IDMMLib->getAdcDatas();
    ui.adcRawData->setText(QString::number((data.Data),'f',0));
    ui.adcConvData->setText(QString::number((data.ConvertedData),'f',10));

}
void ShortLocater::Beep(double value){

    double l_dFreq;

    if(OffsetFlag!=true){

        if(AutoFlag!=true){

            if(rangeFlag=="200mE")
                l_dFreq=20-(value/0.011);
            else if(rangeFlag=="2E")
                l_dFreq=20-(value/0.11);
            else if(rangeFlag=="200E")
                l_dFreq=20-(value/11);
        } else
               l_dFreq=20-(value/11);

    }else if(OffsetFlag==true&&rangeFlag=="200mE")
        l_dFreq=20-(value/0.022);


    qDebug()<<"Buzzer Frequency:"<<l_dFreq;
    IBackPlane->setBuzzerTone(1000, 1, 50);
    IBackPlane->setBuzzerVolume(l_dFreq, 1, 50);

    if(BuzzerFlag==true)
        IBackPlane->writeBackPlaneRegister(0x4, 0x16);
    else
        IBackPlane->writeBackPlaneRegister(0x0,0x16);

}

void ShortLocater::on_printImage_clicked()
{
    QPixmap Pix = QPixmap();
    Pix = QPixmap::grabWindow(this->winId());
    Pix.save("shortLocator.jpg");
}

void ShortLocater::on_pushButton_5_clicked()
{
    QWidget *newWidget=test->getPTAppBckPsoc();
    newWidget->setWindowTitle("AppCard BackPanel PSoC Panel");
    newWidget->show();
}
QString ShortLocater::convertToUnits(double l_nvalue){
	qDebug()<<"input to convertToUnits : "<<l_nvalue;
    QString unit;
    double value;
    if(rangeFlag=="200mE"){
        if(l_nvalue>=-0.0001&&l_nvalue<0){
            value=-100;unit=QChar(0x00B5)+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>0&&l_nvalue<0.0001){
            value=100;unit=QChar(0x00B5)+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>0.22||l_nvalue<-0.22){
            value=l_nvalue;unit=ohms;
            ui.units->setText(unit);
            IBackPlane->writeBackPlaneRegister(0x0,0x16);
            return ("OL");
        }
    }
    if(rangeFlag=="2E"){
        if(l_nvalue>=-0.001&&l_nvalue<0){
            value=-1;unit="m"+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>0&&l_nvalue<0.001){
            value=1;unit="m"+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>2.2||l_nvalue<-2.2){
            value=l_nvalue;unit=ohms;
            ui.units->setText(unit);
            IBackPlane->writeBackPlaneRegister(0x0,0x16);
            return ("OL");
        }
    }
    if(rangeFlag=="200E"){
        if(l_nvalue>=-0.1&&l_nvalue<0){
            value=-100;unit="m"+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>0&&l_nvalue<0.1){
            value=100;unit="m"+ohms;
            ui.units->setText(unit);
            return (QString::number(value));
        }
        if(l_nvalue>220||l_nvalue<-220){
            value=l_nvalue;unit=ohms;
            ui.units->setText(unit);
            IBackPlane->writeBackPlaneRegister(0x0,0x16);
            return ("OL");
        }
    }

    if(l_nvalue<0)
        value=l_nvalue*-1;
    else
        value=l_nvalue;

    if((value>=1&&value<1000)){
        value=value*1;			unit="";
    }
    else if((value*1000)>=1&&value<1000){

    	if(rangeFlag=="200E" || rangeFlag=="2E"){
    		value=value*1000;        unit="";
    	}else if(rangeFlag=="200mE"){
    		value=value*1000;        unit="m";
    	}
    }
    else if((value*1000000)>=1&&value<1000000){
        value=value*1000000;     unit=QChar(0x00B5);
    }

    if(l_nvalue>=0){
        if(rangeFlag=="200E"){//200E
            if(unit==""){
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',1));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',0));
            }
        }
        else if(rangeFlag=="2E"){//2E
            if(unit==""){
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',2));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',1));
            }
        }
        else if(rangeFlag=="200mE"){//200mE
            if(unit=="m"){
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',1));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number(value,'f',0));
            }
        }
    }
    if(l_nvalue<0){
        if(rangeFlag=="200E"){//200E
            if(unit==""){
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',1));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',0));
            }
        }
        else if(rangeFlag=="2E"){//2E
            if(unit==""){
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',2));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',1));
            }
        }
        else if(rangeFlag=="200mE"){//200mE
            if(unit=="m"){
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',1));
            }
            else{
                ui.units->setText(unit+ohms);
                return (QString::number((value*-1),'f',0));
            }
        }
    }
}

void ShortLocater::shortCalibration(){

    QMessageBox msgBox,msgBox2;
    bool ret =showMessageBox(true,false,"Short the probes and press OK.","OK","");
    if(ret==true){
        {
            Configure(99);
            sleep(1);
            showMessageBox(true,false,"200E Short Calibration Done\n Press OK for next range.","OK","");
            for(int i=0;i<5;i++)
            	 r200EShortValue=IDMMLib->displayResistance(SLR200E);
            r200EShortValue = static_cast<double>(static_cast<int>(r200EShortValue*10000000+0.5))/10000000.0;
            qDebug()<<"r200EShortValue in ohms"<<convertToUnits(r200EShortValue);
        }
        {
            Configure(66);
            sleep(1);
            showMessageBox(true,false,"2E Short Calibration Done\n Press OK for next range.","OK","");
            for(int i=0;i<5;i++)
            	r2EShortValue=IDMMLib->displayResistance(R2E);
            r2EShortValue = static_cast<double>(static_cast<int>(r2EShortValue*10000000+0.5))/10000000.0;
            qDebug()<<"r2EShortValue in ohms"<<convertToUnits(r2EShortValue);

        }
        {
            Configure(33);
            sleep(1);
            showMessageBox(true,false,"200mE Short Calibration Done\n Press OK to Exit.","OK","");
            for(int i=0;i<5;i++)
            	r200mEShortValue=IDMMLib->displayResistance(R200mE);
            r200mEShortValue = static_cast<double>(static_cast<int>(r200mEShortValue*10000000+0.5))/10000000.0;
            qDebug()<<"r200mEShortValue in ohms"<<convertToUnits(r200mEShortValue);
        }
        Configure(99);
    }

    QFile outFile;
    if(ui.External->isVisible())
    	outFile.setFileName("shortValuesE.txt");
    if(ui.Internal->isVisible())
    	outFile.setFileName("shortValuesI.txt");

    outFile.open(QIODevice::WriteOnly);
    QTextStream ts(&outFile);
    ts <<r200EShortValue<<endl<<r2EShortValue<<endl<<r200mEShortValue<<endl;


}

void ShortLocater::on_ShortCalib_clicked()
{
    shortCalibration();

}

void ShortLocater::on_ShortCalib_2_clicked()
{
    m_objoffset=new offset(IDMMLib,this);
    QPropertyAnimation *animation = new QPropertyAnimation(m_objoffset, "geometry");
    animation->setDuration(10000);
    animation->setStartValue(QRect(300, 200, 50, 50));
    animation->setEndValue(QRect(300, 300, 240, 170));
    animation->setEasingCurve(QEasingCurve::Linear);
    animation->setDuration(1000);
    animation->start();
    m_objoffset->show();
}

void ShortLocater::on_r200But_clicked()
{
    rangeFlag="200E";
    Configure(99);
    ui.rangeLabel->setText("200"+ohms);
    ui.r200But->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/pressed.svg")));
    ui.r2EBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));
    ui.r200mEBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));

}

void ShortLocater::on_r2EBut_clicked()
{
    rangeFlag="2E";
    Configure(66);
    ui.rangeLabel->setText("2"+ohms);
    ui.r200But->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));
    ui.r2EBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/pressed.svg")));
    ui.r200mEBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));
}

void ShortLocater::on_r200mEBut_clicked()
{
    rangeFlag="200mE";
    Configure(33);
    ui.rangeLabel->setText("200m"+ohms);
    ui.r200But->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));
    ui.r2EBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/normal.svg")));
    ui.r200mEBut->setIcon(QIcon(QPixmap(":/svgbutton/Beryl/pressed.svg")));
}



void ShortLocater::on_exit_clicked()
{
/*	bool ret=showMessageBox(true,true,"Do you want to close Short Locator?","YES","NO");
	if(ret)
		parentWidget()->close();
	else
		msgBox->close();*/
	BuzzerFlag=false;
	IBackPlane->closeObject();
	IPsoc->closeSerial();
	ShortLocater::destroy(true,true);
	parentWidget()->close();
}

void ShortLocater::on_buzzer_clicked()
{
    if(BuzzerFlag==true){
        ui.buzzer->setStyleSheet("QPushButton{color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);font:bold; }");
        BuzzerFlag=false;
        IBackPlane->writeBackPlaneRegister(0x0, 0x16);
    }else{
        ui.buzzer->setStyleSheet("QPushButton {color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #e59244, stop: 0.6 #ffa500 , stop:1 #FFFFFF);font:bold;}");
        BuzzerFlag=true;
        IBackPlane->writeBackPlaneRegister(0x4, 0x16);
    }
}

void ShortLocater::on_Auto_clicked()
{
    if(AutoFlag==true){
        AutoFlag=false;
        ui.Auto->setText("Manual");
        ui.label->setText("MANUAL");
        ui.Auto->setStyleSheet("QPushButton{color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);font:bold; }");
        ui.r200But->setEnabled(true);
        ui.r2EBut->setEnabled(true);
        ui.r200mEBut->setEnabled(true);

    }else{
        AutoFlag=true;
        ui.Auto->setText("Auto");
        ui.label->setText("AUTO");
        ui.Auto->setStyleSheet("QPushButton {color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #e59244, stop: 0.6 #ffa500 , stop:1 #FFFFFF);font:bold;}");
        ui.r200But->setEnabled(false);
        ui.r2EBut->setEnabled(false);
        ui.r200mEBut->setEnabled(false);

    }
}

void ShortLocater::on_offset_clicked()
{
	ui.splashWidget->setVisible(true);
	usleep(1000);
	qDebug()<<"Offset Applied";
//    if(AutoFlag==true){
	if(OffsetFlag==false){
            OffsetFlag=true;
            ui.offset->setStyleSheet("QPushButton {color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #e59244, stop: 0.6 #ffa500 , stop:1 #FFFFFF);font:bold;}");

            if(rangeFlag=="200mE")
                rangePrevOffset=66;							//set, back to range as 2E
            else if(rangeFlag=="2E")
                rangePrevOffset=99;     					//set, back to range as 200E
            else if(rangeFlag=="200E")
                rangePrevValue=33;

            on_r200mEBut_clicked();
            sleep(1);
            for(int i=0;i<10;i++){
            	retval=IDMMLib->displayResistance(R200mE);
            	usleep(100);
                QApplication::processEvents();
            }

/*            if(ui.openShortEnable->isChecked())
            	nullify=retval-r200mEShortValue;
            else*/
            	nullify=retval;
            qDebug()<<"debug point:"<<retval<<"nullify"<<nullify<<"initial offset"<<r200mEShortValue;
	}else{
            OffsetFlag=false;
            ui.offset->setStyleSheet("QPushButton{color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);font:bold; }");
            nullify=0.0;
            Configure(rangePrevOffset);
            if(rangePrevOffset==99){
                on_r200But_clicked();
            }else if(rangePrevOffset==66){
                on_r2EBut_clicked();
            }else if(rangePrevOffset==33){
                on_r200mEBut_clicked();
            }
	}
//    }else{
//        showMessageBox(true,false,"Offset works only in Auto Mode","OK","");
//    }
	ui.splashWidget->setVisible(false);
	usleep(1000);
}

void ShortLocater::on_Null_clicked()
{
    shortCalibration();
}

void ShortLocater::on_microOhms_clicked()
{

}

void ShortLocater::on_hold_clicked()
{
    if(runFlag==true){
        runFlag=false;
        ui.hold->setStyleSheet("QPushButton {color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #e59244, stop: 0.6 #ffa500 , stop:1 #FFFFFF);font:bold;}");
        startStop();
        IBackPlane->writeBackPlaneRegister(0x0,0x16);
        ui.holdCap->setVisible(true);
    }else{
        runFlag=true;
        ui.hold->setStyleSheet("QPushButton{color:white;border: 1px solid #2D5059;border-radius: 20px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);font:bold; }");
        startStop();
        ui.holdCap->setVisible(false);
    }
}

void ShortLocater::on_pushButton_clicked()
{
    on_pushButton_5_clicked();
}

void ShortLocater::on_haadcClose_clicked()
{
    ui.HAADC_WIDGET->setGeometry(633,525,50,2);
}

void ShortLocater::on_HAADC_clicked()
{
    ui.HAADC_WIDGET->setGeometry(0,20,800,520);

}

void ShortLocater::on_pushButton_2_clicked()
{
    nullit=retval;
    ui.lineEdit->setText(QString::number((nullit)));
    nullitFlag=true;
}

void ShortLocater::on_pushButton_3_clicked()
{
    nullit=0.0;
    ui.lineEdit->setText(QString::number((nullit)));
    nullitFlag=false;
}

void ShortLocater::on_Internal_clicked()
{

/*
            IPsoc->resetRelays();
            usleep(500);
            IPsoc->writeSerial(0x42);
            IPsoc->writeSerial(0x9);
            usleep(500);
            IPsoc->writeSerial(0x42);
            IPsoc->writeSerial(0x15);
            usleep(500);
            IPsoc->writeSerial(0x42);
            IPsoc->writeSerial(0x13);
*/			IPsoc->switchFly();

            ui.Internal->setVisible(false);
            ui.External->setVisible(true);
    		ui.ah1_inner->setVisible(false);
    		ui.ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
    		ui.ah1_outer->setGeometry(22,26,41,41);

    		ui.ah2_inner->setVisible(false);
    		ui.ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
    		ui.ah2_outer->setGeometry(96,26,41,41);

    		ui.ah3_inner->setVisible(false);
    		ui.ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
    		ui.ah3_outer->setGeometry(167,26,41,41);

    		ui.ah0_inner->setVisible(false);
    		ui.ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
    		ui.ah0_outer->setGeometry(237,26,41,41);

    		ui.fp_VI1_ICM_SL->setGeometry(24,20,41,41);
    		ui.fp_VI1_ICM_SL->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

    		ui.fp_VI2_EXT->setGeometry(110,20,41,41);
    		ui.fp_VI2_EXT->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

    		QStringList stringList;
    		bool ok=true;
    		QFile textFile;
    	    if(ui.External->isVisible())
    	    	textFile.setFileName("shortValuesE.txt");
    	    if(ui.Internal->isVisible())
    	    	textFile.setFileName("shortValuesI.txt");

    	    if (textFile.open(QIODevice::ReadOnly))
    	    {
    	        QTextStream textStream(&textFile);
    	        while (!textStream.atEnd())
    	        {
    	            stringList.append(textStream.readLine());
    	        }
    	        r200EShortValue=stringList.value(0).toDouble(&ok);
    	        qDebug()<<"200E Short Value:"<<r200EShortValue;
    	        r2EShortValue=stringList.value(1).toDouble(&ok);
    	        qDebug()<<"2E Short Value:"<<r2EShortValue;
    	       	r200mEShortValue=stringList.value(2).toDouble(&ok);
    	        qDebug()<<"200mE Short Value:"<<r200mEShortValue;
    	    }else{
    	        r200EShortValue=r200mEShortValue=r2EShortValue=0.0;
    	    }

}

void ShortLocater::on_External_clicked()
{
	IPsoc->resetRelays();
//    IPsoc->shLocatorDetection();
    ui.Internal->setVisible(true);
    ui.External->setVisible(false);
	ui.ah1_inner->setVisible(true);
	ui.ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui.ah1_outer->setGeometry(22,26,41,41);

	ui.ah2_inner->setVisible(true);
	ui.ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui.ah2_outer->setGeometry(96,26,41,41);

	ui.ah3_inner->setVisible(true);
	ui.ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui.ah3_outer->setGeometry(167,26,41,41);

	ui.ah0_inner->setVisible(true);
	ui.ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui.ah0_outer->setGeometry(237,26,41,41);

	ui.fp_VI1_ICM_SL->setGeometry(24,20,53,49);
	ui.fp_VI1_ICM_SL->setStyleSheet("border:1px rgba(0,0,0,0);border-radius:20px;image: url(:/fp_images/VI_SL_ICM.png);");

	ui.fp_VI2_EXT->setGeometry(110,20,41,41);
	ui.fp_VI2_EXT->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

	QStringList stringList;
	bool ok=true;
	QFile textFile;
    if(ui.External->isVisible())
    	textFile.setFileName("shortValuesE.txt");
    if(ui.Internal->isVisible())
    	textFile.setFileName("shortValuesI.txt");

    if (textFile.open(QIODevice::ReadOnly))
    {
        QTextStream textStream(&textFile);
        while (!textStream.atEnd())
        {
            stringList.append(textStream.readLine());
        }
        r200EShortValue=stringList.value(0).toDouble(&ok);
        qDebug()<<"200E Short Value:"<<r200EShortValue;
        r2EShortValue=stringList.value(1).toDouble(&ok);
        qDebug()<<"2E Short Value:"<<r2EShortValue;
       	r200mEShortValue=stringList.value(2).toDouble(&ok);
        qDebug()<<"200mE Short Value:"<<r200mEShortValue;
    }else{
        r200EShortValue=r200mEShortValue=r2EShortValue=0.0;
    }
}

void ShortLocater::on_openShortEnable_clicked(bool checked)
{

}
