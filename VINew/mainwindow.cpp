#include "mainwindow.h"
#include "ui_mainwindow.h"



#define REFERENCE_FILENAME	"./CalibrationReference.bin"
#define	ACTUAL_FILENAME	"./ActualData.bin"

const 	QString knobON="QPushButton{background-color:rgba(0,0,0,0);border:1px solid rgba(0,0,0,0);image: url(:/res/knob_on.svg);}";
const	QString knobOFF="QPushButton{background-color:rgba(0,0,0,0);border:1px solid rgba(0,0,0,0);image: url(:/res/knob_off.svg);}";
//const 	QString highlightON="QGroupBox{border:1px solid white;/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #3a5976, stop: 1 #000000);border-radius:10px;"
//		"					border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);"
//		"						border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}";
//
//const 	QString highlightOFF ="QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;border-top:1px solid gray; border-top-right-radius: 0px; border-top-left-radius: 0px;}";


QString highlightON="QGroupBox{border:1px solid white; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-radius:0px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}";
QString PCBoxON="QGroupBox{border:1px solid white; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}";
//QString highlightOFF="QGroupBox{border:1px rgba(0,0,0,0); background-color: rgba(0,0,0,0); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}";
QString highlightOFF="QGroupBox{border:1px solid white; background-color: #dadbde;border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde);border-top:1px solid gray;border-top:1px solid gray;}";
QString highlightOFF2="QGroupBox{border:1px solid white;background-color: #dadbde;border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde);border-top:1px solid gray;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}";

MainWindow::MainWindow(QWidget *parent) :
    		QMainWindow(parent),
    		ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);
	m_objVISubject = new VIModel();
	m_objVISubject->registerObserver(0,this);
	InitializeUILibraries();
	InitializeVIFunctions();
	InitializeLegendLabels();
	on_butProClip_clicked();

}

void MainWindow::InitializeVIFunctions()
{
	objInteractiveData.InitialiseMap();
	m_objVIButtonGroup = new QButtonGroup(this);
	m_objVIButtonGroup->addButton(ui->butClip,0);
	m_objVIButtonGroup->addButton(ui->butProbe,1);
	m_objVIButtonGroup->addButton(ui->butL,2);
	m_objVIButtonGroup->addButton(ui->butM,3);
	m_objVIButtonGroup->addButton(ui->butR,4);
	m_objVIButtonGroup->addButton(ui->butUP,5);
	m_objVIButtonGroup->addButton(ui->butDown,6);

	connect(m_objVIButtonGroup,SIGNAL(buttonPressed(int)),this,SLOT(shrinkSize(int)));
	connect(m_objVIButtonGroup,SIGNAL(buttonReleased(int)),this,SLOT(restoreSize(int)));


	m_objFunctionalObject = new VIFunctionalLogic();
	m_objWaveFactory = new WaveFormFactory();
	VIProduct = m_objWaveFactory->getWaveProduct("VI", this);
	VIProduct->setDimensions(17, 40, 324, 272);
	VIProduct->setTickValue(0);
	VIProduct->setFocusPolicy(Qt::NoFocus);
	m_objVISubject->setWaveType(IV);

	ui->butZoom->setParent(VIProduct);

	LoadInteractiveValues();
	LoadEmbeddedKeys();

	m_objFunctionalObject->setVISubject(m_objVISubject);
	//    	m_objFunctionalObject->switchPROBES(PROBE1);
	//    	on_butProbe1_clicked();
	m_objFunctionalObject->setCalibDataMap();

	m_nWaveIndex=0;
	m_nStoreWaveIndex=1;
	m_nSelectInteractiveParam=0;
	m_bAutoCurveFit=msgBoxLive=false;
	m_nSelectedProbe=0;
	m_startTimer=false;
	m_nDualIndex=0;
	m_nToggleIndex=0;
	m_isProbesOnly=true;
	isCompareActive = false;
	m_biSLearnFlag=false;
	isChangeActive=isChangeActive1=false;
	m_nPOSCalibRange = m_nNegCalibRange= MID_RANGE;
	m_ISCalibDone = true;
	m_bParamFlag=false;
	m_bClipLearn=false;
	m_bPCMode=false;
	m_bStartApp = true;


	m_objFunctionalObject->DISABLEINT();
	m_objFunctionalObject->ENINT();


	//ui->butLearn->setDisabled(true);
	ui->butVerify->setDisabled(true);

	m_objFunctionalObject->setTickValue(0);
	readVISettings();
	on_tblVI_clicked();

	//ui->butViewTrace->setVisible(false);
	//on_butAM_clicked();

}

void MainWindow::InitializeLegendLabels(){

    QString legendlabelStyle="color:#d9d9d9";
    QFont legendFont(QFont("DejaVu Sans", 10, 75, false));
    int rightSP=600,leftSP=5,legendLabelWidth=150,legendLabelHeight=17,traceLabelWidth=60;

    l_objProbeStatus    =   new QLabel(VIProduct);
    l_objProbeStatus->setFont(legendFont);
    l_objProbeStatus->setStyleSheet(legendlabelStyle);
    l_objProbeStatus->setGeometry(leftSP,524,legendLabelWidth,legendLabelHeight);
    l_objProbeStatus->setText("SINGLE : PROBE-1");

    l_objPassFail       =   new QLabel(VIProduct);
    l_objPassFail->setFont(legendFont);
    l_objPassFail->setStyleSheet(legendlabelStyle);
    l_objPassFail->setGeometry(rightSP,45,legendLabelWidth,legendLabelHeight);
    l_objPassFail->setText("RESULT : PASS");

    l_objErrorPercentage=   new QLabel(VIProduct);
    l_objErrorPercentage->setFont(legendFont);
    l_objErrorPercentage->setStyleSheet(legendlabelStyle);
    l_objErrorPercentage->setGeometry(rightSP,25,legendLabelWidth,legendLabelHeight);
    l_objErrorPercentage->setText("ERROR  : 5%");

    l_objLearnVerify    =   new QLabel(VIProduct);
    l_objLearnVerify->setFont(legendFont);
    l_objLearnVerify->setStyleSheet(legendlabelStyle);
    l_objLearnVerify->setGeometry(rightSP,5,legendLabelWidth,legendLabelHeight);
    l_objLearnVerify->setText("LEARNING.....");

    l_objTraceNumber1    =   new QLabel(VIProduct);
    l_objTraceNumber1->setFont(legendFont);
    l_objTraceNumber1->setPalette(QColor(200,0,0));
    l_objTraceNumber1->setGeometry(leftSP,5,traceLabelWidth,legendLabelHeight);
    l_objTraceNumber1->setText("REF -----");

    l_objTraceNumber2    =   new QLabel(VIProduct);
    l_objTraceNumber2->setFont(legendFont);
    l_objTraceNumber2->setPalette(colorForIds[1]);
    l_objTraceNumber2->setGeometry(leftSP,20,traceLabelWidth,legendLabelHeight);
    l_objTraceNumber2->setText("T1   -----");

    l_objTraceNumber3    =   new QLabel(VIProduct);
    l_objTraceNumber3->setFont(legendFont);
    l_objTraceNumber3->setPalette(colorForIds[2]);
    l_objTraceNumber3->setGeometry(leftSP,35,traceLabelWidth,legendLabelHeight);
    l_objTraceNumber3->setText("T2   -----");

    l_objTraceNumber4    =   new QLabel(VIProduct);
    l_objTraceNumber4->setFont(legendFont);
    l_objTraceNumber4->setPalette(colorForIds[3]);
    l_objTraceNumber4->setGeometry(leftSP,50,traceLabelWidth,legendLabelHeight);
    l_objTraceNumber4->setText("T3   -----");

    l_objTraceNumber5    =   new QLabel(VIProduct);
    l_objTraceNumber5->setFont(legendFont);
    l_objTraceNumber5->setPalette(colorForIds[4]);
    l_objTraceNumber5->setGeometry(leftSP,65,traceLabelWidth,legendLabelHeight);
    l_objTraceNumber5->setText("T4   -----");

    l_objRefType        =   new QLabel(VIProduct);
    l_objRefType->setFont(legendFont);
    l_objRefType->setStyleSheet(legendlabelStyle);
    l_objRefType->setGeometry(leftSP,447,legendLabelWidth,legendLabelHeight);
    l_objRefType->setText("REF      : FIXED");

    l_objCombinations   =   new QLabel(VIProduct);
    l_objCombinations->setFont(legendFont);
    l_objCombinations->setStyleSheet(legendlabelStyle);
    l_objCombinations->setGeometry(leftSP,467,legendLabelWidth,legendLabelHeight);
    l_objCombinations->setText("COMB  : 19");

    l_objDriveSettings  =   new QLabel(VIProduct);
    l_objDriveSettings->setFont(legendFont);
    l_objDriveSettings->setStyleSheet(legendlabelStyle);
    l_objDriveSettings->setGeometry(leftSP,506,150,legendLabelHeight);
    l_objDriveSettings->setText("DRIVE   : 2.5V_2KE_2KHz");

    l_objComparison     =   new QLabel(VIProduct);
    l_objComparison->setFont(legendFont);
    l_objComparison->setStyleSheet(legendlabelStyle);
    l_objComparison->setGeometry(leftSP,487,legendLabelWidth,legendLabelHeight);
    l_objComparison->setText("COMP   : AVERAGE");

    l_objKeyLeft        =   new QLabel(VIProduct);
    l_objKeyLeft->setFont(legendFont);
    l_objKeyLeft->setStyleSheet(legendlabelStyle);
    l_objKeyLeft->setGeometry(rightSP,487,legendLabelWidth,legendLabelHeight);
    l_objKeyLeft->setText("L  : RUN/STOP");

    l_objKeyRight       =   new QLabel(VIProduct);
    l_objKeyRight->setFont(legendFont);
    l_objKeyRight->setStyleSheet(legendlabelStyle);
    l_objKeyRight->setGeometry(rightSP,524,legendLabelWidth,legendLabelHeight);
    l_objKeyRight->setText("R : DELETE");

    l_objKeyMiddle      =   new QLabel(VIProduct);
    l_objKeyMiddle->setFont(legendFont);
    l_objKeyMiddle->setStyleSheet(legendlabelStyle);
    l_objKeyMiddle->setGeometry(rightSP,506,legendLabelWidth,legendLabelHeight);
    l_objKeyMiddle->setText("M : STORE");

	l_objTraceNumber1->setVisible(false);
	l_objTraceNumber2->setVisible(false);
	l_objTraceNumber3->setVisible(false);
	l_objTraceNumber4->setVisible(false);
	l_objTraceNumber5->setVisible(false);

	l_objLearnVerify->setVisible(false);
	l_objErrorPercentage->setVisible(false);
	l_objPassFail->setVisible(false);

	l_objRefType->setVisible(false);
	l_objCombinations->setVisible(false);
	l_objComparison->setVisible(false);

}
void MainWindow::UpdateLegendLabels(){
    l_objDriveSettings->setText("DRIVE   : "+ui->lblVoltage->text()+"_"+ui->lblImpedance->text()+"_"+ui->lblFrequency->text());

    if(ui->lblLeft->text()=="RUN/STOP")
        l_objKeyLeft->setText("L  : RUN/STOP");
    else if(ui->lblLeft->text()=="VOL/FQ/IMP")
        l_objKeyLeft->setText("L  : VOLTAGE");
    else
        l_objKeyLeft->setText("L  : "+ui->lblLeft->text());

    l_objKeyRight->setText("R : "+ui->lblRight->text());
    l_objKeyMiddle->setText("M : "+ui->lblMiddle->text());
}

void MainWindow::setGraphValues()
{
	QStringList l_nVoltageArray;
	QStringList l_strTimeBase;
	l_strTimeBase.insert(0,"100ms");l_strTimeBase.insert(1,"50ms");
	l_strTimeBase.insert(2,"20ms");l_strTimeBase.insert(3,"10ms");
	l_strTimeBase.insert(4,"5ms");l_strTimeBase.insert(5,"2ms");
	l_strTimeBase.insert(6,"1ms");l_strTimeBase.insert(7,"500us");
	l_strTimeBase.insert(8,"200us");l_strTimeBase.insert(9,"100us");
	l_strTimeBase.insert(10,"50us");l_strTimeBase.insert(11,"10us");
	l_strTimeBase.insert(12,"5us");
	double l_nVoltArr[4] = {0.2,2.5,8.0,13.0};
	unsigned int l_nImpedanceArray[16] = {10,20,50,100,200,500,1000,2000,5000,10000,20000,50000,100000,200000,500000,1000000};
	l_nVoltageArray.insert(0,"0.2V");l_nVoltageArray.insert(1,"2.5V");l_nVoltageArray.insert(2,"8.0V");l_nVoltageArray.insert(3,"13.0V");
	unsigned int l_nImpedanceValue = l_nImpedanceArray[m_objVISubject->getIndexTemplate(2)] ;
	QString l_strImpedance = "";
	double l_nI = 0.0;


	l_nI = (l_nVoltArr[m_objVISubject->getIndexTemplate(0)] / l_nImpedanceValue) / pow(10, -3);
	//   qDebug()<<"Impedance:"<<l_nImpedanceValue<<"Data:"<<l_nI<<l_nVoltArr[m_objVISubject->getIndexTemplate(0)];
	l_strImpedance = QString::number(l_nI, 'f', 2) + "mA";
	if (l_nImpedanceValue > 20000)
		l_strImpedance = QString::number(l_nI * 1000, 'f', 2) + "uA";

	if(m_objVISubject->getWaveType() == IV)
	{
		VIProduct->setLabels(l_nVoltageArray.value(m_objVISubject->getIndexTemplate(0)), l_strImpedance, "-"+l_nVoltageArray.value(m_objVISubject->getIndexTemplate(0)), "-"+ l_strImpedance);
	}
	QString l_strVoltage = "";
	l_strVoltage = l_nVoltageArray.value(m_objVISubject->getIndexTemplate(0));
	if (m_objVISubject->getWaveType() == VT)
	{
		VIProduct->setLabels("0", l_strVoltage, l_strTimeBase.value(m_objVISubject->getIndexTemplate(1)), "-" + l_strVoltage);
	}
}

void MainWindow::LoadInteractiveValues()
{
	m_nVoltageIndex = m_objVISubject->getIndexTemplate(0);
	m_nFrequencyIndex = m_objVISubject->getIndexTemplate(1);
	m_nImpedanceIndex = m_objVISubject->getIndexTemplate(2);

	LoadLowerLayer();
	LoadMiddelLayer();
	LoadUpperLayer();
}

void MainWindow::LoadMiddelLayer()
{
	ui->lblFrequency->setText(objInteractiveData.getFrequencyMap(m_nFrequencyIndex));
	ui->lblImpedance->setText(objInteractiveData.getImpedanceMap(m_nImpedanceIndex));
	ui->lblVoltage->setText(objInteractiveData.getVoltageMap(m_nVoltageIndex));
}

void MainWindow::LoadUpperLayer()
{   short int l_nIndex=0;
if(m_nFrequencyIndex<12)
	l_nIndex = m_nFrequencyIndex+1;
else
	l_nIndex = m_nFrequencyIndex;
ui->lblnxtFrequecy->setText(objInteractiveData.getFrequencyMap(l_nIndex));
if(m_nImpedanceIndex<14)
	l_nIndex = m_nImpedanceIndex+1;
else
	l_nIndex = m_nImpedanceIndex;
ui->lblnxtImpedance->setText(objInteractiveData.getImpedanceMap(l_nIndex));
if(m_nVoltageIndex<3)
	l_nIndex = m_nVoltageIndex+1;
else
	l_nIndex = m_nVoltageIndex;
ui->lblnxtVoltage->setText(objInteractiveData.getVoltageMap(l_nIndex));
}

void MainWindow::LoadLowerLayer()
{
	//qDebug()<<"Voltage Index:"<<m_nVoltageIndex;

	short int l_nIndex=0;
	if(m_nFrequencyIndex>0)
		l_nIndex = m_nFrequencyIndex-1;
	else
		l_nIndex = m_nFrequencyIndex;
	ui->lblPrevFrequency->setText(objInteractiveData.getFrequencyMap(l_nIndex));
	if(m_nImpedanceIndex>0)
		l_nIndex = m_nImpedanceIndex-1;
	else
		l_nIndex = m_nImpedanceIndex;

	ui->lblPrevImpedance->setText(objInteractiveData.getImpedanceMap(l_nIndex));
	if(m_nVoltageIndex>0)
		l_nIndex = m_nVoltageIndex-1;
	else{

		l_nIndex = m_nVoltageIndex;
	}
	ui->lblPrevVoltage->setText(objInteractiveData.getVoltageMap(l_nIndex));
}
void MainWindow::InitializeUILibraries()
{
	// PTKeyEventInterfaces
	QPluginLoader loader2("libPTKeyEventInterfaces.so",this);
	IPTKeyEvent = qobject_cast<PTEventInterface*>(loader2.instance());
	IPTKeyEvent->InvokeGPIOEvent(this, "/dev/input/event2", "pt_kpp", &m_nPTKeyCode);

	// GPIO Envet
	QPluginLoader loader3("libGPIOEventInterface.so",this);
	IGPIOEvent = qobject_cast<PTGPIOEventInterface*>(loader3.instance());
	IGPIOEvent->InvokeGPIOEvent(this, "/dev/input/event7", "gpioevent", &m_nKeyCode);

	QPluginLoader loader8("libCalibrationInterface.so",this);
	ICALIB = qobject_cast<InterfaceCalibrationLib*>(loader8.instance());
	//qDebug()<<"qq";

	QPluginLoader loaderSplash("libPTSplashInterface.so", this);
	ISplash = qobject_cast<PTSplashScreen*> (loaderSplash.instance());
	ISplash->getSplashWidget(this);

	QPluginLoader loader9("libPTGPIOPinInterface.so",this);
	IGPIOPin = qobject_cast<InterfaceGPIOPins*>(loader9.instance());
	m_objEmbedded = new EmbeddedKeys(this,m_objVISubject);
	m_objProbeDialog = new SelectProbe(this,m_objVISubject);
	m_objClipDialog = new ClipDialog(this,m_objVISubject);
	ui->butViewTrace->setDisabled(true);
	ui->grpClip->setVisible(false);
	ui->singleCap_2->setVisible(false);
	ui->butAM->setVisible(false);
	ui->lblProbeComparison_2->setText("Average : 5%");//added by rravivarman huly 24th 2014
	//~~~~~~~~Check for debug panel~~~~~~~~~~~~~~~~~~~~~~~~
	QStringList l_strdebugPanel;
	QFile textFile2("debugPanel.txt");
	if (textFile2.open(QIODevice::ReadOnly))
	{
		QTextStream textStream(&textFile2);
		while (!textStream.atEnd())
		{
			l_strdebugPanel.append(textStream.readLine());
			if(l_strdebugPanel.value(0)=="1"){
				ui->debugPanel->setVisible(true);
				ui->frontPanel_VI->setVisible(false);
			}
			else{
				ui->debugPanel->setVisible(false);
				ui->frontPanel_VI->setVisible(true);
			}
		}
	}else{
		ui->debugPanel->setVisible(false);
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~Load X-Y Axis Box~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	QStringList stringList;
	bool ok=true;
	QFile textFile("AdjustXYaxisVI.txt");
	if (textFile.open(QIODevice::ReadOnly))
	{
		QTextStream textStream(&textFile);
		while (!textStream.atEnd())
		{
			stringList.append(textStream.readLine());
		}
		ui->xAxisBox->setValue(stringList.value(0).toDouble(&ok));
		ui->yAxisBox->setValue(stringList.value(1).toDouble(&ok));
	}else{
		ui->xAxisBox->setValue(0.0);
		ui->yAxisBox->setValue(0.0);
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}

void MainWindow::notifyClipObserver()
{
	if( m_objVISubject->getChipDialog(0) == 0)
	{
            ui->lblClip->setText("14 Pins");
	}
	else if( m_objVISubject->getChipDialog(0) == 1)
	{
		ui->lblClip->setText("20 Pins");
	}
	else if( m_objVISubject->getChipDialog(0) == 2)
	{
		ui->lblClip->setText("24 Pins");
	}
	else if( m_objVISubject->getChipDialog(0) == 3)
	{
		ui->lblClip->setText("28 Pins");
	}
	//	ui->grpClip->setDisabled(false);
	//~~~~~~~~~~~~~~~~~~~~//added on 31st july by Ravivarman
	/*
	m_objFunctionalObject->resetPSOC();
     usleep(1000);
     m_objFunctionalObject->writePSOC(0x42);
     m_objFunctionalObject->writePSOC(0x9);
     usleep(1000);
     m_objFunctionalObject->writePSOC(0x42);
     m_objFunctionalObject->writePSOC(0x15);
	 */
	//~~~~~~~~~~~~~~~~~~~~
	ui->butLearn->setDisabled(false);
	ui->butVerify->setDisabled(false);
	m_objFunctionalObject->generateChannels();
	if(m_objVISubject->getChipDialog(2) == 0)
	{
		m_objFunctionalObject->generateFixedReference();
		ui->lblRefereceType->setText("Fixed");
                l_objRefType->setText("REF      : FIXED");
		ui->lblNC->setText(QString::number(m_objVISubject->getChipDialog(4)));
                l_objCombinations->setText("COMB  : "+QString::number(m_objVISubject->getChipDialog(4)));
	}
	else if(m_objVISubject->getChipDialog(2) == 1)
	{
		m_objFunctionalObject->generateMovingReference();
		ui->lblRefereceType->setText("Moving");
                l_objRefType->setText("REF      : MOVING");
		ui->lblNC->setText(QString::number(m_objVISubject->getChipDialog(4)));
                l_objCombinations->setText("COMB  : "+QString::number(m_objVISubject->getChipDialog(4)));
	}
        if(m_objVISubject->getChipDialog(5) == 0){
		ui->lblComparisonMode->setText("Average");
                l_objComparison->setText("COMP   : AVERAGE");
            }
        else{
		ui->lblComparisonMode->setText("Envelope");
                l_objComparison->setText("COMP   : ENVELOPE");
            }
	m_isProbesOnly =false;
        m_bClipLearn=false;

        l_objCombinations->setVisible(true);
        l_objComparison->setVisible(true);
        l_objRefType->setVisible(true);
        l_objLearnVerify->setVisible(true);
        l_objLearnVerify->setText("LEARN.");
}

void MainWindow::notifyProbeObserver()
{
	ui->butLearn->setDisabled(true);
	ui->butVerify->setDisabled(true);
	ui->butViewTrace->setDisabled(true);
	ui->lblProbe1->setText("Probe 1");
	ui->lblProbe2->setText("Probe 2");
	//		qDebug() << "Probe Observer Notification:"<<m_objVISubject->getProbeDialog(0);
	if(m_objVISubject->getProbeDialog(1) == 0){
		ui->lblProbeComparison_2->setText("Average : "+QString::number(m_objVISubject->getProbeThreshold())+"%");
	}
	else
	{
		ui->lblProbeComparison_2->setText("Envelope : "+QString::number(m_objVISubject->getProbeThreshold())+"%");
	}
	if(m_objVISubject->getProbeDialog(0) == 0){

		//			qDebug()<<"SINGLE";
		if(m_nSelectedProbe==0){
			m_objFunctionalObject->switchPROBES(PROBE1);
			on_butProbe1_clicked();
			l_objProbeStatus->setText("SINGLE : PROBE-1");
		}
		else if(m_nSelectedProbe==1){
			m_objFunctionalObject->switchPROBES(PROBE2);
			on_butProbe2_clicked();
			l_objProbeStatus->setText("SINGLE : PROBE-2");
		}
		/*			else if(m_nSelectedProbe==2){
				m_objFunctionalObject->switchPROBES(EXT_PROBE);
				on_butExternal_clicked();
			}//commented by rravivarman 24th july 2014*/
		else if(m_nSelectedProbe==3){
			m_objFunctionalObject->switchPROBES(EXT_FLY);
			on_butExternal_2_clicked();
			l_objProbeStatus->setText("ANALOG HIGHWAY");
		}
		m_objVISubject->clearWaveTraces();
		for(int l_nDeleteIndex=1;l_nDeleteIndex<m_nStoreWaveIndex;l_nDeleteIndex++)
		{
			VIProduct->clearCurves(l_nDeleteIndex);
		}

		IGPIOEvent->setProbeFlag(0);
		//m_objProbeDialog->close();
		m_nStoreWaveIndex=1;
		ui->butExternal_2->setDisabled(false);
		ui->lblProbeType->setText("SINGLE");
	}
	else if(m_objVISubject->getProbeDialog(0) == 1 )//&&  m_objFunctionalObject->getProbeStatus() == DUALPROBE)
	{
		//			qDebug()<<"DUAL";
		ui->lblProbeComparison_2->setText("Average : "+QString::number(m_objVISubject->getProbeThreshold())+"%");
		/*		    ui->frame_23->setStyleSheet("border:0px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;image: url(:/res/icm.png)");
		    ui->frame_22->setStyleSheet("border:0px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;image: url(:/res/icm.png)");
		    ui->frame_22->setGeometry(17,30,90,40);
		    ui->frame_23->setGeometry(17,80,90,40);
		    ui->frame_20->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;");
		    ui->frame_20->setGeometry(120,38,100,15);02072014*/
		ui->butProbe1->setStyleSheet(knobON);
		ui->butProbe2->setStyleSheet(knobON);
		ui->butExternal_2->setStyleSheet(knobOFF);

		if(m_objVISubject->getProbeDialog(4)==0)
		{
			ui->lblProbe1->setText("Probe1-Ref");
			m_nSelectedProbe=0;
		}
		else
		{
			ui->lblProbe2->setText("Probe2-Ref");
			m_nSelectedProbe=1;
		}
		m_objVISubject->clearWaveTraces();
		for(int l_nDeleteIndex=1;l_nDeleteIndex<m_nStoreWaveIndex;l_nDeleteIndex++)
		{
			VIProduct->clearCurves(l_nDeleteIndex);
		}
		ui->butExternal_2->setDisabled(true);
		IGPIOEvent->setProbeFlag(1);
		m_nStoreWaveIndex=2;
		ui->lblProbeType->setText("DUAL");
		l_objProbeStatus->setText("DUAL PROBE");

		ui->ah1_inner->setVisible(true);
		ui->ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
		ui->ah1_outer->setGeometry(22,26,41,41);

		ui->ah2_inner->setVisible(true);
		ui->ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
		ui->ah2_outer->setGeometry(96,26,41,41);

		ui->ah3_inner->setVisible(true);
		ui->ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
		ui->ah3_outer->setGeometry(167,26,41,41);

		ui->ah0_inner->setVisible(true);
		ui->ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
		ui->ah0_outer->setGeometry(237,26,41,41);

		ui->fp_VI1_ICM_SL->setGeometry(24,20,53,49);
		ui->fp_VI1_ICM_SL->setStyleSheet("border:1px rgba(0,0,0,0);border-radius:20px;image: url(:/fp_images/VI_SL_ICM.png);");

		ui->fp_VI2_EXT->setGeometry(105,20,53,49);
		ui->fp_VI2_EXT->setStyleSheet("border:1px rgba(0,0,0,0);border-radius:20px;image: url(:/fp_images/VI_SL_ICM.png);");
	}
	m_isProbesOnly=true;
	//enableInteractiveGrp();
	readVISettings();
	//m_bClipLearn=false;

}

void MainWindow::notifySubject()
{
	LoadEmbeddedKeys();
}

void MainWindow::updateVI()
{
	updateCalibrationData();
}

void MainWindow::updateCalibrationData()
{
	stWaveData *l_objWaveData = m_objFunctionalObject->showVITrace(m_nWaveIndex,m_objVISubject->getIndexTemplate(0));
	l_objWaveData->m_bCalibChecked=false;
	l_objWaveData->m_nCalibrationConstant=m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objWaveData->m_nCalibrationGain=m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));
	VIProduct->LoadVIData(REFERENCE_FILENAME, REFERENCE_FILENAME, 0,m_nWaveIndex, l_objWaveData);
	setGraphValues();
}


MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
	QMainWindow::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}

bool MainWindow::showMessageBox(bool ok, bool cancel, QString text, QString okText ="Ok", QString calcelText = "Cancel") {
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
	}
	if (cancel == true) {
		abortButton = msgBox->addButton(calcelText, QMessageBox::NoRole);
		abortButton->setFont(QFont("DejaVu Sans", 20, 50, false));
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

bool MainWindow::checkProbeStatus()
{
	//		qDebug()<<"Probe Dialog Status:"<<m_objVISubject->getProbeDialog(0);
	//		unsigned short l_nProbeStaus=m_objFunctionalObject->getProbeStatus();

	//        qDebug()<<"MainWindow::Probe Status:"<<hex<< l_nProbeStaus;
	qDebug()<<"check probe status";
	if(m_objVISubject->getProbeDialog(0) ==0)
	{
		if(m_nSelectedProbe==0)
		{
			m_objFunctionalObject->writePSOC(0x01);
			usleep(1000);
			if((m_objFunctionalObject->readPSOC()&0x08)!=0x08)
			{

				/*IPTMessageBox->QMsgBox*/showMessageBox(true,false,"Connect Probe1");
				return false;
			}//commented on 18062014 RRV
		}
		else if(m_nSelectedProbe==1)
		{
			m_objFunctionalObject->writePSOC(0x01);
			usleep(1000);
			if((m_objFunctionalObject->readPSOC()&0x80)!=0x80)
				//                        if((m_objFunctionalObject->getProbeStatus()&0x80)!=0x80)
			{
				/*IPTMessageBox->QMsgBoxshowMessageBox*/showMessageBox(true,false,"Connect Probe2");
				return false;
			}//commented on 18062014 RRV
		}
		else if( m_nSelectedProbe==3)/*2 && m_bAutoCurveFit == false)//by rravivarman 24thjuly204*/
		{
			if(/*IPTMessageBox->QMsgBox*/showMessageBox(true, true, "Ensure Analog Highway Cables are connected.")==true)
				return true;
			else
				return false;//commented on 18062014 RRV
		}
	}
	else if(m_objVISubject->getProbeDialog(0) ==1)
	{
		m_objFunctionalObject->writePSOC(0x01);
		usleep(1000);
		unsigned int prStatus=m_objFunctionalObject->readPSOC()& 0x88;

		if(prStatus==0x08){
			showMessageBox(true,false,"Connect Probe2");
			return false;
		}
		else if(prStatus==0x80){
			showMessageBox(true,false,"Connect Probe1");
			return false;
		}
		else if(prStatus==0x0)
		{
			showMessageBox(true,false,"Connect Probe1 & Probe2");
			return false;
		}
	}

	return true;
}

void MainWindow::clickedPRSCR()
{
	QPixmap Pix;
	Pix = QPixmap();
	//Pix = QPixmap::grabWidget(ui->FGSubwindow,0,0,800,600);
	Pix = QPixmap::grabWindow(this->parentWidget()->winId());
	Pix.save("MultipleTraces.jpg");
	QClipboard *board = QApplication::clipboard();
	board->setPixmap(Pix);
	QWidget::showFullScreen();
}

void MainWindow::doKeyFunction(int pKeyCode)
{

	if(m_bPCMode == false) return;
	QMap<QString,short int> m_mapKeyToFunction;
	//IGPIOEvent->BlockSig(true);
	int l_nTopKeyCode = pKeyCode & 0xF0;
	int l_nBottomKeyCode = pKeyCode & 0x0F;
	short int l_nIncrementIndex = 0, l_nDecrementIndex = 0;
	bool l_BKey=false,l_nTKey=false;
	if (l_nTopKeyCode == 0x80)
	{
		qDebug() << "Probe-1 is Pressed";
		pKeyCode = pKeyCode & 0x0F;
		l_nTKey=true;
	}
	if (l_nBottomKeyCode == 0x08)
	{
		qDebug() << "Probe-2 is Pressed";
		pKeyCode = pKeyCode & 0xF0;
		l_BKey=true;
	}
	if(m_nSelectedProbe==0 && l_BKey==true)
		return;
	if(m_nSelectedProbe==1 && l_nTKey==true)
		return;
	qDebug() << "KeyCode-line564:"<<hex<<pKeyCode;

	if ((m_objVISubject->getIndexTemplate(0,true) == "VOL/FQ/IMP" && (pKeyCode == 0x0c || pKeyCode == 0x90))
			|| (m_objVISubject->getIndexTemplate(1,true) == "VOL/FQ/IMP" && (pKeyCode == 0x0a || pKeyCode == 0xa0))
			|| (m_objVISubject->getIndexTemplate(2,true) == "VOL/FQ/IMP" && (pKeyCode == 0x09 || pKeyCode == 0xc0))) {
		if (m_nToggleIndex == 0) {
			m_strFunctionKey = "VOLTAGE";
                        UpdateLegendLabels();//Zoom Legend Update
		}
		if (m_nToggleIndex == 2) {
			m_strFunctionKey = "FREQUENCY";
                        UpdateLegendLabels();//Zoom Legend Update
		}
		if (m_nToggleIndex == 1) {
			m_strFunctionKey = "IMPEDANCE";
                        UpdateLegendLabels();//Zoom Legend Update
		}
		//                    qDebug()<<"Toggle Index:"<<m_nToggleIndex;
		//switchString(m_nToggleIndex);
                l_objKeyLeft->setText("L :  "+m_strFunctionKey);//Zoom Left Key Update
	}

	if (m_objVISubject->getIndexTemplate(0,true) == "VOLTAGE" ||m_objVISubject->getIndexTemplate(1,true)
			== "VOLTAGE" || m_objVISubject->getIndexTemplate(2,true) == "VOLTAGE"
					|| m_strFunctionKey == "VOLTAGE") {
		l_nIncrementIndex = 0;
		l_nDecrementIndex = 3;
		m_nSelectInteractiveParam=0;
		switchString(0);
	}
	if (m_objVISubject->getIndexTemplate(0,true) == "FREQUENCY" ||m_objVISubject->getIndexTemplate(1,true)
			== "FREQUENCY" || m_objVISubject->getIndexTemplate(2,true) == "FREQUENCY"
					|| m_strFunctionKey == "FREQUENCY")
	{
		l_nIncrementIndex = 1;
		l_nDecrementIndex = 4;
		m_nSelectInteractiveParam=2;
		switchString(2);
	}
	if (m_objVISubject->getIndexTemplate(0,true) == "IMPEDANCE" ||m_objVISubject->getIndexTemplate(1,true)
			== "IMPEDANCE" || m_objVISubject->getIndexTemplate(2,true) == "IMPEDANCE"
					|| m_strFunctionKey == "IMPEDANCE")
	{
		l_nIncrementIndex = 2;
		l_nDecrementIndex = 5;
		m_nSelectInteractiveParam=1;
		switchString(1);
	}
	//IGPIOEvent->BlockSig(true);
	if (pKeyCode == 0x0c || pKeyCode == 0xc0) {
		//qDebug() << "Key Function" << m_objVIModel->getLeftKey();
		switchFunctions(0,l_nIncrementIndex,l_nDecrementIndex);
	}
	else if (pKeyCode == 0x0a || pKeyCode == 0xa0)
	{
		switchFunctions(1,l_nIncrementIndex,l_nDecrementIndex);
		//qDebug() << "Key Function" << m_objVIModel->getMiddleKey();

	} else if (pKeyCode == 0x09 || pKeyCode == 0x90) {
		//for (int l_nIndex = 0; l_nIndex < 10; l_nIndex++)
		//qDebug() << l_nIndex;
		switchFunctions(2,l_nIncrementIndex,l_nDecrementIndex);
		//qDebug() << "Key Function" << m_objVIModel->getRightKey();
	}
	//IGPIOEvent->BlockSig(false);

}

void MainWindow::switchFunctions(short int pKey,short int pIncrement,short int pDecrement)
{

	//        qDebug()<<"Key String:"<<m_objVISubject->getIndexTemplate(pKey,true);
	if (m_objVISubject->getIndexTemplate(pKey,true) == "STORE") {
		on_storeButton_clicked();
	} else if (m_objVISubject->getIndexTemplate(pKey,true) == "DELETE") {
		on_deleteButton_clicked();
	} else if (m_objVISubject->getIndexTemplate(pKey,true) == "RUN") {
		on_startButton_clicked();
	} else if (m_objVISubject->getIndexTemplate(pKey,true) == "STOP")
	{
		//if(m_bAutoCurveFit==true) { buttonPressed(0); return;}
		on_startButton_clicked();
	} else if (m_objVISubject->getIndexTemplate(pKey,true) == "INCREASE")
	{
		on_butUP_clicked();
	} else if (m_objVISubject->getIndexTemplate(pKey,true) == "DECREASE")
	{
		on_butDown_clicked();
	}
	else if (m_objVISubject->getIndexTemplate(pKey,true) == "RUN/STOP") {
		if (m_nSTIndex == 0) {
			on_startButton_clicked();
			m_nSTIndex = 1;
		} else {
			on_startButton_clicked();
			m_nSTIndex=0;
		}
	}
	else if (m_objVISubject->getIndexTemplate(pKey,true) == "VOL/FQ/IMP")
	{
		if (m_strFunctionKey == "VOLTAGE")
			m_nToggleIndex=1;
		else if(m_strFunctionKey == "FREQUENCY")
			m_nToggleIndex=0;
		else if(m_strFunctionKey == "IMPEDANCE")
			m_nToggleIndex=2;

	}
}
void MainWindow::switchString(short int pIndex)
{
	if(pIndex==0)
	{
		on_tblVoltage_clicked();
	}
	else if(pIndex==1)
	{
		on_tblImpedance_clicked();
	}
	else if(pIndex==2)
	{
		on_tblFrequency_clicked();
	}

}

void MainWindow::doPTKeyFunction()
{
	qDebug()<<"doPTKeyFunction"<<m_nPTKeyCode;
	if (m_nPTKeyCode == 4) {
		//qDebug() << ("\nF1");
		if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive!=true)
		{
			on_butProClip_clicked();

		}

		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	}if (m_nPTKeyCode == 5) {
		//qDebug() << ("\nF1");
		if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive!=true)
		{
			on_startButton_clicked();

		}

		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	} else if (m_nPTKeyCode == 6) {
		//qDebug() << ("\nF2");
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
			on_storeButton_clicked();
		}else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	} else if (m_nPTKeyCode == 7) {
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
			on_deleteButton_clicked();
		}
		//qDebug() << ("\nF3");
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	} else if (m_nPTKeyCode == 8) {
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
			on_calibButton_clicked();
		}
		//qDebug() << ("\nF4");
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	} else if (m_nPTKeyCode == 9) {
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
			//buttonPressed(5);
		}
		//qDebug() << ("\nF5");
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	}
	else if (m_nPTKeyCode == 2) {
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
			//buttonPressed(5);
			if(m_objVISubject->getCalibrationStatus()==true){
				if(showMessageBox(true, true, "Do you want to cancel the calibration.") == true)
					m_objVISubject->setCalibrationStatus(false);
			}
			else if(m_objVISubject->getLearnStatus()){
				qDebug()<<"Lean is in Progress";
			}
			else if(m_objVISubject->getVerifyStatus()){
				qDebug()<<"Verify is in Progress";
			}
			else{
				on_exit_clicked();
			}
		}
		//qDebug() << ("\nF5");
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){

		}
	}
	else if (m_nPTKeyCode == 9) { //UP
		//qDebug() << ("\nKEY UP");

		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true)
		{
		}
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true)
		{
		}
	}

	else if (m_nPTKeyCode == 10) { //DOWN
		//qDebug() << ("\nKEY DOWN");
		if (/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive != true) {
		}
		else if(/*IPTMessageBox->GetmsgBoxLiveStatus()*/msgBoxLive==true){
		}
		else if (m_nPTKeyCode == 13)
		{

		}
	}
	else if(m_nPTKeyCode==17){
		clickedPRSCR();
	}


}
void MainWindow::customEvent(QEvent *e)
{
	//qDebug()<<"VI Custom Event";
	QMessageBox msg;
	if (e->type() == ((QEvent::Type) 5678)) {
		doPTKeyFunction();
	}
	if (e->type() == ((QEvent::Type) 3456)) {
		//qDebug() << "inside (QEvent::Type)3456)";
		//doKnobFunction();

	}
	if (e->type() == ((QEvent::Type) 1234)) {
		IGPIOEvent->BlockSig(true);
		if(1){
			m_nKeyCode = m_objFunctionalObject->getProbeStatus();

			qDebug()<<"Custom Event-Key Data:"<<hex<<m_nKeyCode;
		}
		else{
			qDebug()<<"Interrupt not raised";
		}
		doKeyFunction(m_nKeyCode);
		IGPIOEvent->BlockSig(false);
		//m_objFunctionalObject->CLEARINT();
	}
	if(e->type() == ((QEvent::Type)7892))
	{
		//unsigned int l_nRegisterValue = m_objFunctionalObject->readAppcardIntValue();
		//if ((l_nRegisterValue & 0x0040) == 0x0040)
		//qDebug()<<e->type();
		//qDebug()<<"Timer Flag:"<<m_startTimer;
		if(1)
		{
			IGPIOEvent->BlockSig(true);
			if(m_startTimer==true)
			{
				if(m_objVISubject->getProbeDialog(0) == 1)
				{
					if(m_nDualIndex==0){
						m_nDualIndex=1;
						IGPIOEvent->setProbeFlag(1);
					}
					else if(m_nDualIndex==1){
						m_nDualIndex=0;
						IGPIOEvent->setProbeFlag(2);
					}
				}
				else
				{
					m_nDualIndex=0;
				}
				//qDebug()<<"Dual Index:"<<m_nDualIndex;
				startVITimer();
				if(isChangeActive == true)
				{
					m_objFunctionalObject->driveVI();
					isChangeActive=false;
				}
			}
			else if (m_startTimer==false)
			{
				IGPIOEvent->setStopFlag(true);
				stopVITimer();
			}
			IGPIOEvent->BlockSig(false);
		}

	}
	QEvent(e->type());
}

void MainWindow::stopVITimer()
{

	if (m_objVISubject->getProbeDialog(0) == 1)
	{
		VIProduct->clearCurve(1);
		ui->errPallete->setPalette(Qt::gray);
		ui->redPallete->setPalette(Qt::red);
	}
	ui->edtErrPercentage->setText("");
        l_objErrorPercentage->setText("");
	ui->lblPassFail->setText("");
        l_objPassFail->setText("");

    	l_objTraceNumber1->setVisible(false);
    	l_objTraceNumber2->setVisible(false);
    	l_objTraceNumber3->setVisible(false);
    	l_objTraceNumber4->setVisible(false);
    	l_objTraceNumber5->setVisible(false);

    	l_objLearnVerify->setVisible(false);
    	l_objErrorPercentage->setVisible(false);
    	l_objPassFail->setVisible(false);

    	l_objRefType->setVisible(false);
    	l_objCombinations->setVisible(false);
    	l_objComparison->setVisible(false);
	//m_objFunctionalObject->stopDrive();
	//  ui->lblStatus->setText("Idle.");
	//    movie->stop();
}

void MainWindow::startVITimer()
{

	//m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);

	if(m_objVISubject->getProbeDialog(0) == 0 || m_objVISubject->getProbeDialog(0) == 2) // SINGLE PROBE
	{
		m_nDualIndex=0;
		updateInteractive();

		l_objTraceNumber1->setVisible(true);
	}
	else if(m_objVISubject->getProbeDialog(0) == 1 ) // DUAL PROBE
	{
		updateInteractive();

		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(true);
		l_objErrorPercentage->setVisible(true);
		l_objPassFail->setVisible(true);
	}
}

void MainWindow::updateInteractive()
{
	stWaveData *l_objWaveData = m_objFunctionalObject->showVITrace(m_nWaveIndex,m_objVISubject->getIndexTemplate(0));
	l_objWaveData->m_bCalibChecked= true;
	l_objWaveData->m_nCalibrationConstant=m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objWaveData->m_nCalibrationGain=m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));
	// qDebug()<<"Constant:"<<l_objWaveData->m_nCalibrationConstant;
	//  qDebug()<<"Gain:"<<l_objWaveData->m_nCalibrationGain;
	if(m_objVISubject->getProbeDialog(1) == 1)
	{
		l_objWaveData->m_nEnvelopBand = m_objVISubject->getProbeThreshold();
	}
	//CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	//    CALIB l_objCalibData;
	//	l_objCalibData.m_nConstant =l_objWaveData->m_nCalibrationConstant;
	//	l_objCalibData.m_nGain = l_objWaveData->m_nCalibrationGain;
	//	m_objFunctionalObject->setFileBit(true);
	//	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
	//			m_objVISubject->getVoltageValue(), &l_objCalibData);
	// qDebug()<<"Before Conv Actual Pos Peak voltage:"<<m_objVISubject->getPosPeak();
	//  qDebug()<<"After Conv Actual Pos Peak voltage:"<<(m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD<<m_objVISubject->getVoltageValue();
	//
	//qDebug()<<"Before Conv Neg Actual Peak voltage:"<<m_objVISubject->getNegPeak();
	//qDebug()<<"After Conv Neg Actual Peak voltage:"<<(m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD<<m_objVISubject->getVoltageValue();

	//	m_objFunctionalObject->setFileBit(false);
	//m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
	//		m_objVISubject->getVoltageValue(), &l_objCalibData);
	//qDebug()<<"Pos Peak:"<<m_objVISubject->getPosPeak()<<"Neg Peak:"<<m_objVISubject->getNegPeak();
	//commented for mem test--------------
	VIProduct->LoadVIData(REFERENCE_FILENAME, ACTUAL_FILENAME, m_nDualIndex,m_nWaveIndex, l_objWaveData);
	VIProduct->showPixGraph();
	//----------------
	//qDebug()<<"Calib Peak voltage:"<<(m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/0.6;

	if((m_nDualIndex==0||m_nDualIndex==1) && m_objVISubject->getProbeDialog(0) == 1)
	{
		//   qDebug()<<"Store Trace"<<m_nDualIndex;
		m_objVISubject->storeWaveTrace(m_nDualIndex,m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
	}
	if(m_isProbesOnly==true)
	{
		displayComparison();
	}
	setGraphValues();
}

void MainWindow::displayComparison()
{
	//qDebug()<< "Err Percentage:"<<l_nErrPercentage;
	if(m_objVISubject->getProbeDialog(1) == 0){
		m_objFunctionalObject->calculateAverage(REFERENCE_FILENAME);
		int l_nErrPercentage=0;
		if((m_nDualIndex==0||m_nDualIndex==1) && m_objVISubject->getProbeDialog(0) == 1)
		{
			l_nErrPercentage = m_objFunctionalObject->caluculateErrorPercentange(m_objVISubject->getReferenceWaveData(0),m_objVISubject->getReferenceWaveData(1));
		}
		else
		{
			l_nErrPercentage = m_objFunctionalObject->caluculateErrorPercentange(m_objVISubject->getReferenceWaveData(m_nStoreWaveIndex-2),m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
		}
		//qDebug()<< "Err Percentage:"<<l_nErrPercentage;
		if (l_nErrPercentage >= m_objVISubject->getProbeThreshold()){
			ui->edtErrPercentage->setText(QString::number(l_nErrPercentage, 10) + "%");
                        l_objErrorPercentage->setText("ERROR  : "+QString::number(l_nErrPercentage, 10) + "%");
			ui->lblPassFail->setText("FAIL");
                        l_objPassFail->setText("RESULT : FAIL");
		}
		else if(l_nErrPercentage >=0)
		{

			if(m_nStoreWaveIndex>1)
			{
				//qDebug()<< "check Pass Message:"<<m_nStoreWaveIndex;
				ui->edtErrPercentage->setText(QString::number(l_nErrPercentage, 10) + "%");
                                l_objErrorPercentage->setText("ERROR  : "+QString::number(l_nErrPercentage, 10) + "%");
				ui->lblPassFail->setText("PASS");
                                l_objPassFail->setText("RESULT : PASS");
			}
			else
			{
				ui->edtErrPercentage->setText("");
                                l_objErrorPercentage->setText("");
				ui->lblPassFail->setText("");
                                l_objPassFail->setText("");
			}
		}
	}
	else if(m_objVISubject->getProbeDialog(1) == 1 && isCompareActive == true)
	{
		if (VIProduct->compareBand(0) == true)
		{
			ui->edtErrPercentage->setText("PASS");
                        l_objErrorPercentage->setText("ERROR  : PASS");
		}
		else
		{
			ui->edtErrPercentage->setText("FAIL");
                        l_objErrorPercentage->setText("ERROR  : FAIL");
		}
	}
}

void MainWindow::initialiseInteractive()
{
	if(m_objVISubject->getProbeDialog(0) == 1){
		qDebug()<<"Dual Mode:"<<m_nSelectedProbe;
		if(m_nSelectedProbe==0)
		{
			ui->redPallete->setPalette(Qt::green);
			ui->errPallete->setPalette(Qt::red);
		}
		if(m_nSelectedProbe==1)
		{
			ui->redPallete->setPalette(Qt::red);
			ui->errPallete->setPalette(Qt::green);
		}
	}

	//        movie = new QMovie(":/Symbols/ajax-loader.gif");
	//        ISplash->selectSplashImage(2);
	//        ISplash->setPos(10,158,90,42);
	//        ui->lblMovie->setMovie(movie);
	//        movie->setSpeed(250);
	//        movie->start();
	//        ui->lblStatus->setText("Running...");
	m_objFunctionalObject->driveVI();
}

void MainWindow::disableInteractiveGrp(bool pFlag)
{
	ui->grpClip->setDisabled(pFlag);
	ui->grpEmbedded->setDisabled(pFlag);
	ui->grpProbes->setDisabled(pFlag);
	ui->PCBox->setDisabled(pFlag);
	ui->CalibBox->setDisabled(pFlag);
	if(m_objVISubject->getProbeDialog(0) == 1 || m_nSelectedProbe == 2)
	{
		ui->storeBox->setDisabled(pFlag);
		ui->deleteBox->setDisabled(pFlag);
	}
	if(m_objVISubject->getProbeDialog(1) == 1)
	{
		VIProduct->clearBandData(0);
		isCompareActive = false;
	}
}

void MainWindow::on_butProClip_clicked()
{
	ui->storeBox->setStyleSheet(highlightOFF);
	ui->startBox->setStyleSheet(highlightOFF);
	ui->deleteBox->setStyleSheet(highlightOFF);
	ui->calibButton->setStyleSheet(highlightOFF);
	ui->PCBox->setStyleSheet(PCBoxON);
//	ui->selectFrame->setGeometry(ui->selectFrame->x(),50,ui->selectFrame->width(),ui->selectFrame->height());
	ui->selectFrame->setGeometry(702, 54, 9, 60);
	if(m_bPCMode == true)
	{
		ui->butProClip->setIcon(QIcon(":/res/Clip.png"));
		ui->butProClip->setIconSize(QSize(64,64));
		ui->grpClip->setVisible(true);
		ui->grpClip->setGeometry(370,10,318,261);
		ui->grpProbes->setVisible(false);
		m_bPCMode=false;
		ui->startBox->setDisabled(true);
		ui->CalibBox->setDisabled(true);
		ui->storeBox->setDisabled(true);
		ui->deleteBox->setDisabled(true);
		ui->grpEmbedded->setDisabled(true);
		if(m_bClipLearn== true)
			notifyClipObserver();
		/*	    ui->frame_20->setStyleSheet("border:0px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;image: url(:/res/25PinDIN.png)");
	    ui->frame_20->setGeometry(121,20,110,50);
	    ui->frame_22->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 5px; border-bottom-left-radius: 5px;");
	    ui->frame_23->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 5px; border-bottom-left-radius: 5px;");
	    ui->frame_22->setGeometry(28,38,60,15);
	    ui->frame_23->setGeometry(30,90,60,15);02072014*/

		//	notifyProbeObserver();
                on_butProbe2_clicked();
	}
	else
	{
		ui->butProClip->setIcon(QIcon(":/res/Probe.png"));
		ui->butProClip->setIconSize(QSize(64,64));
		ui->grpProbes->setVisible(true);
		ui->grpProbes->setGeometry(370,10,318,261);
		ui->grpClip->setVisible(false);
		ui->startBox->setDisabled(false);
		ui->CalibBox->setDisabled(false);
		ui->storeBox->setDisabled(false);
		ui->deleteBox->setDisabled(false);
		ui->grpEmbedded->setDisabled(false);
		if(m_bStartApp==false)
			notifyProbeObserver();

		m_bPCMode=true;

        l_objCombinations->setVisible(false);
        l_objComparison->setVisible(false);
        l_objRefType->setVisible(false);
        l_objLearnVerify->setVisible(false);
	}
}

void MainWindow::on_startButton_clicked()
{
	qDebug() << "Start/Stop VI Interactive";

	ui->storeBox->setStyleSheet(highlightOFF);
	ui->startBox->setStyleSheet(highlightON);
	ui->deleteBox->setStyleSheet(highlightOFF);
	ui->CalibBox->setStyleSheet(highlightOFF);
	ui->PCBox->setStyleSheet(highlightOFF2);
//	ui->selectFrame->setGeometry(ui->selectFrame->x(),138,ui->selectFrame->width(),ui->selectFrame->height());
	ui->selectFrame->setGeometry(702, 154, 9, 60);


	if(m_bAutoCurveFit==true)
	{
		callAutoCurveFit();
		return;
	}
	if(m_startTimer== false)
	{
		disableInteractiveGrp(true);
		ui->startButton->setIcon(QIcon(":/res/Stop.png"));
		ui->startButton->setIconSize(QSize(64,64));
		m_startTimer=true;
	}
	else
	{
		disableInteractiveGrp(false);
		ui->startButton->setIcon(QIcon(":/res/Start.png"));
		ui->startButton->setIconSize(QSize(64,64));
		IGPIOEvent->setStopFlag(true);
		m_startTimer=false;
		stopVITimer();
		return;

	}
	if(m_bStartApp == true)
	{
		//m_objFunctionalObject->switchPROBES(PROBE1);
		//on_butProbe1_clicked();//commented on 21062014
		m_bStartApp = false;
	}
	if(!checkProbeStatus())
	{
		disableInteractiveGrp(false);
		ui->startButton->setIcon(QIcon(":/res/Start.png"));
		ui->startButton->setIconSize(QSize(64,64));
		return;
	}


	//IGPIOPin->illuminateRunStopButton(0);
	if(m_bAutoCurveFit == true)
	{
		//on_butAutoCurveFit_clicked();
		return;
	}
	IGPIOEvent->setStopFlag(false);
	initialiseInteractive();
	m_objFunctionalObject->peformDrive();
	//    if(m_objVISubject->getProbeDialog(0) == 0)
	//        disableInteractiveGrp();
	//    else if (m_objVISubject->getProbeDialog(0) == 1)
	//        disableDualProbeGrp();

}




void MainWindow::clipLearn(bool pLearnFlag)
{
	disableClipLearnGrp(true);
	bool abortFlag=false;
	m_nDualIndex=0;
	QString l_strTestFileName="",l_strLearnt="";
	QString l_strText="";
	if(pLearnFlag == true)
	{
		//		qDebug() << "Clip Learn in Progress..";
		l_strText = "Clip Learn in Progress.";
                l_objLearnVerify->setText("LEARNING.....");
		l_strLearnt = "Learnt_";
		m_biSLearnFlag= false;
	}
	else if(pLearnFlag == false)
	{
		//		qDebug() << "Clip Verify in Progress..";
		l_strText = "Clip Verify in Progress.";
                l_objLearnVerify->setText("VERIFYING.....");
		l_strLearnt = "Test_";
	}
	m_objFunctionalObject->DISABLEINT();
	m_objFunctionalObject->driveVI();
	QMap<short int,QList<short>* > l_mapPinCombinations = m_objVISubject->getPinCombinations();
	QList<short int> l_lstKeys = l_mapPinCombinations.keys();
	//	m_objFunctionalObject->setPSOCDelay();
	bool isFailFlag=false;
	short int l_nCounter=1;
	bool l_nValue=true;
	for(short int l_nRefIndex=0;l_nRefIndex<l_lstKeys.count();l_nRefIndex++)
	{
		short int l_nReferencePin= l_lstKeys.value(l_nRefIndex);
		for(short l_nPinsIndex=0;l_nPinsIndex<l_mapPinCombinations.value(l_lstKeys.value(l_nRefIndex))->count();l_nPinsIndex++)
		{
			QList<short>* l_lstPindexIndex = l_mapPinCombinations.value(l_lstKeys.value(l_nRefIndex));
			//			qDebug() <<"Pin:"<<l_lstPindexIndex->value(l_nPinsIndex)<<"Reference Pin:"<<l_nReferencePin;
			//qDebug() << "Channel 1:"<<m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex));
			//qDebug() << "Channel 2:" << m_objVISubject->getPin2Channel(l_nReferencePin);
			QString l_strCombination ="("+QString::number(l_nCounter++,10)+ " of "+ \
					QString::number(m_objVISubject->getChipDialog(4),10) +")";
			//			m_objFunctionalObject->externalMuxMeasurement(m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex)),m_objVISubject->getPin2Channel(l_nReferencePin));////commented RRV 26062014
			m_objFunctionalObject->switchTestChannel(m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex)));
			m_objFunctionalObject->switchRefChannel(m_objVISubject->getPin2Channel(l_nReferencePin));
                        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                                                if(!m_objFunctionalObject->switchTestChannel(m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex))))
//                                                {
//                                                        abortFlag=true;
//                                                        break;
//                                                }
//                                                usleep(10000);
//                                                ///*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Test Channel Switched.");
//                                                if(!m_objFunctionalObject->switchRefChannel(m_objVISubject->getPin2Channel(l_nReferencePin)))
//                                                {
//                                                        abortFlag=true;
//                                                        break;
//                                                }
//                                                usleep(10000);
//                        /*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Ref Channel Switched.");
                        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			ISplash->setLoadingText(l_strText + l_strCombination);
			ISplash->selectSplashImage(0);
			ISplash->setPos(300,325,327,30);
			ISplash->setSplashStyle("border-width: 3px; border-style: groove; border-color: #ED9D13;border-radius: 10px; padding: 0 8px;text-align: center;background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #E7F598, stop: 0.5 #ECF5BA,stop: 0.7 #F3F7DA,stop:1 #F7F7F2);font:bold 18px;color:#3A3B32");
			ISplash->ShowSplash();
                        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                                               qDebug() << "Test Channel:"<<m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex));
//                                                qDebug() << "Reference Channel:" << m_objVISubject->getPin2Channel(l_nReferencePin);
//                        sleep(1);
//                                                m_objFunctionalObject->readChannels();
//                                                if( m_objFunctionalObject->checkMuxStatus() == false)
//			{
//				abortFlag=true;
//				break;
//                        }//commented RRV 26062014
                        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			l_strTestFileName = l_strLearnt+QString::number(l_nReferencePin,10)+"_"+QString::number(l_lstPindexIndex->value(l_nPinsIndex),10)+".bin";
			m_objFunctionalObject->peformDrive();
			usleep(10000);
			m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
			VIProduct->setLoopDrive(true);
			updateInteractive();
			m_objFunctionalObject->renameFile(l_strTestFileName);
			CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
			l_objCalibData->m_nConstant=m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
			l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));
			m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(l_strTestFileName),m_objVISubject->getVoltageValue(), l_objCalibData);
			double l_nPosPeakVoltage = (m_objVISubject->getPosPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
			double l_nNetPeakVoltage = (m_objVISubject->getNegPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
			Q_UNUSED(l_nPosPeakVoltage)
			Q_UNUSED(l_nNetPeakVoltage)
                        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                                            qDebug()<<"PositivePeak:"<<l_nPosPeakVoltage;
//                                            qDebug()<<"NegativePeak:"<<l_nNetPeakVoltage;
//                                            if(l_nPosPeakVoltage <0.5 && l_nNetPeakVoltage >-0.5)//by ravi
//                                            {
//                                                isFailFlag = true;
//                                                break;
//                                            }
//
//                                                if(pLearnFlag == false)
//                                                {
//                                                        qDebug()<<"File:"<<l_strTestFileName;
//                                                        if(compareTwoClipTraces("Learnt_"+QString::number(l_nReferencePin,10)+"_"+QString::number(l_lstPindexIndex->value(l_nPinsIndex),10)+".bin","Test_"+QString::number(l_nReferencePin,10)+"_"+QString::number(l_lstPindexIndex->value(l_nPinsIndex),10)+".bin"))
//                                                        {
//                                                                qDebug() <<"Pin:"<<l_lstPindexIndex->value(l_nPinsIndex)<<"Reference Pin:"<<l_nReferencePin;
//                                                                qDebug() << "Test Channel:"<<m_objVISubject->getPin2Channel(l_lstPindexIndex->value(l_nPinsIndex));
//                                                                qDebug() << "Ref Channe:" << m_objVISubject->getPin2Channel(l_nReferencePin);
//                                                                isFailFlag = true;
//                                                                break;
//                                                        }
//                                                }
                    //~~~~~~~~~~~~
		}
		if(isFailFlag == true) break;
	}
	if(isFailFlag == true){
		disableClipLearnGrp(false);
		ISplash->closeSplash();
		return;
	}

	if(abortFlag==true)
	{
		/*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Channels not Switched Properly,Test Aborted.");
		disableClipLearnGrp(false);
		VIProduct->setLoopDrive(false);
		m_objFunctionalObject->ENINT();
		ISplash->closeSplash();
		return;
	}
	ISplash->closeSplash();
	m_objFunctionalObject->ENINT();
	VIProduct->setLoopDrive(false);
	m_objVISubject->setClipLearntFlag(pLearnFlag);
	m_objMultipleTraceDialog = new MultipleTraces(this,m_objVISubject,m_objFunctionalObject);
	m_objMultipleTraceDialog->setGeometry(100, 100, 580, 450);
	if(pLearnFlag == false)
	{
		//m_objMultipleTraceDialog->LoadLearntTraces();
		m_objMultipleTraceDialog->calculateCombinationalTraces(pLearnFlag);
		if(m_objVISubject->getChipDialog(5)==1)
		{

		}
		else{

			//bool l_nValue;
			short int l_nFailCount = m_objMultipleTraceDialog->getFailCount();
			if (l_nFailCount > 0) {
				QString l_StrText = "FAIL." + QString::number(l_nFailCount, 10)
				+ "\nDo you like to view MultipleTraces?";
				l_nValue = /*IPTMessageBox->QMsgBox*/showMessageBox(true, true, l_StrText);
			} else {
				l_nValue = /*IPTMessageBox->QMsgBox*/showMessageBox(true, true,
						"PASS.\nDo you like to view MultipleTraces?");
			}
			if (l_nValue == true)
			{
			}
			else if (l_nValue == false)
			{
				//disableClipLearnGrp(false);
				//return;
			}
		}
	}
	else
	{
		m_biSLearnFlag = true;
		m_objMultipleTraceDialog->LoadLearntTraces();
	}
	if(pLearnFlag==true){
		ui->lblTestStatus->setText("Learn Completed");
		l_objLearnVerify->setText("LEARNED.");
	}
	else{
		ui->lblTestStatus->setText("Verification Completed");
		l_objLearnVerify->setText("VERIFIED.");
	}


	if(l_nValue==true)
	{
		m_objMultipleTraceDialog->LoadVITraces(0);
		m_objMultipleTraceDialog->show();
	}
	ui->butViewTrace->setDisabled(false);
	disableClipLearnGrp(false);


}
bool MainWindow::compareTwoClipTraces(QString pStrLearntName,QString pStrTestName)
{
        QStringList l_lstRefData = m_objFunctionalObject->getFileData(pStrLearntName);//m_obVImodel->getFileData("Learnt" +l_strActualFileName+".bin");
        QStringList l_lstTestData = m_objFunctionalObject->getFileData(pStrTestName);
        m_objFunctionalObject->calculateAverage("./CalibrationReference.bin");
        unsigned int l_nErrpercentage = m_objFunctionalObject->caluculateErrorPercentange(l_lstRefData,l_lstTestData);
        if(l_nErrpercentage >m_objVISubject->getClipThreshold())
        {
                return true;
        }
        else
                return false;
}
void MainWindow::disableClipLearnGrp(bool pFlag)
{
	ui->grpClip->setDisabled(pFlag);
	ui->grpProbes->setDisabled(pFlag);
	ui->grpEmbedded->setDisabled(pFlag);
	//ui->grpError->setDisabled(pFlag);
	//ui->startBox->setDisabled(pFlag);
	//ui->startBox->setDisabled(true);
	//ui->storeBox->setDisabled(pFlag);
	//ui->deleteBox->setDisabled(pFlag);
	//ui->CalibBox->setDisabled(pFlag);
	ui->ExitBox->setDisabled(pFlag);
	ui->PCBox->setDisabled(pFlag);

}




void MainWindow::on_butClip_clicked()
{
	qDebug()<<"Clicked";
	ui->butLearn->setDisabled(false);
	ui->startBox->setDisabled(true);
	m_objClipDialog->show();
	/*    ui->frame_20->setStyleSheet("border:0px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;image: url(:/res/25PinDIN.png)");
    ui->frame_20->setGeometry(121,20,110,50);
    ui->frame_22->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 5px; border-bottom-left-radius: 5px;");
    ui->frame_23->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 5px; border-bottom-left-radius: 5px;");
    ui->frame_22->setGeometry(28,38,60,15);
    ui->frame_23->setGeometry(30,90,60,15);20072014*/
}

void MainWindow::on_butProbe_clicked()
{
	m_objProbeDialog->show();
	ui->startBox->setDisabled(false);
}

void MainWindow::on_storeButton_clicked()
{
	//	qDebug() << "Store Trace";
	ui->storeBox->setStyleSheet(highlightON);
	ui->startBox->setStyleSheet(highlightOFF);
	ui->deleteBox->setStyleSheet(highlightOFF);
	ui->CalibBox->setStyleSheet(highlightOFF);
	ui->PCBox->setStyleSheet(highlightOFF2);
//	ui->selectFrame->setGeometry(ui->selectFrame->x(),230,ui->selectFrame->width(),ui->selectFrame->height());
	ui->selectFrame->setGeometry(702, 254, 9, 60);


	if (m_objVISubject->getProbeDialog(0) == 1)
		return;
	if (m_startTimer == false)
		return;
	storeTrace();

}

void MainWindow::on_deleteButton_clicked()
{
	//    qDebug() << "Delete Trace";
	ui->storeBox->setStyleSheet(highlightOFF);
	ui->startBox->setStyleSheet(highlightOFF);
	ui->deleteBox->setStyleSheet(highlightON);
	ui->CalibBox->setStyleSheet(highlightOFF);
	ui->PCBox->setStyleSheet(highlightOFF2);
//	ui->selectFrame->setGeometry(ui->selectFrame->x(),320,ui->selectFrame->width(),ui->selectFrame->height());
	ui->selectFrame->setGeometry(702, 354, 9, 60);
	if (m_objVISubject->getProbeDialog(0) == 1)
		return;


	//  IGPIOEvent->setStopFlag(false);
	if (m_startTimer == false)
		return;
	deleteTrace();

}

void MainWindow::on_calibButton_clicked()
{
	if(m_objVISubject->getCalibrationStatus()==true){
			if(showMessageBox(true, true, "Do you want to cancel the calibration.") == true)
				m_objVISubject->setCalibrationStatus(false);
		}else{
	ui->storeBox->setStyleSheet(highlightOFF);
	ui->startBox->setStyleSheet(highlightOFF);
	ui->deleteBox->setStyleSheet(highlightOFF);
	ui->CalibBox->setStyleSheet(highlightON);
	ui->PCBox->setStyleSheet(highlightOFF2);

//	ui->selectFrame->setGeometry(ui->selectFrame->x(),410,ui->selectFrame->width(),ui->selectFrame->height());
	ui->selectFrame->setGeometry(702, 454, 9, 60);
	if( m_startTimer== true)
		return;
	//    qDebug() << "Start Calibration";
	if( /*IPTMessageBox->QMsgBox*/showMessageBox(true, true, "Do you want to calibrate.") == true)
	{
		if( /*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Please Ensure it Probes are not connected to DUT.") == true)
		{
			ISplash->setLoadingText("CALIBRATION IN PROGRESS....\n(Press ESC Key to Abort)");
			ISplash->selectSplashImage(0);
			ISplash->setPos(220,315,350,50);
			ISplash->setSplashStyle("border-width: 3px; border-style: groove; border-color: #ED9D13;border-radius: 10px; padding: 0 8px;text-align: center;background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #E7F598, stop: 0.5 #ECF5BA,stop: 0.7 #F3F7DA,stop:1 #F7F7F2);font:bold 18px;color:#3A3B32");
			ISplash->ShowSplash();

			VIProduct->setLoopDrive(true);
			m_objVISubject->setWaveType(IV);

			m_objFunctionalObject->doMemoryCalibration();

			VIProduct->clearCurves(0);

			ISplash->closeSplash();
		}
		else
		{

		}
	}
		}
}

void MainWindow::on_exit_clicked()
{
	m_objFunctionalObject->resetPSOC();
	parentWidget()->close();
}

void MainWindow::storeTrace()
{
	//	qDebug()<< "Store Trace Index:"<<m_nStoreWaveIndex;

	if(m_objVISubject->getProbeDialog(1) == 1)
	{
		stWaveData *l_objWaveData = m_objFunctionalObject->showVITrace(m_nWaveIndex,m_objVISubject->getIndexTemplate(0));
		l_objWaveData->m_nEnvelopBand = m_objVISubject->getProbeThreshold();
		l_objWaveData->m_bCalibChecked=true;
		l_objWaveData->m_nCalibrationConstant=m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
		l_objWaveData->m_nCalibrationGain=m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

		VIProduct->LoadVIData(REFERENCE_FILENAME, ACTUAL_FILENAME, m_nDualIndex,3, l_objWaveData);
		isCompareActive = true;
		return;
	}

	if(m_nStoreWaveIndex >=1 && m_nStoreWaveIndex<=4)
	{

		// 1. Store the waveData
		// 2. Display the Wavedata on screen
		ui->errPallete->setPalette(colorForIds[m_nStoreWaveIndex]);
		//ui->errPallete->setStyleSheet("QToolButton{border:1px solid black;border-radius:10;background-color:"+m_lstClrArray[m_nStoreWaveIndex]+";}");
		m_objVISubject->storeWaveTrace(m_nStoreWaveIndex-1,m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
		m_nStoreWaveIndex++;
	}
	//Legends~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	if(m_nStoreWaveIndex>1){
		l_objErrorPercentage->setVisible(true);
		l_objPassFail->setVisible(true);
	}else{
		l_objErrorPercentage->setVisible(false);
		l_objPassFail->setVisible(false);
	}
	if(m_nStoreWaveIndex==1){
		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(false);
		l_objTraceNumber3->setVisible(false);
		l_objTraceNumber4->setVisible(false);
		l_objTraceNumber5->setVisible(false);
	}
	if(m_nStoreWaveIndex==2){
		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(true);
		l_objTraceNumber3->setVisible(false);
		l_objTraceNumber4->setVisible(false);
		l_objTraceNumber5->setVisible(false);
	}
	if(m_nStoreWaveIndex==3){
		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(true);
		l_objTraceNumber3->setVisible(true);
		l_objTraceNumber4->setVisible(false);
		l_objTraceNumber5->setVisible(false);
	}
	if(m_nStoreWaveIndex==4){
		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(true);
		l_objTraceNumber3->setVisible(true);
		l_objTraceNumber4->setVisible(true);
		l_objTraceNumber5->setVisible(false);
	}
	if(m_nStoreWaveIndex==5){
		l_objTraceNumber1->setVisible(true);
		l_objTraceNumber2->setVisible(true);
		l_objTraceNumber3->setVisible(true);
		l_objTraceNumber4->setVisible(true);
		l_objTraceNumber5->setVisible(true);
	}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	else
	//	{
	//		return;
	//		//disable store button
	//	}

	// Display Wave Trace Window
	//if(m_nWaveIndex==0){
	for(int l_nWaveIndex=1;l_nWaveIndex<m_nStoreWaveIndex;l_nWaveIndex++)
	{
		stWaveData *l_objWaveData = m_objFunctionalObject->showVITrace(m_nWaveIndex,m_objVISubject->getIndexTemplate(0));
		m_objFunctionalObject->ReadCalibrationFunctionFile();
		if(m_nWaveIndex==0)
		{
			l_objWaveData->m_bCalibChecked=true;
			l_objWaveData->m_nCalibrationConstant=m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
			l_objWaveData->m_nCalibrationGain=m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

			VIProduct->LoadVIData(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),m_objVISubject->getReferenceWaveData(l_nWaveIndex-1),l_nWaveIndex,m_nWaveIndex,l_objWaveData);
		}
		//else
			//	VIProduct->LoadVIData(REFERENCE_FILENAME, ACTUAL_FILENAME, l_nWaveIndex,m_nWaveIndex, l_objWaveData);
	}
	//}
	VIProduct->showPixGraph();
}

void MainWindow::deleteTrace()
{

	//	qDebug()<< "Delete Trace Index:"<<m_nStoreWaveIndex;
	if(m_objVISubject->getProbeDialog(1) == 1)
	{
		VIProduct->clearBandData(0);
		isCompareActive = false;
	}
	if(m_nStoreWaveIndex >=1)
	{
		// 1. Delete the WaveData
		// 2. Remove from the Wavedate from screen
		if(m_nStoreWaveIndex >1)
			VIProduct->clearCurves(m_nStoreWaveIndex-1);
		if (m_nStoreWaveIndex > 1){
			m_objVISubject->deleteWaveTrace(m_nStoreWaveIndex-1);
			m_nStoreWaveIndex--;
		}
		else
			m_nStoreWaveIndex = 1;
		ui->errPallete->setPalette(colorForIds[m_nStoreWaveIndex - 1]);

		//Legends~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		if(m_nStoreWaveIndex==1){
			l_objTraceNumber1->setVisible(true);
			l_objTraceNumber2->setVisible(false);
			l_objTraceNumber3->setVisible(false);
			l_objTraceNumber4->setVisible(false);
			l_objTraceNumber5->setVisible(false);
		}
		if(m_nStoreWaveIndex==2){
			l_objTraceNumber1->setVisible(true);
			l_objTraceNumber2->setVisible(true);
			l_objTraceNumber3->setVisible(false);
			l_objTraceNumber4->setVisible(false);
			l_objTraceNumber5->setVisible(false);
		}
		if(m_nStoreWaveIndex==3){
			l_objTraceNumber1->setVisible(true);
			l_objTraceNumber2->setVisible(true);
			l_objTraceNumber3->setVisible(true);
			l_objTraceNumber4->setVisible(false);
			l_objTraceNumber5->setVisible(false);
		}
		if(m_nStoreWaveIndex==4){
			l_objTraceNumber1->setVisible(true);
			l_objTraceNumber2->setVisible(true);
			l_objTraceNumber3->setVisible(true);
			l_objTraceNumber4->setVisible(true);
			l_objTraceNumber5->setVisible(false);
		}
		if(m_nStoreWaveIndex==5){
			l_objTraceNumber1->setVisible(true);
			l_objTraceNumber2->setVisible(true);
			l_objTraceNumber3->setVisible(true);
			l_objTraceNumber4->setVisible(true);
			l_objTraceNumber5->setVisible(true);
		}
	}
	else
	{
		// check for disable button state
		// if disabled enable the store button
		return;
	}

}
void MainWindow::on_butUP_clicked()
{
	switch(m_nSelectInteractiveParam)
	{
	case 0:
		if(m_nVoltageIndex >=0 && m_nVoltageIndex<3)
			m_nVoltageIndex++;
		else
			m_nVoltageIndex =3;

		break;
	case 1:
		if(m_nImpedanceIndex >=0 && m_nImpedanceIndex<14)
			m_nImpedanceIndex++;
		else
			m_nImpedanceIndex =14;

		break;
	case 2:
		if(m_nFrequencyIndex >=0 && m_nFrequencyIndex<12)
			m_nFrequencyIndex++;
		else
			m_nFrequencyIndex =12;

		break;
	}

	m_objVISubject->setIndexTemplate(0,m_nVoltageIndex);
	m_objVISubject->setIndexTemplate(1,m_nFrequencyIndex);
	m_objVISubject->setIndexTemplate(2,m_nImpedanceIndex);

	isChangeActive = true;
	isChangeActive1 = true;
	LoadInteractiveValues();
        UpdateLegendLabels();
	setGraphValues();
}

void MainWindow::on_butDown_clicked()
{
	switch(m_nSelectInteractiveParam)
	{
	case 0:
		if(m_nVoltageIndex <=3 && m_nVoltageIndex>=1)
			m_nVoltageIndex--;
		else
			m_nVoltageIndex=0;

		break;
	case 1:
		if(m_nImpedanceIndex <=14 && m_nImpedanceIndex>=1)
			m_nImpedanceIndex--;
		else
			m_nImpedanceIndex =0;

		break;
	case 2:
		if(m_nFrequencyIndex <=12 && m_nFrequencyIndex>=1)
			m_nFrequencyIndex--;
		else
			m_nFrequencyIndex =0;

		break;
	}

	m_objVISubject->setIndexTemplate(0,m_nVoltageIndex);
	m_objVISubject->setIndexTemplate(1,m_nFrequencyIndex);
	m_objVISubject->setIndexTemplate(2,m_nImpedanceIndex);
	isChangeActive = true;
	isChangeActive1 = true;


	LoadInteractiveValues();
        UpdateLegendLabels();
	setGraphValues();

}

void MainWindow::on_butL_clicked()
{
	m_objEmbedded->show();
}

void MainWindow::on_butM_clicked()
{
	m_objEmbedded->show();
}

void MainWindow::on_butR_clicked()
{
	m_objEmbedded->show();
}

void MainWindow::shrinkSize(int index)
{


	if(index == 2 || index == 3 || index == 4)
		m_objVIButtonGroup->button(index)->setIconSize(QSize(32,32));
	else if(index == 5 || index == 6)
		m_objVIButtonGroup->button(index)->setIconSize(QSize(32,32));
	else
		m_objVIButtonGroup->button(index)->setIconSize(QSize(48,48));
}

void MainWindow::restoreSize(int index)
{
	if(index == 2 || index == 3 || index == 4)
		m_objVIButtonGroup->button(index)->setIconSize(QSize(48,48));
	else if(index == 5 || index == 6)
		m_objVIButtonGroup->button(index)->setIconSize(QSize(54,54));

	else
		m_objVIButtonGroup->button(index)->setIconSize(QSize(64,64));
}

void MainWindow::on_butProbe1_clicked()
{
	//":/Symbols/PTFront.png"
	if(m_objVISubject->getProbeDialog(0)==1)
	{
		return;
	}
	m_objVISubject->clearWaveTraces();
	for(int l_nDeleteIndex=1;l_nDeleteIndex<m_nStoreWaveIndex;l_nDeleteIndex++)
	{
		VIProduct->clearCurves(l_nDeleteIndex);
	}
	ui->errPallete->setPalette(Qt::gray);
	ui->redPallete->setPalette(Qt::red);
	m_nStoreWaveIndex=1;
	ui->butProbe1->setStyleSheet(knobON);
	ui->butProbe2->setStyleSheet(knobOFF);
	/*ui->butExternal->setStyleSheet(knobOFF);//commented by rravivarman 24th july 2014*/
	ui->butExternal_2->setStyleSheet(knobOFF);
	m_nSelectedProbe=0;
	usleep(1000);
	m_objFunctionalObject->switchPROBES(PROBE1);
	l_objProbeStatus->setText("SINGLE : PROBE-1");

	if(m_objVISubject->getProbeDialog(0)==1)
	{
		//        ui->redPallete->setPalette(Qt::red);
		//        ui->errPallete->setPalette(Qt::green);
		return;
	}
	ui->ah1_inner->setVisible(true);
	ui->ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah1_outer->setGeometry(22,26,41,41);

	ui->ah2_inner->setVisible(true);
	ui->ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah2_outer->setGeometry(96,26,41,41);

	ui->ah3_inner->setVisible(true);
	ui->ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah3_outer->setGeometry(167,26,41,41);

	ui->ah0_inner->setVisible(true);
	ui->ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah0_outer->setGeometry(237,26,41,41);

	ui->fp_VI1_ICM_SL->setGeometry(24,20,53,49);
	ui->fp_VI1_ICM_SL->setStyleSheet("border:1px rgba(0,0,0,0);border-radius:20px;image: url(:/fp_images/VI_SL_ICM.png);");

	ui->fp_VI2_EXT->setGeometry(110,20,41,41);
	ui->fp_VI2_EXT->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
}

void MainWindow::on_butProbe2_clicked()
{
	if(m_objVISubject->getProbeDialog(0)==1)
	{
		return;
	}
	m_objVISubject->clearWaveTraces();
	for(int l_nDeleteIndex=1;l_nDeleteIndex<m_nStoreWaveIndex;l_nDeleteIndex++)
	{
		VIProduct->clearCurves(l_nDeleteIndex);
	}
	ui->errPallete->setPalette(Qt::gray);
	ui->redPallete->setPalette(Qt::red);
	m_nStoreWaveIndex=1;
	ui->butProbe1->setStyleSheet(knobOFF);
	ui->butProbe2->setStyleSheet(knobON);
	/*ui->butExternal->setStyleSheet(knobOFF);//commented by rravivarman 24th july 2014*/
	ui->butExternal_2->setStyleSheet(knobOFF);
	m_nSelectedProbe=1;
	usleep(1000);
	m_objFunctionalObject->switchPROBES(PROBE2);
	l_objProbeStatus->setText("SINGLE : PROBE-2");
	if(m_objVISubject->getProbeDialog(0)==1)
	{
		//        ui->redPallete->setPalette(Qt::blue);
		//        ui->errPallete->setPalette(Qt::green);

		return;
	}
	ui->ah1_inner->setVisible(true);
	ui->ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah1_outer->setGeometry(22,26,41,41);

	ui->ah2_inner->setVisible(true);
	ui->ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah2_outer->setGeometry(96,26,41,41);

	ui->ah3_inner->setVisible(true);
	ui->ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah3_outer->setGeometry(167,26,41,41);

	ui->ah0_inner->setVisible(true);
	ui->ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	ui->ah0_outer->setGeometry(237,26,41,41);

	ui->fp_VI1_ICM_SL->setGeometry(24,20,41,41);
	ui->fp_VI1_ICM_SL->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

	ui->fp_VI2_EXT->setGeometry(105,20,53,49);
	ui->fp_VI2_EXT->setStyleSheet("border:1px rgba(0,0,0,0);border-radius:20px;image: url(:/fp_images/VI_SL_ICM.png);");
	//    qDebug()<<"Probe Status:"<<m_nSelectedProbe;
}

/*void MainWindow::on_butExternal_clicked()
{
	ui->butProbe1->setStyleSheet(knobOFF);
	ui->butProbe2->setStyleSheet(knobOFF);
	ui->butExternal->setStyleSheet(knobON);
	ui->butExternal_2->setStyleSheet(knobOFF);
	m_objFunctionalObject->switchPROBES(EXT_PROBE);

	if(m_objVISubject->getProbeDialog(0)==1) return;
    m_nSelectedProbe=2;
    ui->vi1->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
    ui->vi2->setStyleSheet("border:3px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
    ui->frame_31->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
    ui->frame_20->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
    ui->dso1_outer_3->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
    ui->dso_outer_3->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

//    qDebug()<<"Probe Status:"<<m_nSelectedProbe;
}//commented by rravivarman 24th july 2014*/
void MainWindow::on_butExternal_2_clicked()
{
	if (m_objVISubject->getProbeDialog(0) != 1){
		ui->butProbe1->setStyleSheet(knobOFF);
		ui->butProbe2->setStyleSheet(knobOFF);
		/*ui->butExternal->setStyleSheet(knobOFF);//commented by rravivarman 24th july 2014*/
		ui->butExternal_2->setStyleSheet(knobON);
		m_objFunctionalObject->switchPROBES(EXT_FLY);
		l_objProbeStatus->setText("ANALOG HIGHWAY");

		if(m_objVISubject->getProbeDialog(0)==1) return;
		m_nSelectedProbe=3;

		ui->ah1_inner->setVisible(false);
		ui->ah1_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
		ui->ah1_outer->setGeometry(22,26,41,41);

		ui->ah2_inner->setVisible(false);
		ui->ah2_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
		ui->ah2_outer->setGeometry(96,26,41,41);

		ui->ah3_inner->setVisible(false);
		ui->ah3_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
		ui->ah3_outer->setGeometry(167,26,41,41);

		ui->ah0_inner->setVisible(false);
		ui->ah0_outer->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/fp_images/bnc.png);");
		ui->ah0_outer->setGeometry(237,26,41,41);

		ui->fp_VI1_ICM_SL->setGeometry(24,20,41,41);
		ui->fp_VI1_ICM_SL->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");

		ui->fp_VI2_EXT->setGeometry(110,20,41,41);
		ui->fp_VI2_EXT->setStyleSheet("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);");
	}
	//    qDebug()<<"Probe Status:"<<m_nSelectedProbe;
}
void MainWindow::on_butAM_clicked()
{
	//    if (m_bAutoCurveFit==false)
	//    {
	//    	ui->butAM->setIcon(QIcon(":/res/pressedOrange.png"));
	//    	ui->butAM->setIconSize(QSize(48,48));
	//    	ui->singleCap->setText("Auto");
	//    	m_bAutoCurveFit=false;
	//    	on_butProbe1_clicked();
	//
	//    }
	//    else
	//    {
	//    	ui->butAM->setIcon(QIcon(":/res/pressedRed.png"));
	//    	ui->butAM->setIconSize(QSize(48,48));
	//    	ui->singleCap->setText("Manual");
	//    	m_bAutoCurveFit=true;
	//    	on_butExternal_clicked();
	//
	//    }

}




void MainWindow::LoadEmbeddedKeys()
{
	ui->lblLeft->setText(m_objVISubject->getIndexTemplate(0,true));
	ui->lblMiddle->setText(m_objVISubject->getIndexTemplate(1,true));
	ui->lblRight->setText(m_objVISubject->getIndexTemplate(2,true));
}
void MainWindow::readVISettings()
{
	QString l_strFilename;
	l_strFilename="VISettings.xml";
	QFile *xmlFile= new QFile(l_strFilename);
	if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
		qDebug()<<"Settings Calibration file read error";
	}
	QXmlStreamReader xml(xmlFile);
	while(!xml.atEnd() &&  !xml.hasError())
	{
		QXmlStreamReader::TokenType token = xml.readNext();
		QString l_strName = xml.name().toString();
		QXmlStreamAttributes attributes = xml.attributes();
		QString l_strValue = attributes.value("Value").toString();
		if(token == QXmlStreamReader::StartDocument)
		{
			continue;
		}
		if(xml.isStartElement())
		{
			if(xml.name() == "TickValue")
			{
				m_objFunctionalObject->setTickValue(l_strValue.toShort());
				VIProduct->setTickValue(l_strValue.toShort());
			}
		}
	}
	//qDebug()<<"TickValue:"<<m_nTickValue;
}

void MainWindow::on_butLearn_clicked()
{
	//ui->butVerify->setDisabled(false);
	ui->lblTestStatus->setText("");
	if( m_objFunctionalObject->isMuxDetected() == false)
	{
		/*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Mux Card Not Detected and Test Aborted.");
		return;
	}
	m_nClipLVoltage = m_objVISubject->getIndexTemplate(0);
	m_nClipLImepdance = m_objVISubject->getIndexTemplate(2);
	m_nClipFrequency =  m_objVISubject->getIndexTemplate(1);

	QString l_strDriveSettings = objInteractiveData.getVoltageMap(m_nClipLVoltage).remove(" ")+"_"+objInteractiveData.getImpedanceMap(m_nClipLImepdance).remove(" ")+"_"+objInteractiveData.getFrequencyMap(m_nClipFrequency).remove(" ");
	ui->lblDriveSettings->setText(l_strDriveSettings);
        l_objDriveSettings->setText("DRIVE   : "+l_strDriveSettings);//Zoom Legend
	//	qDebug()<< "PSOC CODE ID"<<hex<<m_objFunctionalObject->ReadPSOCCODEID();

	//	ISplash->setLoadingText("Clip Learn in Progress....");
	//	ISplash->selectSplashImage(0);
	//	ISplash->setPos(350,325,300,30);
	//	ISplash->setSplashStyle("border-width: 3px; border-style: groove; border-color: #ED9D13;border-radius: 10px; padding: 0 8px;text-align: center;background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #E7F598, stop: 0.5 #ECF5BA,stop: 0.7 #F3F7DA,stop:1 #F7F7F2);font:bold 18px;color:#3A3B32");
	//	ISplash->ShowSplash();
	clipLearn(true);
	m_bClipLearn=true;
	m_bClipVerify=false;

	//	ISplash->closeSplash();

}

void MainWindow::on_butVerify_clicked()
{
	if( m_objFunctionalObject->isMuxDetected() == false)
	{
		/*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Mux Card Not Detected and Test Aborted.");
		return;
	}
	if(m_bClipLearn == false)
	{
		/*IPTMessageBox->QMsgBox*/showMessageBox(true, false, "Please Learn Traces before verifying it.");
		return;
	}

	//	qDebug()<<"Voltage:"<<m_nVoltageIndex<<"ClipVoltage:"<<m_nClipLVoltage;
	//	qDebug()<<"Impedance:"<<m_nImpedanceIndex<<"ClipImpedance:"<<m_nClipLImepdance;
	//	qDebug()<<"Frequency:"<<m_nFrequencyIndex<<"ClipFrequency:"<<m_nClipFrequency;

	if((m_nClipLVoltage != m_nVoltageIndex) || (m_nFrequencyIndex != m_nClipFrequency) || (m_nImpedanceIndex != m_nClipLImepdance))
	{
		showMessageBox(true,false,"Learnt Settings should be same for Verifying CLip.","OK","");
		return;
	}
	//	ISplash->setLoadingText("Clip Verify in Progress....");
	//	ISplash->selectSplashImage(0);
	//	ISplash->setPos(350,325,300,30);
	//	ISplash->setSplashStyle("border-width: 3px; border-style: groove; border-color: #ED9D13;border-radius: 10px; padding: 0 8px;text-align: center;background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #E7F598, stop: 0.5 #ECF5BA,stop: 0.7 #F3F7DA,stop:1 #F7F7F2);font:bold 18px;color:#3A3B32");
	//	ISplash->ShowSplash();
	m_bClipVerify=true;
	clipLearn(false);
	//	ISplash->closeSplash();

}

void MainWindow::on_tblVoltage_clicked()
{
	ui->tblVoltage->setStyleSheet("QWidget{border:2px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblImpedance->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblFrequency->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	m_nSelectInteractiveParam=0;


}

void MainWindow::on_tblImpedance_clicked()
{
	ui->tblImpedance->setStyleSheet("QWidget{border:2px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblVoltage->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblFrequency->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	m_nSelectInteractiveParam=1;
}

void MainWindow::on_tblFrequency_clicked()
{
	ui->tblFrequency->setStyleSheet("QWidget{border:2px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblImpedance->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	ui->tblVoltage->setStyleSheet("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}");
	m_nSelectInteractiveParam=2;
}

void MainWindow::on_tblVI_clicked()
{
	m_objVISubject->setWaveType(IV);
	QString l_strON="QToolButton {color:white;border: 1px solid #2D5059;border-radius: 0px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);border-top-right-radius: 10px;border-bottom-right-radius: 10px;}";
	QString l_strOFF="QToolButton {color:black;border: 1px solid #2D5059;border-radius: 0px;background-color: gray;border-top-right-radius: 10px;border-bottom-right-radius: 10px;}";

	ui->tblVI->setStyleSheet(l_strON);
	ui->tblVT->setStyleSheet(l_strOFF);
	m_nWaveIndex=0;

}
void MainWindow::on_tblVT_clicked()
{
	m_objVISubject->setWaveType(VT);
	QString l_strON="QToolButton {color:white;border: 1px solid #2D5059;border-radius: 0px;background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);border-top-right-radius: 10px;border-bottom-right-radius: 10px;}";
	QString l_strOFF="QToolButton {color:black;border: 1px solid #2D5059;border-radius: 0px;background-color: gray;border-top-right-radius: 10px;border-bottom-right-radius: 10px;}";



	ui->tblVI->setStyleSheet(l_strOFF);
	ui->tblVT->setStyleSheet(l_strON);
	m_nWaveIndex=1;

}

void MainWindow::on_butViewTrace_clicked()
{

	//if(m_biSLearnFlag == true)
	m_objMultipleTraceDialog = new MultipleTraces(this,m_objVISubject,m_objFunctionalObject);
	m_objMultipleTraceDialog->setGeometry(100, 100, 580, 450);
	if(m_bClipVerify==true)
		m_objMultipleTraceDialog->calculateCombinationalTraces(false);
	m_objMultipleTraceDialog->LoadLearntTraces();
	m_objMultipleTraceDialog->LoadVITraces(0);
	m_objMultipleTraceDialog->show();

}


//AutoCurve Fit Functions

void MainWindow::callAutoCurveFit()
{
	if(m_objFunctionalObject->getProbeStatus() != PROBE1 ||
			m_objFunctionalObject->getProbeStatus() != PROBE2)
	{
		//return;
	}
	/*if( IPTMessageBox->QMsgBox(true, true, "Do you want to peform Auto Curve Fit.") == true)
	{

	}
	else
	{
		ui->butManual->setPalette((QColor(85, 170, 0, 255)));
		ui->butAutoCurveFit->setPalette(QColor(85, 88, 87, 255));
		return;
	}*/
	//1 .Get Upper and Lower Percentage values
	m_nAutoFitPatternCount = 0;
	m_nVoltageIndex = m_nImpedanceIndex = m_nFrequencyIndex = 0;
	VIProduct->setLoopDrive(true);
	m_objFunctionalObject->DISABLEINT();
	ISplash->setLoadingText("AutoCurvefit in Progress....");
	ISplash->selectSplashImage(0);
	ISplash->setPos(350,325,300,30);
	ISplash->setSplashStyle("border-width: 3px; border-style: groove; border-color: #ED9D13;border-radius: 10px; padding: 0 8px;text-align: center;background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #E7F598, stop: 0.5 #ECF5BA,stop: 0.7 #F3F7DA,stop:1 #F7F7F2);font:bold 18px;color:#3A3B32");
	ISplash->ShowSplash();
	doAutoCurveFitAlgorithm();
	ISplash->closeSplash();
	m_objFunctionalObject->ENINT();
	QStringList lstTemp = m_objVISubject->getAutoPatterns();
	if (lstTemp.count() > 0) {
		m_objAutoCurveFitWindow = new AutoCurveFitTraces(m_objVISubject,m_objFunctionalObject,
				this);
		m_objAutoCurveFitWindow->setGeometry(100, 100, 509, 434);
		m_objAutoCurveFitWindow->show();
	}
	VIProduct->setLoopDrive(false);
	m_objVISubject->setIndexTemplate(0,2);
	m_objVISubject->setIndexTemplate(1,5);
	m_objVISubject->setIndexTemplate(2,2);
	LoadInteractiveValues();
}

void MainWindow::doAutoCurveFitAlgorithm()
{
	if(m_ISCalibDone == true)
	{
		/*if(IPTMessageBox->QMsgBox(true, false, "Please short probes for calibration") == true)
		{
			checkforShortCalibration();
		}*/
	}
	m_bCaporInd=true;
	m_objVISubject->clearAutoCurveFitPatters();
	m_objVISubject->setComponent(0,0);
	m_nDualIndex=0;
	m_objVISubject->clearPatterns();
	m_objVISubject->setCapacitorFlag(false);
	m_objVISubject->setInductorFlag(false);
	m_objVISubject->setResitorFlag(false);
	m_objVISubject->setDiodeFlag(false);
	// 1. Detect Open Circuit Trace.
	//	qDebug()	<< "Checking OC..............................................................";
	if (checkforOC() == true)
		return;
	// 2. Detect Short Circuit Trace.
	//	qDebug()	<< "Checking SC...............................................................";
	if (checkforSC() == true)
		return;

	if (confirmDiodes() == true)
	{
		//return;
	}
	//return;
	if( binaryCapacitanceSearch(0)== true)
	{
		//return;
	}
	checkforResistance(0);
	//QPluginLoader RLCloader("libRLC.so",this);
	//IRLC = qobject_cast<RLCInterface*>(RLCloader.instance());

	//qDebug()<<"Capcitance Value:"<<IRLC->getCapacitance();
	//binaryLCSearch(0);
	VIProduct->clearCurves(0);
}

bool MainWindow::checkforOC()
{
	// For Detecting the Open Circuit(OC) The following Parameters are selected
	//1. Source Impedance - 100K
	//2. Voltage - 14 / 13 V
	//3. Frequency - 100 Hz
	m_nAutoCount=0;
	m_objVISubject->clearPatterns();
	double l_nConPosPeak =11.5,l_nConNegPeak=-11.5;

	QString l_strFileName;
	m_objVISubject->setIndexTemplate(0,3);// 13V
	m_objVISubject->setIndexTemplate(1,3);// 100 Hz
	m_objVISubject->setIndexTemplate(2,12);// 100K
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);


	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));

	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));
	//qDebug() << "Gain Factor:" << m_objVIModel->getVoltageValue() / 0.6;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	double l_nCalibPosVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	double l_nCalibNegVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);

	double l_nPosPeakVoltage = (m_objVISubject->getPosPeak()* l_nCalibPosVoltage)/REFERENCE_THRESHOLD;
	double l_nNetPeakVoltage = (m_objVISubject->getNegPeak()* l_nCalibNegVoltage)/REFERENCE_THRESHOLD;

	//qDebug() << "Gain Factor:" << m_objVIModel->getVoltageValue() / 0.6;

	l_strFileName =  "SINE_"+objInteractiveData.getVoltageMap(m_objVISubject->getIndexTemplate(0)) +"_"+
			objInteractiveData.getFrequencyMap(m_objVISubject->getIndexTemplate(1)) +"_" +
			objInteractiveData.getImpedanceMap(m_objVISubject->getIndexTemplate(2));

	/*l_strFileName = "SINE_" + QString::number(m_objVISubject->getVoltageValue(),'f', 1) +
					"V_" + QString::number(m_objVISubject->getFrequencyValue(), 'f',
						0) + "_HZ_" + QString::number(m_objVISubject->getImpedanceValue())
		+ ".bin";*/
	//	   qDebug()<<"Positive Peak:"<<m_objVISubject->getPosPeak()<<
	//			   "Negative Peak:"<<m_objVISubject->getNegPeak()<<
	//			   "Range Voltage:"<<m_objVISubject->getVoltageValue();
	l_nPosPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	l_nNetPeakVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	//		qDebug() << "File Name:"<<l_strFileName<<l_nPosPeakVoltage<<l_nNetPeakVoltage;
	//qDebug() << "Positive Peak Value:" << m_objVIModel->getPosPeakValue()
	//						<< "Negative Peak Value:" << m_objVIModel->getNegPeakValue()
	//						<< (m_objVIModel->getPosPeakValue() > 7.0)
	//						<< (m_objVIModel->getNegPeakValue() < -7.0);
	if (l_nPosPeakVoltage > l_nConPosPeak && l_nNetPeakVoltage < l_nConNegPeak) {
		QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
		m_objFunctionalObject->renameFile(l_strTestFileName);
		m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount, l_strFileName,
				m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
		return true;
	}
	updateInteractive();
	return false;
}

bool MainWindow::checkforSC()
{
	// For Detecting the Short Circuit(OC) The following Parameters are selected
	m_nAutoCount=0;
	m_objVISubject->clearPatterns();
	m_objVISubject->setIndexTemplate(0,3);// 13V
	m_objVISubject->setIndexTemplate(1,3);// 20Hz
	m_objVISubject->setIndexTemplate(2,2);// 100K
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	//double l_nCalibPosVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/0.6;
	//double l_nCalibNegVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/0.6;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);

	//	    qDebug()<<"Negative V:"<<m_objVISubject->getNegPeak();
	//	    qDebug()<<"Positive V:"<<m_objVISubject->getPosPeak();

	double l_nPosPeakVoltage = (m_objVISubject->getPosPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	double l_nNetPeakVoltage = (m_objVISubject->getNegPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;

	//	qDebug() << "Positive Peak Value:" << m_objVISubject->getPosPeakValue()
	//							<< "Negative Peak Value:" << m_objVISubject->getNegPeakValue()
	//							<< (m_objVISubject->getPosPeak() < 0.1)
	//							<< (m_objVISubject->getNegPeak() > -0.1);
	//		qDebug() << "Voltages:"<<l_nPosPeakVoltage<<l_nNetPeakVoltage<<m_objVISubject->getVoltageValue();
	//qDebug() << "Condtion:"<<(l_nPosPeakVoltage < 0.15)<<(l_nNetPeakVoltage > -0.15);
	if (l_nPosPeakVoltage < 0.2 && l_nNetPeakVoltage > -0.2)
	{
		m_objVISubject->setIndexTemplate(0,0);// 0.5V / 0.2 V
		m_objVISubject->setIndexTemplate(1,1);// 20 Hz
		m_objVISubject->setIndexTemplate(2,0);// 10 E
		m_objFunctionalObject->driveVI();
		m_objFunctionalObject->peformDrive();
		m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
		CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
		l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
		l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

		//qDebug() << "Gain Factor:" << m_objVIModel->getVoltageValue() / 0.6;
		m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
				m_objVISubject->getVoltageValue(), l_objCalibData);

		double l_nCalibPosVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
		double l_nCalibNegVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;

		m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
				m_objVISubject->getVoltageValue(), l_objCalibData);
		//qDebug() << "Positive Peak Value:" << m_objVIModel->getPosPeakValue()
		//						<< "Negative Peak Value:" << m_objVIModel->getNegPeakValue()
		//						<< (m_objVIModel->getPosPeakValue() < 0.02)
		//						<< (m_objVIModel->getNegPeakValue() > -0.02);
		QString  l_strFileName =  "SINE_"+objInteractiveData.getVoltageMap(m_objVISubject->getIndexTemplate(0)) +"_"+
				objInteractiveData.getFrequencyMap(m_objVISubject->getIndexTemplate(1)) +"_" +
				objInteractiveData.getImpedanceMap(m_objVISubject->getIndexTemplate(2));
		double l_nPosPeakVoltage = (m_objVISubject->getPosPeak()* l_nCalibPosVoltage)/REFERENCE_THRESHOLD;
		double l_nNetPeakVoltage = (m_objVISubject->getNegPeak()* l_nCalibNegVoltage)/REFERENCE_THRESHOLD;
		//			qDebug() << "Voltages:"<<l_nPosPeakVoltage<<l_nNetPeakVoltage<<m_objVISubject->getVoltageValue() ;


		if (l_nPosPeakVoltage < 0.03
				&& l_nNetPeakVoltage > -0.03) {
			QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
			m_objFunctionalObject->renameFile(l_strTestFileName);
			m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount, l_strFileName,
					m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
			//	updateInteractive();
			return true;
		}
		else
		{
			return false;
		}
	}
	else
		return false;
}

bool MainWindow::confirmDiodes()
{
	qDebug()<< "Confirming Diode / Zener";
	m_nAutoCount=0;
	m_objVISubject->clearPatterns();
	// Drive Parameters
	// 13 V, 100K, 2Khz
	m_objVISubject->setIndexTemplate(0,3);// 13V
	m_objVISubject->setIndexTemplate(1,3);// 2KHz
	m_objVISubject->setIndexTemplate(2,0);// 10E
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	double l_nCalibVoltage[100],l_nActualVoltage[100];
	for(int l_nlstIndex=0;l_nlstIndex<100;l_nlstIndex++)
	{
		double l_nVoltageValue = (m_objVISubject->getADCReceVoltage(l_nlstIndex) * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
		l_nCalibVoltage[l_nlstIndex] = l_nVoltageValue;
	}

	//	m_nUpperBandPercentage = (m_objVISubject->getPosPeakValue() - MID_RANGE) * 0.30;
	//	m_nLowerBandPercentage = (m_objVISubject->getPosPeakValue() - MID_RANGE) * 0.20;
	double l_nCalibPosVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	double l_nCalibNegVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	//	qDebug()<<"Calib Voltages"<<l_nCalibPosVoltage<<l_nCalibNegVoltage;
	double l_nCalib5PosPercent = l_nCalibPosVoltage * 0.1;
	double l_nCalib5NegPercent = l_nCalibNegVoltage * 0.1;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	//	qDebug()<<"--X1"<<(m_objVISubject->getPosPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD<<(m_objVISubject->getNegPeak()* m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	short int l_nPosDifferenceCount =0,l_nNegDifferenceCount=0;
	//	qDebug()<<"Pos %:"<<l_nCalib5PosPercent<<"Neg %:"<<l_nCalib5NegPercent;
	//qDebug()<<"Fail Index:"<<VIProduct->getCompareWaveIndex();
	//qDebug()<<"Fail Voltage:"<<(m_objVISubject->getADCReceVoltage(VIProduct->getCompareWaveIndex()) * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	bool l_bFlevel=false,l_bRlevel=false;
	for(int l_nlstIndex=0;l_nlstIndex<100;l_nlstIndex++)
	{
		double l_nVoltageValue = (m_objVISubject->getADCReceVoltage(l_nlstIndex) * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
		l_nActualVoltage[l_nlstIndex] = l_nVoltageValue;
		double l_nDifferenceVoltage =l_nCalibVoltage[l_nlstIndex] - l_nActualVoltage[l_nlstIndex];
		//qDebug()<<"Diff Voltage:"<<l_nDifferenceVoltage<<"Calib Voltage:"<<l_nCalibVoltage[l_nlstIndex]<<"Actual Voltage:"<<l_nVoltageValue;

		if(l_nDifferenceVoltage < l_nCalib5PosPercent && l_nDifferenceVoltage > l_nCalib5NegPercent)
		{

			//			if(l_nDifferenceVoltage < 0.8  && l_nDifferenceVoltage > -0.8)
			//			{
			//				qDebug()<<"FDiff Voltage:"<<l_nDifferenceVoltage<<"Calib Voltage:"<<l_nCalibVoltage[l_nlstIndex]<<"Actual Voltage:"<<l_nVoltageValue;
			//			}
			//			else if(l_nDifferenceVoltage > -0.8)
			//			{
			//				qDebug()<<"RDiff Voltage:"<<l_nDifferenceVoltage<<"Calib Voltage:"<<l_nCalibVoltage[l_nlstIndex]<<"Actual Voltage:"<<l_nVoltageValue;
			//			}
			//			qDebug()<<"Voltage:"<<l_nVoltageValue;
			//			qDebug()<<"Diff Voltage:"<<l_nDifferenceVoltage;
		}
		if( l_nDifferenceVoltage >=0.4 && l_nDifferenceVoltage <0.9)
		{
			//	qDebug()<<"Pos Difference Voltage:"<<l_nDifferenceVoltage<<l_nlstIndex;
			//l_nzeroLevel=true;
			l_bFlevel=true;
		}
		else if(l_nDifferenceVoltage >1)
		{
			l_nPosDifferenceCount++;
		}
		else if(l_nDifferenceVoltage >=-0.9 && l_nDifferenceVoltage<-0.4)
		{
			//	qDebug()<<"Negative Difference Voltage:"<<l_nDifferenceVoltage<<l_nlstIndex;
			l_bRlevel=true;
			//l_nzeroLevel=true;
		}
		else if(l_nDifferenceVoltage <-1)
		{
			l_nNegDifferenceCount++;
		}
	}
	//	qDebug()<<"Positive Difference Count:"<<l_nPosDifferenceCount;
	//	qDebug()<<"Negative Difference Count:"<<l_nNegDifferenceCount;
	if(l_nPosDifferenceCount-l_nNegDifferenceCount == 0)
		return false;
	// double l_nPosPeakVoltage = (m_objVISubject->getPosPeak() *l_nCalibPosVoltage)/REFERENCE_THRESHOLD;
	//double l_nNetPeakVoltage = -(m_objVISubject->getNegPeak() * l_nCalibNegVoltage)/REFERENCE_THRESHOLD;
	//    qDebug() << "Voltages:"<<l_nPosPeakVoltage<<l_nNetPeakVoltage<<m_objVISubject->getPosPeak()<<m_objVISubject->getNegPeak();
	//    qDebug()<<"Difference:"<<abs(l_nPosDifferenceCount-l_nNegDifferenceCount);
	if(l_bFlevel == true)
	{
		checkforZeDiode();
		return true;
	}
	else if(l_bRlevel == true)
	{
		checkforZeDiode();
		return true;
	}
	else
	{
		return false;
	}
	/*if(l_nPosPeakVoltage < 0.8 )
	{
		if(abs(l_nPosDifferenceCount-l_nNegDifferenceCount)>5)
		{
			checkforZeDiode();
			return true;
		}
		else if(abs(50-l_nPosDifferenceCount)>0 && abs(50-l_nPosDifferenceCount)<5)
		{
			return false;
		}

	}
	else if(l_nNetPeakVoltage > -0.8)
	{
		if(abs(l_nPosDifferenceCount-l_nNegDifferenceCount)>5)
		{
			checkforZeDiode();
			return true;
		}
		else if(abs(50-l_nNegDifferenceCount)>0 && abs(50-l_nNegDifferenceCount)<5)
		{
			return false;
		}
	}
	else
	{
		return false;
	}*/
}

bool MainWindow::checkforZeDiode()
{
	m_nAutoFitPatternCount=0;
	//	qDebug() << "Confirming the Zener / Diode Area.......................";
	m_objVISubject->setIndexTemplate(0,0);// 0.2 V
	m_objVISubject->setIndexTemplate(1,1);// 10 Hz
	m_objVISubject->setIndexTemplate(2,0);// 10 E
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);

	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

	//qDebug() << "Gain Factor:" << m_objVIModel->getVoltageValue() / 0.6;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	double l_nPosPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	double l_nNetPeakVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	//	qDebug() << "checkforZeDiode Voltages:"<<l_nPosPeakVoltage<<l_nNetPeakVoltage;
	//	qDebug()<<"Cond1:"<<(l_nPosPeakVoltage > 0.03 );
	//	qDebug()<<"Cond2:"<<(l_nNetPeakVoltage < -0.03 );
	if(l_nPosPeakVoltage > 0.03 && l_nNetPeakVoltage <-0.03)
	{
		//		qDebug()<<"Diode found take trace..";
		m_objVISubject->setIndexTemplate(0,3);// 13V
		m_objVISubject->setIndexTemplate(1,0);// 2KHz
		m_objVISubject->setIndexTemplate(2,0);// 10E
		m_objFunctionalObject->driveVI();
		m_objFunctionalObject->peformDrive();
		m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
		m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
				m_objVISubject->getVoltageValue(), l_objCalibData);
		l_nPosPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
		l_nNetPeakVoltage = (m_objVISubject->getNegPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
		//		qDebug() << "Diode Voltages:"<<l_nPosPeakVoltage<<l_nNetPeakVoltage;
		QString l_strFileName =  "SINE_"+objInteractiveData.getVoltageMap(m_objVISubject->getIndexTemplate(0)) +"_"+
				objInteractiveData.getFrequencyMap(m_objVISubject->getIndexTemplate(1)) +"_" +
				objInteractiveData.getImpedanceMap(m_objVISubject->getIndexTemplate(2));

		QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
		m_objFunctionalObject->renameFile(l_strTestFileName);
		m_objVISubject->setComponent(m_nAutoFitPatternCount,2);
		m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount++, l_strFileName,
				m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
		m_objVISubject->setDiodeFlag(true);
		//if(l_nPosPeakVoltage >=0.8 && l_nNetPeakVoltage <=-0.8)
		return true;
	}
}

bool MainWindow::binaryCapacitanceSearch(short int pVoltIndex )
{
	// Drive 3 Ranges
	//			qDebug()<<"Capacitance & Inductance ...";
	m_nInductanceCount=m_nCapacitanceCount=0;
	m_bIsResistance= false;
	//m_nAutoFitPatternCount=0;
	m_nAutoCount=0;
	short int l_nSelectionIndex[3];
	short int l_nImpedanceIndex=6;
	m_nVoltArray[0]=m_nVoltArray[1]=m_nVoltArray[2]=0.0;
	m_nCalibVoltArray[0]=m_nCalibVoltArray[1]=m_nCalibVoltArray[2]=0.0;
	//Initialise selection array
	l_nSelectionIndex[2]=12;
	l_nSelectionIndex[1]=6;
	l_nSelectionIndex[0]=0;
	m_bDivideLower=true;
	unsigned int l_nIndexCount=0;
	//m_objFunctionalObject->DISABLEINT();
	while((m_bDivideLower== false && m_bDivideUpper== false)==false)
	{
		//			qDebug()<<"S0:"<<l_nSelectionIndex[0]<<"S1:"<<l_nSelectionIndex[1]<<"S2:"<<l_nSelectionIndex[2];
		for(int l_nIndex=2;l_nIndex>=0;l_nIndex--)
		{
			driveCapacitance(pVoltIndex,l_nSelectionIndex[l_nIndex],l_nImpedanceIndex);
			calcuateFitnessFunction(l_nIndex);
			if(m_nAutoCount>0)
				break;
		}
		if(m_nAutoCount>0)
			break;
		// check for Lesser Voltages//
		short int l_nVoltIndex=isGreater();
		//qDebug()<<"VoltIndex:"<<l_nVoltIndex;
		if(l_nVoltIndex==2 )
		{
			l_nSelectionIndex[2] = l_nSelectionIndex[l_nVoltIndex]-1;
			l_nSelectionIndex[0] = l_nSelectionIndex[1]+1;
			l_nSelectionIndex[1] = l_nSelectionIndex[1]+(((l_nSelectionIndex[2]+1) - l_nSelectionIndex[1])/2);
		}
		else if(l_nVoltIndex==1)
		{
			l_nSelectionIndex[2] = l_nSelectionIndex[l_nVoltIndex]-1;
			l_nSelectionIndex[0]= l_nSelectionIndex[0]+1;
			l_nSelectionIndex[1] = ((l_nSelectionIndex[2]+1 + l_nSelectionIndex[0])/2);
		}
		else if(l_nVoltIndex==-2)
		{
			break;
		}
		else if(l_nVoltIndex == -1)
		{
			break;
		}
		//			qDebug()<<"A0:"<<l_nSelectionIndex[0]<<"A1:"<<l_nSelectionIndex[1]<<"A2:"<<l_nSelectionIndex[2];
		if(((l_nSelectionIndex[0]+l_nSelectionIndex[1]+l_nSelectionIndex[2])/3)==l_nSelectionIndex[0])
		{
			//qDebug()<<"Indices equal";
			driveCapacitance(pVoltIndex,l_nSelectionIndex[0],l_nImpedanceIndex);
			calcuateFitnessFunction(0);
			break;
		}
		if(l_nSelectionIndex[0]<0||l_nSelectionIndex[1]<0||l_nSelectionIndex[2]<0 )
		{
			break;
		}
		l_nIndexCount++;
		if(l_nIndexCount == MAXCOUNT)
			break;
	}
	if(m_nAutoCount >0)
		return true;
	m_bDivideLower=true;
	int l_nFreqIndex=0;
	l_nIndexCount=0;
	short int l_nGreaterIndex = checkGreaterVoltages();
	//		qDebug()<<"---------------Second Loop---------------------.";

	//	driveCapacitance(pVoltIndex,12,6);
	//	calcuateFitnessFunction(pVoltIndex);
	//	qDebug()<<"ZeroDegree:"<<m_objVISubject->getActualZeroDegree();
	bool isCapFlag=false;
	if(l_nGreaterIndex==2)
	{
		qDebug()<<"Inductance";
		l_nFreqIndex=11;
	}
	else if (l_nGreaterIndex == 0)
	{
		l_nFreqIndex=0;
		isCapFlag=true;
		qDebug()<<"Capacitance";
	}
	int l_nLoopIndex=0;
	while(l_nLoopIndex<3)
	{
		l_nSelectionIndex[2]=7;
		l_nSelectionIndex[1]=3;
		l_nSelectionIndex[0]=0;
		m_bDivideLower=true;
		unsigned short l_nLIndex=0;
		while((m_bDivideLower== false && m_bDivideUpper== false)==false)
		{
			for(int l_nIndex=2;l_nIndex>=0;l_nIndex--)
			{
				driveCapacitance(pVoltIndex,l_nFreqIndex,l_nSelectionIndex[l_nIndex]);
				calcuateFitnessFunction(l_nIndex);
				if(m_nAutoCount>0)
					break;
			}
			if(m_nAutoCount>0)
				break;
			// check for Lesser Voltages//
			short int l_nVoltIndex=isGreater();
			//qDebug()<<"Voltage Index:"<<l_nVoltIndex;
			if(l_nVoltIndex==2 )
			{
				l_nSelectionIndex[2] = l_nSelectionIndex[l_nVoltIndex]-1;
				l_nSelectionIndex[0] = l_nSelectionIndex[1]+1;
				l_nSelectionIndex[1] = l_nSelectionIndex[1]+(((l_nSelectionIndex[2]+1) - l_nSelectionIndex[1])/2);
			}
			else if(l_nVoltIndex==1)
			{
				l_nSelectionIndex[2] = l_nSelectionIndex[l_nVoltIndex]-1;
				l_nSelectionIndex[0]= l_nSelectionIndex[0]+1;
				l_nSelectionIndex[1] = ((l_nSelectionIndex[2] + l_nSelectionIndex[0])/2);
			}
			else if(l_nVoltIndex==-2)
			{
				break;
			}
			qDebug()<<"0:"<<l_nSelectionIndex[0]<<"1:"<<l_nSelectionIndex[1]<<"2:"<<l_nSelectionIndex[2];
			if(((l_nSelectionIndex[0]+l_nSelectionIndex[1]+l_nSelectionIndex[2])/3)==l_nSelectionIndex[0])
			{
				qDebug()<<"Indices equal";
				driveCapacitance(pVoltIndex,l_nSelectionIndex[0],l_nImpedanceIndex);
				calcuateFitnessFunction(0);
				//break;
			}
			if(l_nSelectionIndex[0]<0||l_nSelectionIndex[1]<0||l_nSelectionIndex[2]<0)
			{
				break;
			}
			if(l_nLIndex<2)
				l_nLIndex++;
			else
				break;
		}
		l_nLoopIndex++;
		if(m_nAutoCount>0)
			break;
		if(isCapFlag == true)
			l_nFreqIndex++;
		else
			l_nFreqIndex--;
	}
	if(m_nAutoCount>0)
		return true;
}
void MainWindow::calcuateFitnessFunction(short int pIndex)
{
	double l_nActPeakVoltage=0.0,l_nCalibPeakVoltage=0.0;
	bool isLowerBand=false;
	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

	m_objFunctionalObject->setFileBit(false);
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);

	l_nCalibPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	m_nCalibVoltArray[pIndex] = l_nCalibPeakVoltage;
	double l_nCalibrationDegree = (360*m_objVISubject->getPosPeakIndex())/100;
	//qDebug()<<"Ref Positive Peak Voltage:"<<l_nCalibPeakVoltage;
	m_objFunctionalObject->setFileBit(true);
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	l_nActPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	m_nVoltArray[pIndex] =l_nActPeakVoltage;
	double l_nActualDegree = (360*m_objVISubject->getPosPeakIndex())/100;

	//qDebug()<<"Ref Positive Peak Voltage:"<<l_nCalibPeakVoltage<<"Act Positive Peak Voltage:"<<l_nActPeakVoltage;
	//qDebug()<<"peak 50% :"<<(l_nCalibPeakVoltage*0.52)<<"peak 70%:"<<(l_nCalibPeakVoltage*0.80);
	int l_nCheckDegree = l_nActualDegree-l_nCalibrationDegree;
	m_nCheckDegree = l_nCheckDegree;
	//qDebug()<<"Check Degree:"<<l_nCheckDegree;
	//	if(l_nCheckDegree>0){
	//		m_nCapacitanceCount++;
	//		//qDebug()<<"Divide Lower"<<"Actual Degree:"<<l_nActualDegree<<"CalibDegree:"<<l_nCalibrationDegree;
	//	//	qDebug()<<"+++++++++Capacitance++++++++++++"<<l_nCheckDegree;
	//	}
	//	else{
	//		//qDebug()<<"Divide Lower"<<"Actual Degree:"<<l_nActualDegree<<"CalibDegree:"<<l_nCalibrationDegree;
	//		m_nInductanceCount++;
	//		//qDebug()<<"+++++++++Inductance+++++++++++++"<<l_nCheckDegree;
	//	}
	if(l_nActPeakVoltage>=(l_nCalibPeakVoltage*0.52) && l_nActPeakVoltage<(l_nCalibPeakVoltage*0.82))
	{
		qDebug()<<"Divide Lower"<<"Actual Degree:"<<l_nActualDegree<<"CalibDegree:"<<l_nCalibrationDegree;
		int l_nCheckDegree = l_nActualDegree-l_nCalibrationDegree;
		if(l_nCheckDegree>0){
			qDebug()<<"+++++++++fit Capacitance++++++++++++"<<l_nCheckDegree;
			m_nCapacitanceCount++;
		}
		else{
			qDebug()<<"+++++++++fit Inductance+++++++++++++"<<l_nCheckDegree;
			m_nInductanceCount++;
		}
		l_nCheckDegree = abs(l_nCheckDegree);
		QString l_strFileName =  "SINE_"+objInteractiveData.getVoltageMap(m_objVISubject->getIndexTemplate(0)) +"_"+
				objInteractiveData.getFrequencyMap(m_objVISubject->getIndexTemplate(1)) +"_" +
				objInteractiveData.getImpedanceMap(m_objVISubject->getIndexTemplate(2));

		if((l_nCheckDegree)>=38 && (l_nCheckDegree) <=62)
		{
			QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
			m_objFunctionalObject->renameFile(l_strTestFileName);
			if(isLowerBand==true)
				m_nAutoFitPatternCount--;
			if(m_bIsResistance == false)
			{
				m_objVISubject->setComponent(m_nAutoFitPatternCount,2);
				m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount++, l_strFileName,
						m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
			}
			m_bDivideLower=false;
			m_bDivideUpper=false;
			m_nAutoCount++;
			m_bCaporInd=true;
			if(m_nCapacitanceCount>0)
			{
				m_objVISubject->setCapacitorFlag(true);
				m_objVISubject->setComponent(m_nAutoFitPatternCount-1,3);
			}
			if(m_nInductanceCount>0)
			{
				m_objVISubject->setComponent(m_nAutoFitPatternCount-1,4);
				m_objVISubject->setInductorFlag(true);
			}
		}
		else if((l_nCheckDegree)>=25 && (l_nCheckDegree) <38)
		{
			QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
			m_objFunctionalObject->renameFile(l_strTestFileName);
			if(m_bIsResistance == false)
			{
				m_objVISubject->setComponent(m_nAutoFitPatternCount,2);
				m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount++, l_strFileName,
						m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
			}
			m_bDivideLower=false;
			m_bDivideUpper=false;
			isLowerBand=true;
			m_bCaporInd=true;
			if(m_nCapacitanceCount>0)
			{
				m_objVISubject->setCapacitorFlag(true);
				m_objVISubject->setComponent(m_nAutoFitPatternCount-1,3);
			}
			if(m_nInductanceCount>0)
			{
				m_objVISubject->setComponent(m_nAutoFitPatternCount-1,4);
				m_objVISubject->setInductorFlag(true);
			}
			//m_nAutoCount++;
		}
	}
	else if(l_nActPeakVoltage>(l_nCalibPeakVoltage*0.82))
	{
		m_bDivideLower=false;
		m_bDivideUpper=true;
	}
	else if(l_nActPeakVoltage<(l_nCalibPeakVoltage*0.52))
	{
		m_bDivideLower=true;
		m_bDivideUpper=false;
	}
	else if(l_nActPeakVoltage<(l_nCalibPeakVoltage*0.10))
	{
		m_nShortcount++;
	}
}

void MainWindow::driveCapacitance(short int pVoltIndex,short int pFreqIndex,short int pImpedanceIndex)
{
	m_objVISubject->setIndexTemplate(0,pVoltIndex);
	m_objVISubject->setIndexTemplate(1,pFreqIndex);
	m_objVISubject->setIndexTemplate(2,pImpedanceIndex);
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
}

short int MainWindow::isGreater()
{
	qDebug()<<"Voltages:"<<m_nVoltArray[0]<<m_nVoltArray[1]<<m_nVoltArray[2];
	double l_nZeroToOne = (m_nVoltArray[0]-m_nVoltArray[1]);
	double l_nOneToTwo =  (m_nVoltArray[1]-m_nVoltArray[2]);
	if(l_nZeroToOne <0) l_nZeroToOne = l_nZeroToOne * -1.0;
	if(l_nOneToTwo <0) l_nOneToTwo = l_nOneToTwo * -1.0;
	qDebug()<<"0 to 1:"<<l_nZeroToOne<<" 1 to 2 :"<<l_nOneToTwo<<"0.1:"<<m_nCalibVoltArray[0]*0.1;

	//qDebug()<<"Occurances:"<<l_nOccurances<<"1%:"<<m_nCalibVoltArray[0]*0.1<<"5%:"<<m_nCalibVoltArray[0]*0.52;
	/*if(l_nOccurances>0)
	{
		return -2;
	}*/
	if(m_nVoltArray[0]>m_nCalibVoltArray[0]*0.1 && m_nVoltArray[0]<m_nCalibVoltArray[0]*0.52)
	{
		if((m_nVoltArray[0] > m_nVoltArray[1]) &&(m_nVoltArray[0] > m_nVoltArray[2]))
			return -2;
	}
	else if(m_nVoltArray[0]>0.1&&m_nVoltArray[0]<0.2)
	{
		return -2;
	}
	if( l_nZeroToOne > l_nOneToTwo)
	{
		return 1;
	}
	else if(l_nOneToTwo > l_nZeroToOne)
	{
		return 2;
	}
	else
		return -1;


}


bool MainWindow::checkforResistanceSteps(short int pVoltIndex,short int pImpedanceIndex)
{
	qDebug()<<"------------------------Drive Resistance-------------:"<<pImpedanceIndex;
	m_objVISubject->setIndexTemplate(0,pVoltIndex);// 13 V
	m_objVISubject->setIndexTemplate(1,1);// 20Hz
	m_objVISubject->setIndexTemplate(2,pImpedanceIndex);
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nConstant = m_objFunctionalObject->getReceiveCalibrationConstant(m_objVISubject->getIndexTemplate(0));
	l_objCalibData->m_nGain = m_objFunctionalObject->getReceiveCalibrationGain(m_objVISubject->getIndexTemplate(0));

	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(REFERENCE_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	double l_nPosCalibPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
			m_objVISubject->getVoltageValue(), l_objCalibData);
	calcuateFitnessFunction(pVoltIndex);
	qDebug()<<"Cap Count:"<<m_nCapacitanceCount<<"Ind Count:"<<m_nInductanceCount;
	double l_nPosActualPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/REFERENCE_THRESHOLD;
	double l_nVoltPercentage40 = l_nPosCalibPeakVoltage * (30.0/100.0);
	qDebug() << "Positive Peak:"<<l_nPosActualPeakVoltage<<"Calib Peak Voltage:"<<l_nPosCalibPeakVoltage;
	m_nShortDiff = (l_nPosCalibPeakVoltage-l_nPosActualPeakVoltage);
	qDebug()<<"Difference %:"<<m_nShortDiff;
	qDebug()<<"Degree:"<<m_nCheckDegree;
	qDebug() << "30 Percent Voltage:"<<l_nVoltPercentage40;
	double Vin=0.0,Vout=0.0;
	Vout = l_nPosActualPeakVoltage;
	Vin = l_nPosCalibPeakVoltage;
	m_nCurveFitResistance = -((l_nPosActualPeakVoltage)*m_objVISubject->getImpedanceValue()/(l_nPosActualPeakVoltage - l_nPosCalibPeakVoltage));
	m_nCurveFitResistance/=1000.0;
	qDebug()<<"Rx Value:"<<m_nCurveFitResistance;
	return (l_nPosActualPeakVoltage>l_nVoltPercentage40);
}

bool MainWindow::checkforResistance(short int pVoltIndex)
{
	//Q_UNUSED(pVoltIndex);
	m_bIsResistance = true;
	qDebug()<<".............................Check for Resistance.....................................";
	double l_nTolerance=10;
	short impedanceIndex=-1;
	if(checkforResistanceSteps(pVoltIndex,12)) // Drive for 100 K Source Impedance
	{
		if(m_bCaporInd == true)
		{
			qDebug()<<"Degree:"<<m_nCheckDegree;
			if(m_nShortDiff <  0.01 )
				return false;
			else if (m_nCheckDegree >15){
				return false;
			}

		}
		if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;
		//qDebug()<< "Resistance is >= 100 K to <=1M"<<m_nCurveFitResistance;
		if(m_nCurveFitResistance>=(100-l_nTolerance) && m_nCurveFitResistance<(200))
		{
			impedanceIndex = 12;
		}
		else if(m_nCurveFitResistance>=(200-l_nTolerance) && m_nCurveFitResistance<(500))
		{
			impedanceIndex = 13;
		}
		else if(m_nCurveFitResistance>=(500-l_nTolerance) && m_nCurveFitResistance<(700))
		{
			impedanceIndex = 14;
		}
		else if(m_nCurveFitResistance>=(700-l_nTolerance) && m_nCurveFitResistance<(1000))
		{
			impedanceIndex = 14;
		}
		else
		{
			impedanceIndex = -1;
		}
		takeResistanceTrace(impedanceIndex,12,pVoltIndex);
	}
	if(impedanceIndex == -1)
	{

		if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;
		if(checkforResistanceSteps(pVoltIndex,11))// Drive for 50 K Source Impedance
		{
			if(m_bCaporInd == true)
			{
				if(m_nShortDiff <  0.01 )
					return false;
				else if (m_nCheckDegree >15){
					return false;
				}


			}

			//qDebug()<< "Resistance is >= 50 K to <=100K"<<m_nCurveFitResistance;
			if(m_nCurveFitResistance>=(50.0) && m_nCurveFitResistance<(70.0))
			{
				impedanceIndex = 11;
			}
			else if(m_nCurveFitResistance>=(70.0) && m_nCurveFitResistance<(100.0))
			{
				impedanceIndex = 12;
			}
			else
			{
				impedanceIndex = -1;
			}
			takeResistanceTrace(impedanceIndex,12,pVoltIndex);
		}
		if(impedanceIndex ==-1)
		{
			if(checkforResistanceSteps(pVoltIndex,10))// Drive for 20 K Source Impedance
			{
				if(m_bCaporInd == true)
				{
					if(m_nShortDiff <  0.01)
						return false;
					else if (m_nCheckDegree >15){
						return false;
					}
				}

				if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;

				//	qDebug()<< "Resistance is >= 20 K to <=50K"<<(m_nCurveFitResistance>=20 && m_nCurveFitResistance <30.0);
				if(m_nCurveFitResistance>=20.0 && m_nCurveFitResistance<40.0)
				{
					impedanceIndex = 10;
				}
				else if(m_nCurveFitResistance>=40.0 && m_nCurveFitResistance<50.0)
				{
					impedanceIndex = 11;
				}
				else
				{
					impedanceIndex = -1;
				}
				takeResistanceTrace(impedanceIndex,12,pVoltIndex);
			}
			if(impedanceIndex==-1)
			{
				if(checkforResistanceSteps(pVoltIndex,6))// Drive for 1 K Source Impedance
				{
					if(m_bCaporInd == true)
					{
						if(m_nShortDiff <  0.01)
							return false;
						else if (m_nCheckDegree >15){
							return false;
						}
					}
					if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;

					//	qDebug()<< "Resistance is >= 1 K to <=20K"<<m_nCurveFitResistance;
					if(m_nCurveFitResistance>=(1.0) && m_nCurveFitResistance<(2.0))
					{
						impedanceIndex = 6;
					}
					else if(m_nCurveFitResistance>=(2.0) && m_nCurveFitResistance<(4.5))
					{
						impedanceIndex = 7;
					}
					else if(m_nCurveFitResistance>=(4.5) && m_nCurveFitResistance<(10.0))
					{
						impedanceIndex = 8;
					}
					else if(m_nCurveFitResistance>=(10.0) && m_nCurveFitResistance<(20.0))
					{
						impedanceIndex = 9;
					}
					else
					{
						impedanceIndex = -1;
					}
					//qDebug()<<"Impedance Index:"<<impedanceIndex;
					takeResistanceTrace(impedanceIndex,12,pVoltIndex);
				}
				if(impedanceIndex ==-1)
				{
					if(checkforResistanceSteps(pVoltIndex,5))// Drive for 500 Source Impedance
					{
						if(m_bCaporInd == true)
						{
							if(m_nShortDiff <  0.01 )
								return false;
							else if (m_nCheckDegree >15){
								return false;
							}


						}
						if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;
						m_nCurveFitResistance = m_nCurveFitResistance *1000.0;
						//qDebug()<< "Resistance is >=500E to <=1K"<<m_nCurveFitResistance;
						if(m_nCurveFitResistance>=(500.0) && m_nCurveFitResistance<(700.0))
						{
							impedanceIndex = 5;
						}
						else if(m_nCurveFitResistance>=(700.0) && m_nCurveFitResistance<(1000.0))
						{
							impedanceIndex = 6;
						}
						else
						{
							impedanceIndex = -1;
						}
						takeResistanceTrace(impedanceIndex,12,pVoltIndex);
					}
					if(impedanceIndex==-1)
					{
						if(checkforResistanceSteps(pVoltIndex,3)) // 100 E
						{
							if(m_bCaporInd == true)
							{
								if(m_nShortDiff <  0.01 )
									return false;
								else if (m_nCheckDegree >15){
									return false;
								}
							}

							if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;
							m_nCurveFitResistance = m_nCurveFitResistance *1000.0;
							qDebug()<< "Resistance is >=50E to <=500EK"<<m_nCurveFitResistance;
							if(m_nCurveFitResistance>=(50.0) && m_nCurveFitResistance<(70.0))
							{
								impedanceIndex = 2;
							}
							else if(m_nCurveFitResistance>=(70.0) && m_nCurveFitResistance<(200.0))
							{
								impedanceIndex = 3;
							}
							else if(m_nCurveFitResistance>=(200.0) && m_nCurveFitResistance<(400.0))
							{
								impedanceIndex = 4;
							}
							else if(m_nCurveFitResistance>=(400.0) && m_nCurveFitResistance<(500.0))
							{
								impedanceIndex = 5;
							}

							else
							{
								impedanceIndex = -1;
							}
							takeResistanceTrace(impedanceIndex,12,pVoltIndex);
						}
						if(impedanceIndex == -1)
						{
							if(checkforResistanceSteps(pVoltIndex,1)) // 20 E
							{
								if(m_bCaporInd == true)
								{
									if(m_nShortDiff <  0.01 )
										return false;
									else if (m_nCheckDegree >15){
										return false;
									}

									impedanceIndex = -1;

								}

								if(m_nCurveFitResistance<0 && m_nCurveFitResistance ==0) return false;
								m_nCurveFitResistance = m_nCurveFitResistance *1000.0;
								qDebug()<< "Resistance is >=10E to <=50E"<<m_nCurveFitResistance;
								if(m_nCurveFitResistance>=(9.0) && m_nCurveFitResistance<(20.0))
								{
									impedanceIndex = 0;
								}
								else if(m_nCurveFitResistance>=(20.0) && m_nCurveFitResistance<(40.0))
								{
									impedanceIndex = 1;
								}
								else if(m_nCurveFitResistance>=(40.0) && m_nCurveFitResistance<(50.0))
								{
									impedanceIndex = 2;
								}
								else
								{
									impedanceIndex = -1;
								}
								takeResistanceTrace(impedanceIndex,12,pVoltIndex);
							}
						}
					}
				}
			}
		}
	}
	return true;
}

bool MainWindow::takeResistanceTrace(short pStImpedance,short pEndImpedance,short pVolt)
{
	Q_UNUSED(pEndImpedance);
	if(pStImpedance==-1) return false;
	qDebug()<<"ImpedanceIndex:"<<pStImpedance;
	m_objVISubject->setIndexTemplate(0,pVolt);
	m_objVISubject->setIndexTemplate(1,1);
	m_objVISubject->setIndexTemplate(2,pStImpedance);
	m_objFunctionalObject->driveVI();
	m_objFunctionalObject->peformDrive();
	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
	QString l_strFileName =  "SINE_"+objInteractiveData.getVoltageMap(m_objVISubject->getIndexTemplate(0)) +"_"+
			objInteractiveData.getFrequencyMap(m_objVISubject->getIndexTemplate(1)) +"_" +
			objInteractiveData.getImpedanceMap(m_objVISubject->getIndexTemplate(2));

	QString l_strTestFileName = "./AutoCurve"+QString::number(m_nAutoFitPatternCount,16)+".bin";
	m_objFunctionalObject->renameFile(l_strTestFileName);
	m_objVISubject->setComponent(m_nAutoFitPatternCount,1);
	m_objVISubject->setAutoCurvePattern(m_nAutoFitPatternCount++, l_strFileName,
			m_objFunctionalObject->getFileData(ACTUAL_FILENAME));
	m_objVISubject->setResitorFlag(true);
	//updateInteractive();
	return true;


	//
	//	m_objFunctionalObject->peformDrive();
	//	m_objFunctionalObject->peformReceive(ACTUAL_FILENAME);
	//	CALIB *l_objCalibData = ICALIB->ParallelDACCalibration(m_objVISubject->getIndexTemplate(0));
	//	m_objFunctionalObject->converttoVoltage(m_objFunctionalObject->getFileData(ACTUAL_FILENAME),
	//	m_objVISubject->getVoltageValue(), l_objCalibData);
	//    double l_nPosPeakVoltage = (m_objVISubject->getPosPeak() * m_objVISubject->getVoltageValue())/0.6;
	//    double l_nVoltPercentage30 = m_objVISubject->getVoltageValue() * (30.0/100.0);
	//    qDebug()<< "Peak Voltage:"<<l_nPosPeakVoltage;
	//    if(l_nPosPeakVoltage > l_nVoltPercentage30)
	//    {
	//    	return true;
	//    }
	//    else
	//    {
	//    	return false;
	//    }

}
short int MainWindow::checkGreaterVoltages()
{
	if(m_nVoltArray[0]>0&&m_nVoltArray[1]>0&&m_nVoltArray[2]>0)
		if(m_nVoltArray[0]> m_nVoltArray[1] && m_nVoltArray[0] > m_nVoltArray[2])
		{
			return 0;
		}
		else if(m_nVoltArray[1]>m_nVoltArray[2])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	else
		return 0;
}

void MainWindow::on_xAxisBox_valueChanged(double )
{
	QFile outFile("AdjustXYaxisVI.txt");
	outFile.open(QIODevice::WriteOnly);
	QTextStream ts(&outFile);
	ts <<(ui->xAxisBox->value())<<endl<<(ui->yAxisBox->value())<<endl;
}

void MainWindow::on_yAxisBox_valueChanged(double )
{
	QFile outFile("AdjustXYaxisVI.txt");
	outFile.open(QIODevice::WriteOnly);
	QTextStream ts(&outFile);
	ts <<(ui->xAxisBox->value())<<endl<<(ui->yAxisBox->value())<<endl;
}

void MainWindow::on_butZoom_clicked()
{
    QPropertyAnimation *animation2 = new QPropertyAnimation(VIProduct, "geometry");
    animation2->setEasingCurve(QEasingCurve::Linear);
    animation2->setDuration(100);
    QPropertyAnimation *animation1 = new QPropertyAnimation(ui->butZoom, "geometry");
    animation1->setEasingCurve(QEasingCurve::Linear);
    animation1->setDuration(100);

    if(VIProduct->geometry().width()==324){
        animation2->setStartValue(QRect(17, 40, 324, 272));
        animation1->setStartValue(QRect(0, 0, 324, 272));
        animation2->setEndValue(QRect(0, 30, 707, 560));
        animation1->setEndValue(QRect(0, 0, 707, 560));
        animation2->start();
        animation1->start();
        ui->butZoom->setStyleSheet("QPushButton {background-color: rgb(0, 0, 0,0);color: rgba(0, 0, 0, 0);border-style: groove;border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-width:medium; } QPushButton:pressed {background-color: rgb(0, 0, 0,0);color: rgba(0, 0, 0, 0);border-style: groove;border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-width:medium; } QPushButton:flat {background-color: rgb(0, 0, 0,0);color: rgba(0, 0, 0, 0);border-style: groove;border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-width:medium; } QPushButton:default {background-color: rgb(0, 0, 0,0);color: rgba(0, 0, 0, 0);border-style: groove;border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-width:medium; }");
        UpdateLegendLabels();
    }
    else{
        animation2->setStartValue(QRect(0, 30, 707, 560));
        animation1->setStartValue(QRect(0, 0, 707, 560));
        animation2->setEndValue(QRect(17, 40, 324, 272));
        animation1->setEndValue(QRect(0, 0, 324, 272));
        animation2->start();
        ui->butZoom->setStyleSheet(" QPushButton {background-color: rgb(0, 0, 0,0);border:2px solid white:color: rgba(0, 0, 0, 0); } QPushButton:pressed {background-color:rg(0, 0, 0,0);border:2px solid white:color: rgba(0, 0, 0, 0); } QPushButton:flat {background-color: rgb(0, 0, 0,0);border:2px solid white:color: rgba(0, 0, 0, 0); } QPushButton:default {background-color: rgb(0, 0, 0,0);border:2px solid white:color: rgba(0, 0, 0, 0); }");
        animation1->start();
    }


/*    if(VIProduct->geometry().width()==324){
        VIProduct->setDimensions(17, 40, 680, 545);
        ui->butZoom->setGeometry(0, 0, 680, 545);
    }else{
        VIProduct->setDimensions(17, 40, 324, 272);
        ui->butZoom->setGeometry(0, 0, 324, 272);
    }*/
}
