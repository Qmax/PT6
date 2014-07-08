#include "icm.h"
#include "ui_icm.h"

ICM::ICM(QWidget *parent) :
QMainWindow(parent), ui(new Ui::ICM) {
	ui->setupUi(this);

	dis=new DISPLAY(ui->displayBox);
	dis->selectGeometry(150,30);
	initialiseHWLibraries();
	Intialize();
	initialiseFeedBackResistance();
	//	ui->calibrateDisplay->setChecked(true);
	msgBoxLive=false;
	ui->holdCap->setVisible(false);
	ui->R10E->setVisible(false);
	ui->ONOFF->animateClick(1);
	m_bRacRdc=true;
	//	IPsoc->switchFly();
	//	m_bExternal = true;
	IPsoc->icmMeasurement();
	m_bExternal = false;

	ui->label_X->setVisible(false);
	ui->label_LC->setVisible(false);
	ui->value_XLXC->setVisible(false);
}
void ICM::ToolBox(bool hide) {
	ui->calibrateDisplay->setVisible(hide);
	ui->lblfrequency->setVisible(hide);
	ui->checkBox->setVisible(hide);
	ui->chkLoad->setVisible(hide);
	ui->pushButton_2->setVisible(hide);
	ui->label->setVisible(hide);
	ui->label_10->setVisible(hide);
	ui->label_11->setVisible(hide);
	ui->label_12->setVisible(hide);
	ui->label_13->setVisible(hide);
	ui->label_14->setVisible(hide);
	ui->label_15->setVisible(hide);
	ui->label_16->setVisible(hide);
	ui->label_17->setVisible(hide);
	ui->label_2->setVisible(hide);
	ui->label_9->setVisible(hide);
	ui->label_8->setVisible(hide);
	ui->label_7->setVisible(hide);
	ui->label_6->setVisible(hide);
	ui->label_3->setVisible(hide);
	ui->label_4->setVisible(hide);
	ui->label_5->setVisible(hide);
	leActual->setVisible(hide);
	leMeasured->setVisible(hide);
	ui->spinBox_2->setVisible(hide);
	ui->pushButton_3->setVisible(hide);
	ui->RacRdc->setVisible(hide);

}

void ICM::GCalib2ICM(double value, QString comp) {
	//	if(comp=="ICM-R")
	//		m_nResistance=value;
	//	else if(comp=="ICM-L")
	//		m_nInductance=value;
	//	else if(comp=="ICM-C")
	//		m_nCapacitance=value;
}
void ICM::receiveValue(double pValue) {
	if (m_nLineEditIndex == 1) {
		Actual = pValue;
	}
	if (m_nLineEditIndex == 2) {
		Measured = pValue;
	}
}
void ICM::receiveValue(QString pValue) {
	if (m_nLineEditIndex == 1) {
		leActual->setText(pValue);
	}
	if (m_nLineEditIndex == 2) {
		leMeasured->setText(pValue);
	}
}
void ICM::receiveValue(unsigned int pValue) {
}
void ICM::callActualEdit() {
	if (leActual->hasFocus()) {
		openNumKBPanel(1, 1, 'A', 2000000000000, -2000000000000, this);
		m_nLineEditIndex = 1;
	}
}
void ICM::callMeasuredEdit() {
	if (leMeasured->hasFocus()) {
		openNumKBPanel(1, 1, 'A', 2000000000000, -2000000000000, this);
		m_nLineEditIndex = 2;
	}
}
void ICM::openNumKBPanel(short int pValue) {

	QWidget *w = INumberPanel->getNumKBPanel(pValue, this);
	w->setStyleSheet("border:1px solid rgba(0,0,0,0); color:black;");
	w->setWindowFlags(Qt::WindowCloseButtonHint | Qt::Dialog);
	w->show();
}
void ICM::openNumKBPanel(short int pValue, double incRatio, char type,double max, double min, QWidget* parent) {

	QWidget *w = INumberPanel->getNumKBPanelIncDec(pValue, incRatio, type, max,min, parent);
	w->setStyleSheet("border:1px solid rgba(0,0,0,0); color:black;");
	w->setWindowFlags(Qt::WindowCloseButtonHint | Qt::Dialog);
	w->show();
}

void ICM::initialiseHWLibraries() {
	QPluginLoader loader4("libQmaxPTInterface.so", this);
	ILineEdit = qobject_cast<IQmaxLineEdit*> (loader4.instance());
	INumberPanel = qobject_cast<IQmaxNumberPanel*> (loader4.instance());
	//	IPTMessageBox = qobject_cast<IQmaxMessageBox*> (loader4.instance());

	leActual = ILineEdit->QmaxLineEdit(1, ui->debugPanel);
	leActual->setGeometry(212, 120, 60, 25);
	leMeasured = ILineEdit->QmaxLineEdit(2, ui->debugPanel);
	leMeasured->setGeometry(343, 120, 60, 25);
	leMeasured->setStyleSheet(
			"border-width: 2px;border-style: outset;border-color: gray; 					    padding: 0 8px;     background: black;     selection-background-color: yellow;   color:white;     font: bold 14px;");
	leActual->setStyleSheet(
			"border-width: 2px;border-style: outset;border-color: gray; 						padding: 0 8px;     background: black;     selection-background-color: yellow;   color:white;     font: bold 14px;");

	connect(leActual, SIGNAL(focussed(bool)), this, SLOT(callActualEdit()));
	connect(leMeasured, SIGNAL(focussed(bool)), this, SLOT(callMeasuredEdit()));

	QPluginLoader loader3("libPTPsocInterface2.so", this);
	IPsoc = qobject_cast<IPSOCCOMMUNICATION*> (loader3.instance());
	IPsoc->openSerial();

	QPluginLoader loaderBck("libBackPlaneInterface.so", this);
	IBackPlane = qobject_cast<IntefaceBackPlane*> (loaderBck.instance());
	IBackPlane->InitializeBpObject();

	QPluginLoader loader5("libGPIOEventInterface.so", this);
	IGPIOEvent = qobject_cast<PTGPIOEventInterface*> (loader5.instance());

	QPluginLoader loader6("libPTKeyEventInterfaces.so", this);
	IPTKeyEvent = qobject_cast<PTEventInterface*> (loader6.instance());

	QPluginLoader loader8("libPTGPIOPinInterface.so", this);
	IGPIOPin = qobject_cast<InterfaceGPIOPins*> (loader8.instance());

	QPluginLoader loaderApp("libPTApplicationcardInterface.so", this);
	IAppCard = qobject_cast<IApplicationCardInterface*> (loaderApp.instance());
	IAppCard->setDeviceName(SLOT0);
	IAppCard->enumerateAPPCard();

	//	hwInterface=new HardwareInterface(IAppCard);
	IAppCard->setDDSWaveSelect(DDS);
	hwInterface = new HardwareInterface();
	hwInterface->Init();
	//	hwInterface->Configure();
	//	hwInterface->Update();
	hwInterface->setOffset(0);
	hwInterface->setPhase(0);
	IAppCard->setSPIAppendBit(0x8000);
	hwInterface->setAmplitude(0.1);
	hwInterface->SingleContinuous(CONTINUOUS);

	QPluginLoader loader2("libSPIMemoryInterface.so", this);
	ISPIMemory = qobject_cast<ISPIMemoryInterface*> (loader2.instance());
	ISPIMemory->setHardwarwObject(IAppCard);

	QPluginLoader loaderGeneral("libGCalib.so", this);
	GCALIB = qobject_cast<IGCALIBTestJigInterface*> (loaderGeneral.instance());

	/*
	QPluginLoader testing("libAppBckPsoc.so", this);
	test = qobject_cast<IPTAppBckPsocInterface*> (testing.instance());
	 */

	//~~~~~~~~Check for debug panel~~~~~~~~~~~~~~~~~~~~~~~~
	QStringList debugPanel;
	QFile textFile2("debugPanel.txt");
	if (textFile2.open(QIODevice::ReadOnly))
	{
		QTextStream textStream(&textFile2);
		while (!textStream.atEnd())
		{
			debugPanel.append(textStream.readLine());
			if(debugPanel.value(0)=="1"){
				ui->debugPanel->setVisible(true);;
				ui->frontPanel->setVisible(false);
			}
			else{
				ui->debugPanel->setVisible(false);;
				ui->frontPanel->setVisible(true);
			}
		}
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	IAppCard->setSPIAppendBit(0xC000);
	m_objAD7190Component = new AD7190Component(IAppCard);
	m_objAD7190Component->resetADC(1);
	m_objAD7190Component->writeADCConfigurationRegister(1, 0x110);
	m_objAD7190Component->writeADCModeRegister(1, 0x80060);

	m_objAD7190Component->resetADC(2);
	m_objAD7190Component->writeADCConfigurationRegister(2, 0x110);
	m_objAD7190Component->writeADCModeRegister(2, 0x80060);

	IAppCard->writeRegister(0x02, 0x36);
	IAppCard->writeRegister(0x06, 0x38);
	IAppCard->writeRegister(0x1, 0x16);
	IPsoc->srcImpedanceSelection(SRC_IMP_0E);//added for 0E selection
	IAppCard->writeRegister(0x7, 0x34);
	IAppCard->writeRegister(0, 0x3A);

	IAppCard->writeRegister(0x0063,PT_APPCARD_MODULES::PT_DRIVE_APPCARD_BTUR);
	IAppCard->writeRegister(0x0009,	PT_APPCARD_MODULES::PT_DRIVE_APPCARD_BDR);
	IAppCard->writeRegister(0x0001,	PT_APPCARD_MODULES::PT_DRIVE_APPCARD_DPR);
	IAppCard->writeRegister(0x0000, 0x1C);
	IAppCard->writeRegister(0x0100, 0x1A);

	ADCtimer = new QTimer(this);
	connect(ADCtimer, SIGNAL(timeout()), this, SLOT(readADC()));

	_100pF = _1nF = _10nF = _100nF = _1uF = _10uF = _100uF = _1mF = _10mF = 0;

	for (int i = 0; i < 10; i++)
		capSamples[i] = 0.0;
	capInc = 0;
	m_bNull = false;
	//	m_bExternal = false;

	cbdR=0.0;cbdL=0.0;cbdC=0.0;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	IBackPlane->writeBackPlaneRegister(0x0FFF, 0x001E);//clear all interrupts
	IBackPlane->writeBackPlaneRegister(0x0000, 0x0020);//disable all interrupts
	IBackPlane->writeBackPlaneRegister(0x0000, 0x0024);//disable global interrupt
	IBackPlane->writeBackPlaneRegister(0x0100, 0x0020);//enabling psoc INT0embedded key interrupt)

	IPTKeyEvent->InvokeGPIOEvent(this, "/dev/input/event2", "pt_kpp",
			&m_nPTKeyCode);
	IGPIOEvent->InvokeGPIOEvent(this, "/dev/input/event7", "gpioevent",
			&m_nGPIOCode);

	IBackPlane->writeBackPlaneRegister(0x0001, 0x0024);
}
void ICM::KnobFunction() {

}
void ICM::changeByKnob(double Angle, double totalSteps) {

}
void ICM::ProbeFunction() {
	unsigned int l_nRegisterValue = 0, reads;
	IBackPlane->readBackPlaneRegister(0x001E);
	qDebug() << "data read at 1E" << l_nRegisterValue;
	IBackPlane->writeBackPlaneRegister(0x0100, 0x001E);
	IPsoc->writeSerial(0x01);
	usleep(1000);
	reads = IPsoc->readSerial();
	qDebug() << "Embedded Probe reads:" << hex << reads;
	changeByProbe(reads);
	IBackPlane->writeBackPlaneRegister(0x0001, 0x0024);
}
void ICM::changeByProbe(unsigned int key) {
	if (key == 0x90 || key == 0x98) {
		on_ONOFF_clicked();

	} else if (key == 0xA0 || key == 0xA8) {
		//		if(ui->R->isChecked())
		//			ui->L->setChecked(true);
		//		else if(ui->L->isChecked())
		//			ui->C->setChecked(true);
		//		else
		//			ui->R->setChecked(true);


	} else if (key == 0xC0 || key == 0xC8) {
		ui->AutoManual->click();
		on_AutoManual_clicked();
	}
}

bool ICM::showMessageBox(bool ok, bool cancel, QString text, QString okText ="Ok", QString calcelText = "Cancel") {
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

void ICM::KeyFunction() {
	if (m_nPTKeyCode == 1) {
		qDebug() << ("\nMENU");
		if(msgBoxLive!=true){
			on_Exit_clicked();

		}
	} else if (m_nPTKeyCode == 2) {
		qDebug() << ("\nESC");
		if(msgBoxLive!=true){
			on_Exit_clicked();
		}
	} else if (m_nPTKeyCode == 3) {
		qDebug() << ("\nNULL");
		if(msgBoxLive!=true){
			ui->NULL_2->animateClick(1);
		}
	} else if (m_nPTKeyCode == 4) {
		qDebug() << ("\nF1");
		if(msgBoxLive!=true){
			//		ui->R->setChecked(true);
			on_R_clicked();
		}
	} else if (m_nPTKeyCode == 5) {
		qDebug() << ("\nF2");
		if(msgBoxLive!=true){
			//		ui->L->setChecked(true);
			on_L_clicked();
		}
	} else if (m_nPTKeyCode == 6) {
		qDebug() << ("\nF3");
		if(msgBoxLive!=true){
			//		ui->C->setChecked(true);
			on_C_clicked();
		}
	} else if (m_nPTKeyCode == 7) {
		qDebug() << ("\nF4");
		if(msgBoxLive!=true){

		}
	} else if (m_nPTKeyCode == 8) {
		qDebug() << ("\nF5");
		if(msgBoxLive!=true){

		}
	} else if (m_nPTKeyCode == 9) {
		qDebug() << ("\nUP");
		if(msgBoxLive!=true){
			if(rFlag==true){
				if(ui->R10KE->isChecked())
					ui->R10E->setChecked(true);
				else if(ui->R100KE->isChecked())
					ui->R100E->setChecked(true);
				else if(ui->R1ME->isChecked())
					ui->R1KE->setChecked(true);
			}else if(lFlag==true){
				if(ui->L300mH->isChecked())
					ui->L30uH->setChecked(true);
				else if(ui->L3H->isChecked())
					ui->L300uH->setChecked(true);
				else if(ui->L30H->isChecked())
					ui->L3mH->setChecked(true);
			}else if((cFlag==true)){
				if(ui->C10uF->isChecked())
					ui->C100pF->setChecked(true);
				else if(ui->C100uF->isChecked())
					ui->C1nF->setChecked(true);
				else if(ui->C1mF->isChecked())
					ui->C10nF->setChecked(true);
				else if(ui->C10mF->isChecked())
					ui->C100nF->setChecked(true);
			}
		}

	} else if (m_nPTKeyCode == 10) {
		qDebug() << ("\nDOWN");
		if(msgBoxLive!=true){
			if(rFlag==true){
				if(ui->R10E->isChecked())
					ui->R10KE->setChecked(true);
				else if(ui->R100E->isChecked())
					ui->R100KE->setChecked(true);
				else if(ui->R1KE->isChecked())
					ui->R1ME->setChecked(true);
			}else if(lFlag==true){
				if(ui->L30uH->isChecked())
					ui->L300mH->setChecked(true);
				else if(ui->L300uH->isChecked())
					ui->L3H->setChecked(true);
				else if(ui->L3mH->isChecked())
					ui->L30H->setChecked(true);
			}else if(cFlag==true){
				if(ui->C100pF->isChecked())
					ui->C10uF->setChecked(true);
				else if(ui->C1nF->isChecked())
					ui->C100uF->setChecked(true);
				else if(ui->C10nF->isChecked())
					ui->C1mF->setChecked(true);
				else if(ui->C100nF->isChecked())
					ui->C10mF->setChecked(true);
			}
		}
	} else if (m_nPTKeyCode == 11) {
		qDebug() << ("\nRIGHT");
		if(msgBoxLive){
			if(connectButton/*IPTMessageBox->GetConnectButton()*/->hasFocus())
				abortButton/*IPTMessageBox->GetAbortButton()*/->setFocus();
			else
				connectButton/*IPTMessageBox->GetConnectButton()*/->setFocus();
		}
		else{
			if(rFlag==true){
				if(ui->R10E->isChecked())
					ui->R100E->setChecked(true);
				else if(ui->R100E->isChecked())
					ui->R1KE->setChecked(true);
				else if(ui->R1KE->isChecked())
					ui->R10KE->setChecked(true);
				else if(ui->R10KE->isChecked())
					ui->R100KE->setChecked(true);
				else if(ui->R100KE->isChecked())
					ui->R1ME->setChecked(true);
			}else if(lFlag==true){
				if(ui->L30uH->isChecked())
					ui->L300uH->setChecked(true);
				else if(ui->L300uH->isChecked())
					ui->L3mH->setChecked(true);
				else if(ui->L3mH->isChecked())
					ui->L30mH->setChecked(true);
				else if(ui->L30mH->isChecked())
					ui->L300mH->setChecked(true);
				else if(ui->L300mH->isChecked())
					ui->L3H->setChecked(true);
				else if(ui->L3H->isChecked())
					ui->L30H->setChecked(true);
			}else if(cFlag==true){
				if(ui->C100pF->isChecked())
					ui->C1nF->setChecked(true);
				else if(ui->C1nF->isChecked())
					ui->C10nF->setChecked(true);
				else if(ui->C10nF->isChecked())
					ui->C100nF->setChecked(true);
				else if(ui->C100nF->isChecked())
					ui->C1uF->setChecked(true);
				else if(ui->C1uF->isChecked())
					ui->C10uF->setChecked(true);
				else if(ui->C10uF->isChecked())
					ui->C100uF->setChecked(true);
				else if(ui->C100uF->isChecked())
					ui->C1mF->setChecked(true);
				else if(ui->C1mF->isChecked())
					ui->C10mF->setChecked(true);
			}
		}

	} else if (m_nPTKeyCode == 12) {
		qDebug() << ("\nLEFT");
		if(msgBoxLive){
			if(connectButton/*IPTMessageBox->GetConnectButton()*/->hasFocus())
				abortButton/*IPTMessageBox->GetAbortButton()*/->setFocus();
			else
				connectButton/*IPTMessageBox->GetConnectButton()*/->setFocus();
		}else{
			if(rFlag==true){
				if(ui->R1ME->isChecked())
					ui->R100KE->setChecked(true);
				else if(ui->R100KE->isChecked())
					ui->R10KE->setChecked(true);
				else if(ui->R10KE->isChecked())
					ui->R1KE->setChecked(true);
				else if(ui->R1KE->isChecked())
					ui->R100E->setChecked(true);
				else if(ui->R100E->isChecked())
					ui->R10E->setChecked(true);
			}else if(lFlag==true){
				if(ui->L30H->isChecked())
					ui->L3H->setChecked(true);
				else if(ui->L3H->isChecked())
					ui->L300mH->setChecked(true);
				else if(ui->L300mH->isChecked())
					ui->L30mH->setChecked(true);
				else if(ui->L30mH->isChecked())
					ui->L3mH->setChecked(true);
				else if(ui->L3mH->isChecked())
					ui->L300uH->setChecked(true);
				else if(ui->L300uH->isChecked())
					ui->L30uH->setChecked(true);
			}else if(cFlag==true){
				if(ui->C10mF->isChecked())
					ui->C1mF->setChecked(true);
				else if(ui->C1mF->isChecked())
					ui->C100uF->setChecked(true);
				else if(ui->C100uF->isChecked())
					ui->C10uF->setChecked(true);
				else if(ui->C10uF->isChecked())
					ui->C1uF->setChecked(true);
				else if(ui->C1uF->isChecked())
					ui->C100nF->setChecked(true);
				else if(ui->C100nF->isChecked())
					ui->C10nF->setChecked(true);
				else if(ui->C10nF->isChecked())
					ui->C1nF->setChecked(true);
				else if(ui->C1nF->isChecked())
					ui->C100pF->setChecked(true);
			}
		}

	} else if (m_nPTKeyCode == 13) {
		qDebug() << ("\nENTER");
		if(msgBoxLive){
			if(connectButton/*IPTMessageBox->GetConnectButton()*/->hasFocus())
				connectButton/*IPTMessageBox->GetConnectButton()*/->animateClick(1);
			else
				abortButton/*IPTMessageBox->GetAbortButton()*/->animateClick(1);
		}else{

		}

	} else if (m_nPTKeyCode == 14) {
		qDebug() << ("\nSETUP");
		//		if(ui->frontPanel->isVisible())
		//			ui->frontPanel->setVisible(false);
		//		else
		//			ui->frontPanel->setVisible(true);

	} else if (m_nPTKeyCode == 15) {
		qDebug() << ("\nDEFAULT");

	} else if (m_nPTKeyCode == 16) {
		qDebug() << ("\nTOUCH");
		IGPIOPin->toggleTouchButton();
	} else if (m_nPTKeyCode == 17) {
		qDebug() << ("\nFILE");
		on_printImage_clicked();
	} else if (m_nPTKeyCode == 18) {
		qDebug() << ("\nSCALE");
	} else if (m_nPTKeyCode == 19) {
		qDebug() << ("\nRUN/STOP");
		if(msgBoxLive!=true)
			on_ONOFF_clicked();

	}
}
void ICM::customEvent(QEvent *e) {
	qDebug()<<"ICMM Custom Event";
	if (e->type() == ((QEvent::Type) 1234)) {
		qDebug() << "Embedded Probe";
		ProbeFunction();
	}
	if (e->type() == ((QEvent::Type) 5678)) {
		qDebug() << "PT Keypad";
		KeyFunction();
	}
	if (e->type() == ((QEvent::Type) 3456)) {
		qDebug() << "Magnetic Knob";
		KnobFunction();
	}

	QEvent(e->type());
}

void ICM::callFrequencyChange(double value) {

	m_nFrequency = value;

}
void ICM::callOffsetChange(double value) {
	m_dOffset = value;
	//qDebug()<<"Offset Received :"<<m_dOffset;
}
void ICM::callFeedBackChange(int index) {

	//qDebug()<<"feedback resistance index:"<<index;

	if (rFlag==true)
		m_lstRFResistance.insert(R_Index, m_lstRFResistance.value(index));

	if (lFlag==true)
		m_lstRFInductance.insert(L_Index, m_lstRFResistance.value(index));

	if (cFlag==true)
		m_lstRFCapcitance.insert(C_Index, m_lstRFResistance.value(index));

}

void ICM::readADC() {

	usleep(10000);

	short int l_nResoulution = 23;
	double l_nGain = 1.0, l_nVREF = 2.048;
	double l_nFactor1 = 0.0, l_nFactor2 = 0.0;
	IAppCard->setSPIAppendBit(0xC000);

	noOFsamples = ui->spinBox_2->value();
	double avgOut = 0.0;
	if (ui->CapacitanceRanges->isVisible())
		m_nImpedanceValue = m_lstRFCapcitance.value(C_Index);
	if (ui->Inductorranges->isVisible())
		m_nImpedanceValue = m_lstRFInductance.value(L_Index);
	if (ui->ResistanceRanges->isVisible())
		m_nImpedanceValue = m_lstRFResistance.value(R_Index);

	for (int i = 0; i < noOFsamples; i++) {
		//if(i==0)
		m_nADC1Voltage = m_objAD7190Component->readADCDataRegister(1)
										& 0xFFFFFF;
		//qDebug()<<"Hex ADC1 Code:"<<hex<<m_nADC1Voltage;
		l_nFactor1 = (m_nADC1Voltage / pow(2, l_nResoulution)) - 1;
		l_nFactor2 = (l_nGain / l_nVREF);
		l_nAIN1 = l_nFactor1 / l_nFactor2;
		//qDebug()<<"Converted ADC1 Code:"<<l_nAIN1;
		ui->label_2->setText(QString::number(l_nAIN1, 'f', 8));
		//if(i==0)
		m_nADC2Voltage = m_objAD7190Component->readADCDataRegister(2)
										& 0xFFFFFF;
		//qDebug()<<"Hex ADC2 Code:"<<hex<<m_nADC2Voltage;
		l_nFactor1 = (m_nADC2Voltage / pow(2, l_nResoulution)) - 1;
		l_nFactor2 = (l_nGain / l_nVREF);
		l_nAIN2 = l_nFactor1 / l_nFactor2;
		//qDebug()<<"Converted ADC2 Code:"<<l_nAIN2;
		ui->label_4->setText(QString::number(l_nAIN2, 'f', 8));
		double l_nImpedanceValue = m_nImpedanceValue;
		//qDebug()<<"Impedance Value:"<<l_nImpedanceValue;
		ui->label_6->setText(QString::number(l_nImpedanceValue, 'f', 1));
		double l_n1 = (l_nImpedanceValue / l_nAIN2);
		//qDebug()<< "Division:"<<l_n1;
		m_nResistance = (l_n1 * l_nAIN1);
		//avgRetval[i]=m_nResistance;
		avgOut = avgOut + m_nResistance;
	}
	//qDebug()<<"Avg Out:"<<avgOut<<"Samples:"<<noOFsamples;
	m_nResistance = avgOut / noOFsamples;
	//qDebug()<<"Resistance:"<<m_nResistance;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	noOFsamples=ui->spinBox_2->value();
	//	avgRetval[avg]=m_nResistance;
	//	avg++;
	//	double avgOut=0.0;
	//	for(int i=0;i<noOFsamples;i++)
	//		avgOut=avgOut+avgRetval[i];
	//	m_nResistance=avgOut/noOFsamples;
	//	if(avg>=noOFsamples)
	//		avg=0;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//qDebug()<< "MUL:"<<m_nResistance;
	ui->label_7->setText(QString::number(m_nResistance, 'f', 12));

	double l_RMSDiv = (2 * (3.14) * m_nFrequency * m_nResistance);
	if (l_RMSDiv != 0)
		m_nCapacitance = 1 / l_RMSDiv;

	ui->label_11->setText(QString::number(m_nCapacitance, 'f', 15));

	double l_RMSDiv1 = (2 * (3.14) * m_nFrequency);
	if (l_RMSDiv1 != 0)
		m_nInductance = m_nResistance / l_RMSDiv1;
	ui->label_9->setText(QString::number(m_nInductance, 'f', 12));

	ui->lblfrequency->setText(QString::number(m_nFrequency, 'f', 0));


	if(autoFlag==true){
		AutoRange();
	}

	if (ui->ResistanceRanges->isVisible()) {
		ui->label_X->setVisible(false);
		ui->label_LC->setVisible(false);
		ui->value_XLXC->setVisible(false);
		GetDisplayResistance(m_nResistance, m_lstRFResistance.value(R_Index));
		ui->rangeLabel->setText(m_mapResistance.value(R_Index));
		emit ICM2GCalib(m_nResistance, "ICM-R");
	}

	else if (ui->CapacitanceRanges->isVisible()) {
		ui->label_X->setVisible(true);
		ui->label_LC->setVisible(true);
		ui->value_XLXC->setVisible(true);
		ui->label_LC->setText("C:");
		ui->value_XLXC->setText(QString::number(m_nResistance,'f',6));
		GetDisplayCapcitance(m_nCapacitance, C_Index);
		ui->rangeLabel->setText(m_mapCapacitance.value(C_Index));
		emit ICM2GCalib(m_nCapacitance, "ICM-C");
	}

	else if (ui->Inductorranges->isVisible()) {
		ui->label_X->setVisible(true);
		ui->label_LC->setVisible(true);
		ui->value_XLXC->setVisible(true);
		ui->label_LC->setText("L:");
		ui->value_XLXC->setText(QString::number(m_nResistance,'f',6));
		GetDisplayInductance(m_nInductance, L_Index);
		ui->rangeLabel->setText(m_mapInductance.value(L_Index));
		emit ICM2GCalib(m_nInductance, "ICM-L");
	}
}
void ICM::AutoRange() {
	if (ui->ResistanceRanges->isVisible()) {
		if (m_nResistance_2 > 1100000) {
			qDebug()<<"greater than 1.1M";
			dis->setValue("OL");
			ui->Unit->setText("");
		}
		if (m_nResistance_2 > 290000 && m_nResistance_2 <= 1100000) {
			qDebug()<<"greater than 290K & less than 1.1M";
			ui->R1ME->setChecked(true);
			on_R1ME_clicked();
			if (l_nAIN1 >= 2.048 || l_nAIN2 >= 2.048) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}
		if (m_nResistance_2 > 29000 && m_nResistance_2 <= 310000) {
			qDebug()<<"greater than 29K & less than 3.1K";
			ui->R100KE->setChecked(true);
			on_R100KE_clicked();
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}
		if (m_nResistance_2 > 2900 && m_nResistance_2 <= 31000) {
			qDebug()<<"greater than 2.9K & less than 31K";
			ui->R10KE->setChecked(true);
			on_R10KE_clicked();
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}
		if (m_nResistance_2 > 290 && m_nResistance_2 <= 3100) {
			qDebug()<<"greater than 29E & less than 3.1K";
			ui->R1KE->setChecked(true);
			on_R1KE_clicked();
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}
		if (m_nResistance_2 > 1 && m_nResistance_2 <= 310) {
			qDebug()<<"greater than 1E & less than 31E";
			ui->R100E->setChecked(true);
			on_R100E_clicked();
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}
		if (m_nResistance_2 <= 1) {
			qDebug()<<"less than 1E";
			ui->R100E->setChecked(true);
			on_R10E_clicked();
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->R10E->setChecked(true);
				on_R10E_clicked();
			}
		}

	} else if (ui->Inductorranges->isVisible()) {
		if (m_nInductance_2 <= 0.000027) {
			if (L_Index != 0) {
				ui->L30uH->setChecked(true);
				on_L30uH_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 1) {
					//				 ui->L300uH->setChecked(true);
					//				 on_L300uH_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 0.000027 && m_nInductance_2 <= 0.00027) {
			if (L_Index != 1) {
				ui->L300uH->setChecked(true);
				on_L300uH_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 2) {
					//				 ui->L3mH->setChecked(true);
					//				 on_L3mH_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 0.00027 && m_nInductance_2 <= 0.0027) {
			if (L_Index != 2) {
				ui->L3mH->setChecked(true);
				on_L3mH_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 3) {
					//				 ui->L30mH->setChecked(true);
					//				 on_L30mH_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 0.0027 && m_nInductance_2 <= 0.027) {
			if (L_Index != 3) {
				ui->L30mH->setChecked(true);
				on_L30mH_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 4) {
					//				 ui->L300mH->setChecked(true);
					//				 on_L300mH_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 0.027 && m_nInductance_2 <= 0.27) {
			if (L_Index != 4) {
				ui->L300mH->setChecked(true);
				on_L300mH_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 5) {
					//				 ui->L3H->setChecked(true);
					//				 on_L3H_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 0.27 && m_nInductance_2 <= 2.7) {
			if (L_Index != 5) {
				ui->L3H->setChecked(true);
				on_L3H_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (L_Index != 6) {
					//				 ui->L30H->setChecked(true);
					//				 on_L30H_clicked();
					ui->L30uH->setChecked(true);
					on_L30uH_clicked();
				}
			}
		} else if (m_nInductance_2 > 2.7 && m_nInductance_2 <= 30) {
			if (L_Index != 6) {
				ui->L30H->setChecked(true);
				on_L30H_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				ui->L30uH->setChecked(true);
				on_L30uH_clicked();
			}
		} else if (m_nInductance_2 > 30) {
			dis->setValue("OL");
			ui->Unit->setText("");
		}
	} else if (ui->CapacitanceRanges->isVisible()) {
		if (m_nCapacitance_2 <= 0.00000000009) {
			if (C_Index != 0) {
				ui->C100pF->setChecked(true);
				on_C100pF_clicked();
			}
		}
		if (m_nCapacitance_2 > 0.000000000090000000000000 && m_nCapacitance_2
				<= 0.0000000009) {
			if (C_Index != 1) {
				ui->C1nF->setChecked(true);
				on_C1nF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 2) {
					ui->C10nF->setChecked(true);
					on_C10nF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.000000000909999999999999 && m_nCapacitance_2
				<= 0.000000009) {
			if (C_Index != 2) {
				ui->C10nF->setChecked(true);
				on_C10nF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 3) {
					ui->C100nF->setChecked(true);
					on_C100nF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.00000000909 && m_nCapacitance_2 <= 0.00000009) {
			if (C_Index != 3) {
				ui->C100nF->setChecked(true);
				on_C100nF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 4) {
					ui->C1uF->setChecked(true);
					on_C1uF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.0000000909100000000001 && m_nCapacitance_2
				<= 0.0000009) {
			if (C_Index != 4) {
				ui->C1uF->setChecked(true);
				on_C1uF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 5) {
					ui->C10uF->setChecked(true);
					on_C10uF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.000000909090000000001 && m_nCapacitance_2
				<= 0.000009) {
			if (C_Index != 5) {
				ui->C10uF->setChecked(true);
				on_C10uF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 6) {
					ui->C100uF->setChecked(true);
					on_C100uF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.00000909091 && m_nCapacitance_2 <= 0.00009) {
			if (C_Index != 6) {
				ui->C100uF->setChecked(true);
				on_C100uF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 7) {
					ui->C1mF->setChecked(true);
					on_C1mF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.00009090909 && m_nCapacitance_2 <= 0.0009) {
			if (C_Index != 7) {
				ui->C1mF->setChecked(true);
				on_C1mF_clicked();
			}
			if (l_nAIN1 >= 2.047 || l_nAIN2 >= 2.047) {
				if (C_Index != 8) {
					ui->C10mF->setChecked(true);
					on_C10mF_clicked();
					//					 ui->C100pF->setChecked(true);
					//					 on_C100pF_clicked();
				}
			}
		}
		if (m_nCapacitance_2 > 0.000909090909999999 && m_nCapacitance_2
				<= 0.010) {
			if (C_Index != 8) {
				ui->C10mF->setChecked(true);
				on_C10mF_clicked();
			}
			if (l_nAIN1 >= 2.048 || l_nAIN2 >= 2.048) {
				//				 ui->C100pF->setChecked(true);
				//				 on_C100pF_clicked();
				dis->setValue("OL");
				ui->Unit->setText("");
			}
		} else if (m_nCapacitance_2 > 0.010) {
			dis->setValue("OL");
			ui->Unit->setText("");
		}
	}
}
void ICM::initialiseFeedBackResistance() {
	// Resistance Feedback
	m_lstRFResistance.insert(0, 10.0);
	m_lstRFResistance.insert(1, 100.0);
	m_lstRFResistance.insert(2, 1000.0);
	m_lstRFResistance.insert(3, 10000.0);
	m_lstRFResistance.insert(4, 100000.0);
	m_lstRFResistance.insert(5, 400000);//1000000.0);

	//Inductance Feedback
	m_lstRFInductance.insert(0, 100.0); //30uH
	m_lstRFInductance.insert(1, 100.0); //300uH
	//	m_lstRFInductance.insert(1, 10.0); //300uH
	m_lstRFInductance.insert(2, 100.0); //3mH
	m_lstRFInductance.insert(3, 1000.0); //30mH
	m_lstRFInductance.insert(4, 1000.0); //300mH
	m_lstRFInductance.insert(5, 10000.0); //3H
	m_lstRFInductance.insert(6, 10000.0); //30H

	//Capcitance Feedback
	//	m_lstRFCapcitance.insert(0, 1000000.0);
	//	m_lstRFCapcitance.insert(1, 1000000.0);
	m_lstRFCapcitance.insert(0, 100000.0);
	m_lstRFCapcitance.insert(1, 100000.0);
	m_lstRFCapcitance.insert(2, 100000.0);
	m_lstRFCapcitance.insert(3, 10000.0);
	m_lstRFCapcitance.insert(4, 10000.0);
	m_lstRFCapcitance.insert(5, 1000.0);
	m_lstRFCapcitance.insert(6, 10.0);
	m_lstRFCapcitance.insert(7, 10.0);
	m_lstRFCapcitance.insert(8, 10.0);
}

void ICM::Intialize() {
	//units
	micro = QChar(0x00B5);
	ohms = QChar(0x2126);
	kiloOhms = "K" + ohms;
	picoFarad = "pF";
	nanoFarad = "nF";
	microFarad = micro + "F";
	milliFarad = "mF";
	microHenry = micro + "H";
	milliHenry = "mH";
	Henry = "H";

	//	ui->R->setChecked(true);
	ui->rBut->animateClick(1);
	on_R_clicked();
	ui->ACDC->setEnabled(true);
	R_Index = 0;
	C_Index = 0;
	L_Index = 0;
	ui->R10E->setChecked(true);

	on_OnOffSlider_valueChanged(0);
	autoFlag=true;


	m_nICMMGR = 0;
	m_nFrequency = 1000;

	calibedSlope = 1.0;
	calibedConstant = 0.0;

	m_mapResistance.insert(0, "5E");
	m_mapResistance.insert(1, "300E");
	m_mapResistance.insert(2, "3KE");
	m_mapResistance.insert(3, "30KE");
	m_mapResistance.insert(4, "300KE");
	m_mapResistance.insert(5, "1ME");

	m_mapCapacitance.insert(0, "100pF");
	m_mapCapacitance.insert(1, "1nF");
	m_mapCapacitance.insert(2, "10nF");
	m_mapCapacitance.insert(3, "100nF");
	m_mapCapacitance.insert(4, "1uF");
	m_mapCapacitance.insert(5, "10uF");
	m_mapCapacitance.insert(6, "100uF");
	m_mapCapacitance.insert(7, "1mF");
	m_mapCapacitance.insert(8, "10mF");

	m_mapInductance.insert(0, "30uH");
	m_mapInductance.insert(1, "300uH");
	m_mapInductance.insert(2, "3mH");
	m_mapInductance.insert(3, "30mH");
	m_mapInductance.insert(4, "300mH");
	m_mapInductance.insert(5, "3H");
	m_mapInductance.insert(6, "30H");

	m_dOffset = 0.0;
	m_dRNull=0.0;m_dLNull=0.0;m_dCNull=0.0;

	for (int i = 0; i < 9; i++) {
		if (i <= 5) {
			avgRValueSh[i] = 0;
			avgRValueOpen[i] = 0;
		}
		if (i <= 6) {
			avgLValueSh[i] = 0;
			avgLValueOpen[i] = 0;
		}
		if (i <= 8) {
			avgCValueSh[i] = 0;
			avgCValueOpen[i] = 0;
		}
	}

	Zdut = 0;

	for (int i = 0; i < 100; i++)
		avgRetval[i] = 0.0;

	avg = 0;
	noOFsamples = 25;


	runFlag=false;
}

ICM::~ICM() {
	delete ui;
}

void ICM::changeEvent(QEvent *e) {
	QMainWindow::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}

void ICM::on_R_clicked() {
	if (rFlag==true) {
		ui->ResistanceRanges->setVisible(true);
		ui->Inductorranges->setVisible(false);
		ui->CapacitanceRanges->setVisible(false);
	}
	rFlag=true;lFlag=false;cFlag=false;
	on_R10E_clicked();
	ui->ACDC->setEnabled(true);
}

void ICM::on_L_clicked() {
	if (lFlag==true) {
		ui->ResistanceRanges->setVisible(false);
		ui->Inductorranges->setVisible(true);
		ui->CapacitanceRanges->setVisible(false);
	}
	rFlag=false;lFlag=true;cFlag=false;
	on_L30uH_clicked();

	ui->ACDC->setEnabled(false);
	if(m_bRacRdc==false)
		on_RacRdc_clicked();

}

void ICM::on_C_clicked() {

	if (cFlag==true) {
		ui->ResistanceRanges->setVisible(false);
		ui->Inductorranges->setVisible(false);
		ui->CapacitanceRanges->setVisible(true);
	}
	rFlag=false;lFlag=false;cFlag=true;
	on_C100pF_clicked();

	ui->ACDC->setEnabled(false);
	if(m_bRacRdc==false)
		on_RacRdc_clicked();

}

void ICM::on_OnOffSlider_valueChanged(int value) {
	if (value == 0) {
		if (ADCtimer->isActive()) {
			IAppCard->stopDrive();
			ADCtimer->stop();
		}
	} else {
		IAppCard->startDrive(1);
		ADCtimer->start(300);
		timer.start();
	}
}

void ICM::on_AutoManualSlider_valueChanged(int value) {
	if (value == 0) {

	} else {
	}
}

void ICM::on_Exit_clicked() {

	hwInterface->Drive(STOPDRIVE);
	IBackPlane->closeObject();
	IPsoc->closeSerial();
	parentWidget()->close();
}

void ICM::on_C100pF_clicked() {
	_100pF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 100pF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_100pF<<"times";

	C_Index = 0;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 4;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(8000);
	m_nFrequency = 8000;
}
void ICM::on_C1nF_clicked() {
	_1nF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 1nF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_1nF<<"times";

	C_Index = 1;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 4;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(8000);
	m_nFrequency = 8000;
}
void ICM::on_C10nF_clicked() {
	_10nF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 10nF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_10nF<<"times";

	C_Index = 2;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 4;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(2400);
	m_nFrequency = 2400;
}
void ICM::on_C100nF_clicked() {
	_100nF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 100nF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_100nF<<"times";

	C_Index = 3;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 3;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(2400);
	m_nFrequency = 2400;
}
void ICM::on_C1uF_clicked() {
	_1uF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 1uF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_1uF<<"times";

	C_Index = 4;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 3;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(454);
	m_nFrequency = 454;
}
void ICM::on_C10uF_clicked() {
	_10uF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 10uF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_10uF<<"times";

	C_Index = 5;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 2;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(454);
	m_nFrequency = 454;
}
void ICM::on_C100uF_clicked() {
	_100uF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 100uF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_100uF<<"times";

	C_Index = 6;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 0;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(2200);
	m_nFrequency = 2200;
}
void ICM::on_C1mF_clicked() {
	_1mF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 1mF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_1mF<<"times";

	C_Index = 7;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 0;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(220);
	m_nFrequency = 220;
}
void ICM::on_C10mF_clicked() {
	_10mF++;
	milliSec = timer.elapsed();
	timer.restart();
	//	qDebug()<<"time elapsed to reach 10mF:"<<milliSec<<"milliSeconds"<<"and its iterated "<<_10mF<<"times";

	C_Index = 8;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 0;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(44);
	m_nFrequency = 44;
}

void ICM::on_R10E_clicked() {
	R_Index = 0;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 0;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(1000);
	m_nFrequency = 1000;
	IAppCard->writeRegister(0x1, 0x16);
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);
}
void ICM::on_R100E_clicked() {
	R_Index = 1;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 1;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	usleep(1000);
	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	usleep(1000);
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);

}
void ICM::on_R1KE_clicked() {
	R_Index = 2;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 2;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);

	IAppCard->writeRegister(0x1, 0x16); //changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);
}
void ICM::on_R10KE_clicked() {
	R_Index = 3;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 3;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);
}
void ICM::on_R100KE_clicked() {
	R_Index = 4;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 4;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x01 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);
}
void ICM::on_R1ME_clicked() {
	R_Index = 5;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 5;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x1, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_20E);
	//qDebug()<<"Range:"<<m_mapResistance.value(R_Index)<<"m_nICMMGR:"<<m_nICMMGR<<"Frequency:"<<m_nFrequency<<"Feedback:"<<m_lstRFResistance.value(R_Index);
}

void ICM::on_L30uH_clicked() {
	L_Index = 0;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 1;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(200000);
	m_nFrequency = 200000;//50000

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x3, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_100E);

}
void ICM::on_L300uH_clicked() {
	/*	L_Index = 1;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 0;//changed
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(7812);
	//	m_nFrequency=390625;
	m_nFrequency = 7812;

	IAppCard->writeRegister(1, 0x16);*/
	L_Index = 1;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 1;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(200000);
	m_nFrequency = 200000;//50000

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x3, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_100E);
}
void ICM::on_L3mH_clicked() {
	L_Index = 2;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 1;//changed
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(2000);
	//	m_nFrequency=390625;
	m_nFrequency = 2000;

	IAppCard->writeRegister(0x1, 0x16);
	IPsoc->srcImpedanceSelection(SRC_IMP_0E);//added for 0E Selection
}
void ICM::on_L30mH_clicked() {
	L_Index = 3;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 2;//changed
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(1200);
	m_nFrequency = 1200;

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x4, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_200E);
}
void ICM::on_L300mH_clicked() {
	L_Index = 4;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 2;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(120);
	m_nFrequency = 120; // Prev.Value : 1000
	//changed D.Elangovan 1-sep-2013 as per Anbu feedback
	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x4, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_200E);
}
void ICM::on_L3H_clicked() {
	L_Index = 5;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 3;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(120);
	m_nFrequency = 120;

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x6, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_1KE);
}
void ICM::on_L30H_clicked() {
	L_Index = 6;
	m_nICMMGR = m_nICMMGR & 0xFFF8;
	m_nICMMGR |= 3;
	IAppCard->writeRegister(m_nICMMGR, 0x3A);
	hwInterface->setFrequency(120);
	m_nFrequency = 120;

	IAppCard->writeRegister(0x1, 0x16);//changed to 0x1 on 12062014
	//	IBackPlane->writeBackPlaneRegister(0x6, 0x26);
	IPsoc->srcImpedanceSelection(SRC_IMP_1KE);
}

void ICM::on_settings_clicked() {
	obj
	= new Settings(IPsoc, hwInterface, IAppCard, m_objAD7190Component,
			this);
	//	obj->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	obj->setWindowFlags(Qt::Dialog);
	obj->setStyleSheet(
			"border:3px solid #45596f; border-style: groove; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 lightgray, stop:1 darkgray);");

	QPropertyAnimation *animation = new QPropertyAnimation(obj, "geometry");
	animation->setDuration(10000);
	animation->setStartValue(QRect(150, 350, 525, 50));
	animation->setEndValue(QRect(150, 115, 525, 404));
	animation->setEasingCurve(QEasingCurve::Linear);
	animation->setDuration(300);
	animation->start();

	obj->show();
}

void ICM::on_ONOFF_clicked() {
	//	if (ui->OnOffSlider->value() == 1) {
	if(runFlag==false){
                ui->ONOFF->setIcon(QIcon(QPixmap(":/Symbols/Button-Play-icon.png")));
		ui->holdCap->setVisible(false);
		//		ui->OnOffSlider->setValue(0);
		on_OnOffSlider_valueChanged(1);
		IGPIOPin->illuminateRunStopButton(0);
		dis->setValue("OL");
		ui->Unit->setText("");
		runFlag=true;
	}else if(runFlag==true){
		//	} else if (ui->OnOffSlider->value() == 0) {
		ui->ONOFF->setIcon(QIcon(QPixmap(":/Symbols/Button-Stop-icon.png")));
		ui->holdCap->setVisible(true);
		//		ui->OnOffSlider->setValue(1);
		on_OnOffSlider_valueChanged(0);
		IGPIOPin->illuminateRunStopButton(1);
		runFlag=false;
	}
	//	}

}
void ICM::CalibrateDisplay(QString comp) {
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	QString l_strFileName;
	l_strFileName = "ICMCalibration.xml";
	//		 qDebug()<<l_strFileName;

	QString m_strTypeIndex;
	if (rFlag==true)
		m_strTypeIndex = m_mapResistance.value(R_Index);
	if (lFlag==true)
		m_strTypeIndex = m_mapInductance.value(L_Index);
	if (cFlag==true)
		m_strTypeIndex = m_mapCapacitance.value(C_Index);

	QFile *xmlFile = new QFile(l_strFileName);
	if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
		qDebug() << "file read error";
	}
	QXmlStreamReader xml(xmlFile);
	short int index = 0;
	while (!xml.atEnd() && !xml.hasError()) {
		QXmlStreamReader::TokenType token = xml.readNext();
		QXmlStreamAttributes attributes = xml.attributes();

		QString l_strValue = attributes.value("Value").toString();

		if (token == QXmlStreamReader::StartDocument) {
			continue;
		}

		if (xml.isStartElement()) {
			if (xml.name() == comp && l_strValue == m_strTypeIndex) {
				calibedSlope
				= xml.attributes().value("Slope").toString().toDouble();
				calibedConstant
				= xml.attributes().value("Constant").toString().toDouble();
				index++;
			}
		}

	}
	if (xml.hasError())
		qDebug() << "xmlFile.xml Parse Error";
	xml.clear();
	xmlFile->close();

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//qDebug()<<"Calibrated "<<comp<<"Slope :"<<calibedSlope<<"Constant :"<<calibedConstant;
}

void ICM::GetDisplayResistance(double pResistanceValue, double pRangeValue) {
	pResistanceValue = pResistanceValue + m_dOffset;

	//qDebug()<<"Resistance:"<<pResistanceValue<<"Range:"<<pRangeValue;
	if (ui->calibrateDisplay->isChecked()) {
		CalibrateDisplay("ICM-R");

		double y, x, c, m;
		x = pResistanceValue;
		c = calibedConstant;
		m = calibedSlope;

		y = (x - c) / m;

		pResistanceValue = y;
		cbdR=y;
	}
	if (m_bNull == true) {
		pResistanceValue =pResistanceValue - m_dRNull;
	}
	m_nResistance_2 = pResistanceValue;

	if (autoFlag == true){
		AutoRange();
	}

	if (ui->checkBox->isChecked()) {
		if (ui->chkLoad->isChecked())
			Zdut = (((avgRValueSh[R_Index] - pResistanceValue) * (Measured
					- avgRValueOpen[R_Index])) / ((pResistanceValue
							- avgRValueOpen[R_Index]) * (avgRValueSh[R_Index]
							                                         - Measured))) * Actual;
		else
			Zdut = ((avgRValueSh[R_Index] - pResistanceValue)
					/ (pResistanceValue - avgRValueOpen[R_Index]))
					* (avgRValueOpen[R_Index]);

		pResistanceValue = Zdut;
	}
	//	QString l_strResistanceValue("");
	/*if(pResistanceValue <1000.0)
	 {
	 if(pRangeValue == 10.0 || pRangeValue==10000.0)
	 {
	 l_strResistanceValue = QString::number(pResistanceValue,'f',2) + ohms;
	 }
	 else if(pRangeValue == 100.0 || pRangeValue==100000.0)
	 {
	 l_strResistanceValue = QString::number(pResistanceValue,'f',1) + ohms;
	 }
	 else
	 {
	 l_strResistanceValue = QString::number(pResistanceValue,'f',3) + ohms;
	 }
	 }
	 else if(pResistanceValue >=1000.0 && pResistanceValue<1000000)
	 {
	 if(pRangeValue == 1000.0 || pRangeValue==1000000.0)
	 {
	 l_strResistanceValue = QString::number((pResistanceValue/1000.0),'f',3) + kiloOhms;
	 }
	 else if(pRangeValue == 10000.0 || pRangeValue==10.0)
	 {
	 l_strResistanceValue = QString::number((pResistanceValue/1000.0),'f',2) + kiloOhms;
	 }
	 else if(pRangeValue == 100000.0 || pRangeValue==100.0)
	 {
	 l_strResistanceValue = QString::number((pResistanceValue/1000.0),'f',1) + kiloOhms;
	 }
	 }
	 else if(pResistanceValue >= 1000000.0 )
	 {
	 l_strResistanceValue = QString::number((pResistanceValue/1000000.0),'f',3) + "M"+ohms;

	 }

	 ui->display->setText(l_strResistanceValue);*/
	dis->setValue(convertToUnits(pResistanceValue));
}

void ICM::GetDisplayCapcitance(double p_nData, short int p_nRange) {
	p_nData = p_nData + m_dOffset;

	//qDebug()<<fixed<<"Capacitance:"<<p_nData<<"Range:"<<p_nRange;

	if (ui->calibrateDisplay->isChecked()) {
		CalibrateDisplay("ICM-C");

		double y, x, c, m;
		x = p_nData;
		c = calibedConstant;
		m = calibedSlope;

		y = (x - c) / m;

		p_nData = y;
		cbdC=y;

	}
	if (m_bNull == true) {
		p_nData = p_nData - m_dCNull;
	}
	m_nCapacitance_2 = p_nData;

	if (autoFlag==true)
		AutoRange();

	if (ui->checkBox->isChecked()) {
		if (ui->chkLoad->isChecked())
			Zdut = (((avgCValueSh[C_Index] - p_nData) * (Measured
					- avgCValueOpen[C_Index])) / ((p_nData
							- avgCValueOpen[C_Index]) * (avgCValueSh[C_Index]
							                                         - Measured))) * Actual;
		else
			Zdut = ((avgCValueSh[C_Index] - p_nData) / (p_nData
					- avgCValueOpen[C_Index])) * (avgCValueOpen[C_Index]);
		p_nData = Zdut;
		//            qDebug()<<"Zdut Value :"<<Zdut;
	}
	QString l_sDisplayData("");

	if (p_nRange == 0) {
		p_nData = p_nData * 1000000000000.0;

		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
		//		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
		//		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
		//		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
		//		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
		//		qDebug()<<"Last 10 samples are constant";
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		l_sDisplayData = QString::number((p_nData), 'f', 2);// + picoFarad;
		ui->Unit->setText(picoFarad);
		dis->setValue(l_sDisplayData);

	} else if (p_nRange == 1) {
		if ((p_nData * 1000000000) >= 1) {
			p_nData = p_nData * 1000000000.0;
			l_sDisplayData = QString::number((p_nData), 'f', 2);// + nanoFarad;
			ui->Unit->setText(nanoFarad);
			dis->setValue(l_sDisplayData);
		} else if ((p_nData * 1000000000000) >= 1) {
			p_nData = p_nData * 1000000000000.0;
			l_sDisplayData = QString::number((p_nData), 'f', 2);// + picoFarad;
			ui->Unit->setText(picoFarad);
			dis->setValue(l_sDisplayData);
		}
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
		//		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
		//		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
		//		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
		//		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
		//		qDebug()<<"Last 10 samples are constant";
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


	} else if (p_nRange == 2) {
		p_nData = p_nData * 1000000000.0;
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
		//		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
		//		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
		//		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
		//		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
		//		qDebug()<<"Last 10 samples are constant";
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		l_sDisplayData = QString::number((p_nData), 'f', 2);// + nanoFarad;
		ui->Unit->setText(nanoFarad);
		dis->setValue(l_sDisplayData);
	}/*
	 else if (p_nRange == 3)
	 {
	 p_nData = p_nData * 1000000000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + nanoFarad;
	 }
	 else if (p_nRange == 4)
	 {
	 p_nData = p_nData * 1000000000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + nanoFarad;
	 }
	 else if (p_nRange == 5)
	 {
	 p_nData = p_nData * 1000000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + microFarad;
	 }
	 else if (p_nRange == 6)
	 {
	 p_nData = p_nData * 1000000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + microFarad;
	 }
	 else if (p_nRange == 7)
	 {
	 p_nData = p_nData * 1000000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + microFarad;
	 }
	 else if (p_nRange == 8)
	 {
	 p_nData = p_nData * 1000.0;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 //		double d = ( (double) ( (int) (p_nData * 100.0) ) ) / 100.0 ;
	 //		capSamples[capInc]=d; qDebug()<<"capSamples["<<capInc<<"]"<<capSamples[capInc];		if(capInc<9)capInc++;else capInc=0;
	 //		if(capSamples[0]==capSamples[1])if(capSamples[1]==capSamples[2])if(capSamples[2]==capSamples[3])
	 //		if(capSamples[3]==capSamples[4])if(capSamples[4]==capSamples[5])if(capSamples[5]==capSamples[6])
	 //		if(capSamples[6]==capSamples[7])if(capSamples[7]==capSamples[8])if(capSamples[8]==capSamples[9])
	 //		qDebug()<<"Last 10 samples are constant";
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	 l_sDisplayData = QString::number((p_nData),'f',2) + microFarad;
	 }*/
	else {
		l_sDisplayData = convertToUnits(p_nData);// + "F";
		//		ui->Unit->setText("F");
		dis->setValue(l_sDisplayData);
	}
}
void ICM::GetDisplayInductance(double p_nData, short int p_nRange) {
	p_nData = p_nData + m_dOffset;

	//qDebug()<<"Inductance:"<<p_nData<<"Range:"<<p_nRange;
	if (ui->calibrateDisplay->isChecked()) {
		CalibrateDisplay("ICM-L");

		double y, x, c, m;
		x = p_nData;
		c = calibedConstant;
		m = calibedSlope;

		y = (x - c) / m;

		p_nData = y;
		cbdL=y;

	}
	if (m_bNull == true) {
		p_nData = p_nData -m_dLNull;

	}
	m_nInductance_2 = p_nData;

	if (autoFlag == true)
		AutoRange();

	if (ui->checkBox->isChecked()) {
		if (ui->chkLoad->isChecked())
			Zdut = (((avgLValueSh[L_Index] - p_nData) * (Measured
					- avgLValueOpen[L_Index])) / ((p_nData
							- avgLValueOpen[L_Index]) * (avgLValueSh[L_Index]
							                                         - Measured))) * Actual;
		else
			Zdut = ((avgCValueSh[L_Index] - p_nData) / (p_nData
					- avgCValueOpen[L_Index])) * (avgCValueOpen[L_Index]);

		p_nData = Zdut;
	}
	QString l_sDisplayData("");

	if (p_nRange == 0) // 300nH - 3uH
	{
		p_nData = p_nData * 1000000;
		l_sDisplayData = QString::number((p_nData), 'f', 2) ;//+ microHenry;//"n"+Henry;			//?
		ui->Unit->setText(microHenry);
		dis->setValue(l_sDisplayData);
	} else if (p_nRange == 1) // 3uH - 30uH
	{
		p_nData = p_nData * 1000000;
		l_sDisplayData = QString::number((p_nData), 'f', 2);// + microHenry;
		ui->Unit->setText(microHenry);
		dis->setValue(l_sDisplayData);
	}
	/*
	 else if(p_nRange == 2) // 30uH - 300 uH
	 {
	 p_nData = p_nData * 1000000;
	 l_sDisplayData = QString::number((p_nData),'f',2) + microHenry;
	 }
	 else if(p_nRange == 3) // 300uH - 3mH
	 {
	 p_nData = p_nData * 1000000;
	 l_sDisplayData = QString::number((p_nData),'f',2) + microHenry;				//?
	 }
	 else if(p_nRange == 4) // 3mH - 30mH
	 {
	 p_nData = p_nData * 1000;
	 l_sDisplayData = QString::number((p_nData),'f',2) + milliHenry;
	 }
	 else if(p_nRange == 5) // 30mH - 300mH
	 {
	 p_nData = p_nData * 1000;
	 l_sDisplayData = QString::number((p_nData),'f',2) + milliHenry;
	 }
	 else if(p_nRange == 6) // 300mH - 3H
	 {
	 p_nData = p_nData * 1000;
	 l_sDisplayData = QString::number((p_nData),'f',2) + milliHenry;				//?
	 }
	 else if(p_nRange == 7) // 3H - 30H
	 {
	 l_sDisplayData = QString::number((p_nData),'f',2) + Henry;
	 }*/
	else {
		l_sDisplayData = convertToUnits(p_nData);// + "H";
		//		ui->Unit->setText("H");
		dis->setValue(l_sDisplayData);
	}
}

QString ICM::convertToUnits(double l_nvalue) {
	QString unit;
	double value;
	if (l_nvalue < 0) {
		//qDebug()<<"convertToUnits input:"<<l_nvalue;
		if (rFlag==true && (l_nvalue < -0.1)) //<-100mOhms
			return (QString("UL"));
		else if (lFlag==true && (l_nvalue < -0.000001)) //<-1uH
			return (QString("UL"));
		else if (cFlag==true && (l_nvalue < -0.00000000001)) //<-10pF
			return (QString("UL"));
		else
			value = l_nvalue * -1;
	} else
		value = l_nvalue;

	if (value >= 1000000 && value < 1000000000) {
		value = value / 1000000;
		unit = "M";
	} else if (value >= 1000 && value < 1000000) {
		value = value / 1000;
		unit = "K";
	} else if ((value >= 1 && value < 1000)) {
		value = value * 1;
		unit = "";
	} else if ((value * 1000) >= 1 && value < 1000) {
		value = value * 1000;
		unit = "m";
	} else if ((value * 1000000) >= 1 && value < 1000000) {
		value = value * 1000000;
		unit = QChar(0x00B5);
	} else if ((value * 1000000000) >= 1 && value < 1000000000) {
		value = value * 1000000000;
		unit = "n";
	} else if ((value * 1000000000000) >= 1 && value < 1000000000000) {
		value = value * 1000000000000;
		unit = "p";
	}
	if (l_nvalue >= 0){
		if(rFlag)ui->Unit->setText(unit+ohms);
		if(lFlag)ui->Unit->setText(unit+"H");
		if(cFlag)ui->Unit->setText(unit+"F");
		return (QString::number(value, 'f', 2));// + unit);
	}
	if (l_nvalue < 0){
		if(rFlag)ui->Unit->setText(unit+ohms);
		if(lFlag)ui->Unit->setText(unit+"H");
		if(cFlag)ui->Unit->setText(unit+"F");
		return (QString::number(value * -1, 'f', 2));// + unit);
	}

}

void ICM::on_AutoManual_clicked() {
	if (autoFlag==true) {
		ui->AutoManual->setIcon(QIcon(QPixmap(":/Symbols/hand-icon.png")));
		autoFlag=false;
		ui->autoManualCAp->setText("Manual");

	} else if (autoFlag==false) {
		ui->AutoManual->setIcon(QIcon(QPixmap(":/Symbols/Time-Machine-icon.png")));
		autoFlag=true;
		ui->autoManualCAp->setText("Auto");
	}
}

void ICM::on_ExitBut_clicked() {
	on_Exit_clicked();
}

void ICM::on_calibrate_clicked() {
	//	QWidget *newWidget=new QWidget(this);
	//	newWidget=GCALIB->getGCALIB();
	//	newWidget->setWindowTitle("General Calibration Panel");
	//	newWidget->show();

	objGCalib = new DACCalibration(this);

	//		objGCalib->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	//		objGCalib->setStyleSheet("border:3px solid #45596f; border-style: groove; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 lightgray, stop:1 darkgray);");

	QPropertyAnimation *animation = new QPropertyAnimation(objGCalib,
			"geometry");
	animation->setDuration(10000);
	animation->setStartValue(QRect(200, 350, 50, 50));
	animation->setEndValue(QRect(200, 200, 400, 341));
	animation->setEasingCurve(QEasingCurve::Linear);
	animation->setDuration(1000);
	animation->start();

	objGCalib->show();
}

void ICM::on_pushButton_clicked() {
	//    QWidget *newWidget=test->getPTAppBckPsoc();
	//                    newWidget->setWindowTitle("AppCard BackPanel PSoC Panel");
	//                    newWidget->show();

	if (m_bExternal == false) {
		//qDebug()<<"External Measurement";
		/*		IPsoc->resetRelays();
		usleep(1000);
		IPsoc->onBottomRelay(0x9);
		usleep(1000);
		IPsoc->onBottomRelay(0x15);
		usleep(1000);
		IPsoc->onBottomRelay(0x13);*///commnted on 12062014 by RRV
		//		IPsoc->resetRelays();
		IPsoc->switchFly();
		m_bExternal = true;
		ui->pushButton->setIcon(QIcon(QPixmap(":/Symbols/Letter-E-icon.png")));
                ui->frame_20->setStyleSheet("border:0px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;image: url(:/Symbols/25PinDIN.png)");
                ui->frame_20->setGeometry(121,20,110,50);
                ui->frame_23->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 5px; border-bottom-left-radius: 5px;");
                ui->frame_23->setGeometry(28,90,60,15);
		ui->label_35->setStyleSheet("color:black");
		ui->label_32->setStyleSheet("color:gray");
		ui->label_32->setText("SL/ICM/VI2");


	} else {
		//qDebug()<<"Internal Measurement";
		//		IPsoc->resetRelays();
		IPsoc->icmMeasurement();
		m_bExternal = false;
		ui->pushButton->setIcon(QIcon(QPixmap(":/Symbols/Letter-I-icon.png")));
		ui->frame_20->setStyleSheet("border:1px solid gray; border-top-right-radius: 5px; border-top-left-radius: 5px; border-bottom-right-radius: 10px; border-bottom-left-radius: 10px;");
		ui->frame_20->setGeometry(120,38,100,15);
		ui->frame_23->setStyleSheet("border:1px solid rgba(0,0,0,0);background-color:rgba(0,0,0,0);image: url(:/Symbols/icm.png);");
		ui->frame_23->setGeometry(20,83,90,27);
		ui->label_35->setStyleSheet("color:gray");
		ui->label_32->setStyleSheet("color:black");
		ui->label_32->setText("ICM INT");
	}

}

void ICM::on_NULL_2_clicked() {
	if (m_bNull == false) {
		if (lFlag==true) {
			if(ui->calibrateDisplay->isChecked())
				m_dLNull=cbdL;
			else
				m_dLNull = m_nInductance;
			qDebug()<<"Null the Inductance with "<<m_dLNull;
		}
		if (rFlag==true) {
			if(ui->calibrateDisplay->isChecked())
				m_dRNull=cbdR;
			else
				m_dRNull = m_nResistance;
			qDebug()<<"Null the Impedance with "<<m_dRNull;
		}
		if (cFlag==true) {
			if(ui->calibrateDisplay->isChecked())
				m_dCNull=cbdC;
			else
				m_dCNull = m_nCapacitance;
			qDebug()<<"Null the Capacitance with "<<m_dCNull;
		}
		m_bNull = true;
		ui->NULL_2->setIcon(QIcon(QPixmap(":/Symbols/Number-0-icon-green.png")));
	} else {
		m_bNull = false;
		ui->NULL_2->setIcon(QIcon(QPixmap(":/Symbols/Number-0-icon.png")));
	}
}

void ICM::on_external_clicked(bool checked) {
	if (checked) {
		//qDebug()<<"External Measurement";
		IPsoc->resetRelays();
		IPsoc->writeSerial(0x42);
		IPsoc->writeSerial(0x9);
		usleep(1000);
		IPsoc->writeSerial(0x42);
		IPsoc->writeSerial(0x15);
		usleep(1000);
		IPsoc->writeSerial(0x42);
		IPsoc->writeSerial(0x13);

	} else {
		//qDebug()<<"Internal Measurement";
		IPsoc->resetRelays();
		IPsoc->icmMeasurement();
	}
}

void ICM::on_pushButton_2_clicked() {

	QMessageBox *open = new QMessageBox(this);
	open->setWindowTitle("Open Calibration");
	open->setText("Open your probes and click OK");
	open->exec();

	double openCValues[50], openRValues[50], openLValues[50];

	if (rFlag==true) {
		for (int i = 0; i < 50; i++) {
			openRValues[i] = m_nResistance;
			//qDebug()<<"Open Value"<<i+1<<openRValues[i];
			usleep(1000);
		}
		for (int j = 0; j < 50; j++)
			avgRValueOpen[R_Index] = avgRValueOpen[R_Index] + openRValues[j];

		avgRValueOpen[R_Index] = avgRValueOpen[R_Index] / 50;

		//qDebug()<<"Averaged Resistance Open Value of"<<m_mapResistance.value(R_Index)<<":"<<avgRValueOpen[R_Index];
	}
	if (lFlag==true) {
		for (int i = 0; i < 50; i++) {
			openLValues[i] = m_nInductance;
			//qDebug()<<"Open Value"<<i+1<<openLValues[i];
			usleep(1000);
		}
		for (int j = 0; j < 50; j++)
			avgLValueOpen[L_Index] = avgLValueOpen[L_Index] + openLValues[j];

		avgLValueOpen[L_Index] = avgLValueOpen[L_Index] / 50;
		//qDebug()<<"Averaged Inductance Open Value of"<<m_mapInductance.value(L_Index)<<":"<<avgLValueOpen[L_Index];
	}
	if (cFlag==true) {
		for (int i = 0; i < 50; i++) {
			openCValues[i] = m_nCapacitance;
			//qDebug()<<"Open Value"<<i<<openCValues[i];
			usleep(1000);
		}
		for (int j = 0; j < 50; j++)
			avgCValueOpen[C_Index] = avgCValueOpen[C_Index] + openCValues[j];

		avgCValueOpen[C_Index] = avgCValueOpen[C_Index] / 50;

		//qDebug()<<"Averaged Capacitance Open Value of"<<m_mapInductance.value(C_Index)<<":"<<avgCValueOpen[C_Index];
	}

	//qDebug()<<"Open Calibration done";

	QMessageBox *shrt = new QMessageBox(this);
	shrt->setWindowTitle("Short Calibration");
	shrt->setText("Short your probes and click OK");
	shrt->exec();

	double shortCValues[50], shortRValues[50], shortLValues[50];

	if (rFlag==true) {
		for (int i = 0; i < 50; i++) {
			shortRValues[i] = m_nResistance;
			//qDebug()<<"Short Value"<<i<<shortRValues[i];
			usleep(10);
		}
		for (int j = 0; j < 50; j++)
			avgRValueSh[R_Index] = avgRValueSh[R_Index] + shortRValues[j];

		avgRValueSh[R_Index] = avgRValueSh[R_Index] / 50;
		//qDebug()<<"Averaged Resistance Short Value of"<<m_mapResistance.value(R_Index)<<":"<<avgRValueSh[R_Index];
	}
	if (lFlag==true) {
		for (int i = 0; i < 50; i++) {
			shortLValues[i] = m_nInductance;
			usleep(10);
		}
		for (int j = 0; j < 50; j++)
			avgLValueSh[L_Index] = avgLValueSh[L_Index] + shortLValues[j];

		avgLValueSh[L_Index] = avgLValueSh[L_Index] / 50;
		//qDebug()<<"Averaged Inductance Short Value of"<<m_mapInductance.value(L_Index)<<":"<<avgLValueSh[L_Index];
	}
	if (cFlag==true) {
		for (int i = 0; i < 50; i++) {
			shortCValues[i] = m_nCapacitance;
			//qDebug()<<"Short Value"<<i<<shortCValues[i];
			usleep(10);
		}
		for (int j = 0; j < 50; j++)
			avgCValueSh[C_Index] = avgCValueSh[C_Index] + shortCValues[j];

		avgCValueSh[C_Index] = avgCValueSh[C_Index] / 50;
		//qDebug()<<"Averaged Capacitance Short Value of"<<m_mapInductance.value(C_Index)<<":"<<avgCValueSh[C_Index];
	}
	//qDebug()<<"Short Calibration done";

}

void ICM::on_checkBox_clicked() {

}

void ICM::on_chkLoad_clicked() {
	if (rFlag==true) {
		//qDebug()<<"Range :"<<m_mapResistance[R_Index];
		//qDebug()<<"Zs  :"<<avgRValueSh[R_Index];
		//qDebug()<<"Zo  :"<<avgRValueOpen[R_Index];
		//qDebug()<<"Zxm :"<<m_nResistance;
		//qDebug()<<"Zsm :"<<Measured;
		//qDebug()<<"Zstd:"<<Actual;
		double Zdut2 = (((avgRValueSh[R_Index] - m_nResistance) * (Measured
				- avgRValueOpen[R_Index])) / ((m_nResistance
						- avgRValueOpen[R_Index]) * (avgRValueSh[R_Index] - Measured)))
						* Actual;
		//qDebug()<<"Zdut:"<<Zdut2;

	}
	if (lFlag==true) {
		//qDebug()<<"Range :"<<m_mapInductance[L_Index];
		//qDebug()<<"Zs  :"<<avgLValueSh[L_Index];
		//qDebug()<<"Zo  :"<<avgLValueOpen[L_Index];
		//qDebug()<<"Zxm :"<<m_nInductance;
		//qDebug()<<"Zsm :"<<Measured;
		//qDebug()<<"Zstd:"<<Actual;
		double Zdut2 = (((avgLValueSh[L_Index] - m_nInductance) * (Measured
				- avgLValueOpen[L_Index])) / ((m_nInductance
						- avgLValueOpen[L_Index]) * (avgLValueSh[L_Index] - Measured)))
						* Actual;
		//qDebug()<<"Zdut:"<<Zdut2;
	}
	if (cFlag==true) {
		//qDebug()<<"Range :"<<m_mapCapacitance[C_Index];
		//qDebug()<<"Zs  :"<<avgCValueSh[C_Index];
		//qDebug()<<"Zo  :"<<avgCValueOpen[C_Index];
		//qDebug()<<"Zxm :"<<m_nCapacitance;
		//qDebug()<<"Zsm :"<<Measured;
		//qDebug()<<"Zstd:"<<Actual;
		double Zdut2 = (((avgCValueSh[C_Index] - m_nCapacitance) * (Measured
				- avgCValueOpen[C_Index])) / ((m_nCapacitance
						- avgCValueOpen[C_Index]) * (avgCValueSh[C_Index] - Measured)))
						* Actual;
		//qDebug()<<"Zdut:"<<Zdut2;

	}

}

void ICM::on_printImage_clicked() {
	QPixmap Pix = QPixmap();
	Pix = QPixmap::grabWindow(this->winId());
	Pix.save("icm.jpg");
}

void ICM::on_hideSettings_clicked() {
	//	if (m_bToolboxFlag == false) {
	//		ToolBox(true);
	//		m_bToolboxFlag = true;
	//	} else {
	//		ToolBox(false);
	//		m_bToolboxFlag = false;
	//	}
}

void ICM::on_pushButton_3_clicked() {
	/*	QWidget *newWidget = test->getPTAppBckPsoc();
	newWidget->setWindowTitle("AppCard BackPanel PSoC Panel");
	newWidget->show();*/
}

void ICM::on_RacRdc_clicked() {
	unsigned short m_nR1RMSIN,m_nR2RMSIN;
	if (m_bRacRdc) {
		IAppCard->setSPIAppendBit(0xC000);
		IAppCard->writeRegister(0x1, 0x16); //Rs Bypassed
		IAppCard->writeRegister(0x02, 0x36);
		IAppCard->writeRegister(0x06, 0x38);
		IAppCard->setDDSWaveSelect(DC_SIGNAL);
		hwInterface->Init();

		//DGGSR,for SL offset disable+0.6Vpp
		IAppCard->writeRegister(0x0000,PT_APPCARD_MODULES::PT_DRRLY_APPCARD_DRGSR);
		//DRSER,Source,Rx1&2 connected to A.H(0,1,2,3,6&7)
		IAppCard->writeRegister(0x0007,PT_APPCARD_MODULES::PT_DRRLY_APPCARD_DRSER);
		//DSAR,Force V+Source Impedance enable
		IAppCard->writeRegister(0x0001,PT_APPCARD_MODULES::PT_DRRLY_APPCARD_DSAR);
		//RAMR,for RAM based drive mode
		IAppCard->writeRegister(0x0000,PT_APPCARD_MODULES::PT_SRAM_APPCARD_RAMR);
		//BTUR,to specify the LSW of basic time unit
		IAppCard->writeRegister(0x0063,PT_APPCARD_MODULES::PT_DRIVE_APPCARD_BTUR);
		//BDR,to specify time of per drive
		IAppCard->writeRegister(0x0009,	PT_APPCARD_MODULES::PT_DRIVE_APPCARD_BDR);
		//WDPR,to specify the drive period count
		IAppCard->writeRegister(0x0001,	PT_APPCARD_MODULES::PT_DRIVE_APPCARD_DPR);
		//DDSWSELR, for direct DC drive
		IAppCard->writeRegister(0x0001,PT_APPCARD_MODULES::PT_DDS_APPCARD_DDSWSELR);

		//Added on 14thAugust
		IAppCard->writeRegister(0x0000, 0x1C);
		IAppCard->writeRegister(0x0100, 0x1A);//Loop drive mode
		IAppCard->writeRegister(0x0001, 0x94);

		IAppCard->setSPIAppendBit(0x8000);
		hwInterface->initParallelDAC();
		IAppCard->setSPIAppendBit(0xC000);
		hwInterface->updateParallelDAC(-0.1);

		m_bRacRdc = false;
		ui->RacRdc->setIcon(QIcon(QPixmap(":/dc.png")));
		ui->ACDC->setIcon(QIcon(QPixmap(":/Symbols/Letter-dc-icon.png")));

		qDebug() << "DC Measurement";

		m_nR1RMSIN=IAppCard->readRegister(0x36);
		m_nR1RMSIN|=1<<2;
		IAppCard->writeRegister(m_nR1RMSIN,0x36);

		m_nR2RMSIN=IAppCard->readRegister(0x38);
		m_nR2RMSIN|=1<<3;
		IAppCard->writeRegister(m_nR2RMSIN,0x38);

	} else {
		IAppCard->setDDSWaveSelect(DDS);

		hwInterface->Init();
		hwInterface->setOffset(0);
		hwInterface->setPhase(0);
		IAppCard->setSPIAppendBit(0x8000);
		hwInterface->setAmplitude(0.1);
		hwInterface->SingleContinuous(CONTINUOUS);

		IAppCard->writeRegister(0x02, 0x36);
		IAppCard->writeRegister(0x06, 0x38);
		IAppCard->writeRegister(0x1, 0x16);
		IAppCard->writeRegister(0x7, 0x34);
		IAppCard->writeRegister(0, 0x3A);

		m_bRacRdc = true;
		ui->RacRdc->setIcon(QIcon(QPixmap(":/ac.png")));
		ui->ACDC->setIcon(QIcon(QPixmap(":/Symbols/Letter-ac-icon.png")));


		qDebug() << "AC Measurement";

		m_nR1RMSIN=IAppCard->readRegister(0x36);
		m_nR1RMSIN&= 0xFFFB;
		IAppCard->writeRegister(m_nR1RMSIN,0x36);

		m_nR2RMSIN=IAppCard->readRegister(0x38);
		m_nR2RMSIN&=0xFFF7;
		IAppCard->writeRegister(m_nR2RMSIN,0x38);
	}
	if(ui->R10E->isChecked())ui->R10E->animateClick(1);
	else if(ui->R100E->isChecked())ui->R100E->animateClick(1);
	else if(ui->R1KE->isChecked())ui->R1KE->animateClick(1);
	else if(ui->R10KE->isChecked())ui->R10KE->animateClick(1);
	else if(ui->R100KE->isChecked())ui->R100KE->animateClick(1);
	else if(ui->R1ME->isChecked())ui->R1ME->animateClick(1);

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ICM::on_exit_clicked()
{
	on_Exit_clicked();
}

void ICM::on_rBut_clicked()
{
	ui->selectFrame->setGeometry(701,50,10,60);
	ui->rBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}");
	ui->lBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;border-top:1px solid gray; border-top-right-radius: 0px; border-top-left-radius: 0px;}");
	ui->cBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px; border-top-left-radius: 0px;border-top:1px solid gray;border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;}");
	rFlag=true;lFlag=false;cFlag=false;
	on_R_clicked();
}

void ICM::on_lBut_clicked()
{
	ui->selectFrame->setGeometry(701,140,10,60);
	ui->rBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}");
	ui->lBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;border-top:1px solid gray; border-top-right-radius: 0px; border-top-left-radius: 0px;}");
	ui->cBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px; border-top-left-radius: 0px;border-top:1px solid gray;border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;}");
	rFlag=false;lFlag=true;cFlag=false;
	on_L_clicked();
}

void ICM::on_cBut_clicked()
{
	ui->selectFrame->setGeometry(701,230,10,60);
	ui->rBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); border-bottom-right-radius: 0px;border-bottom-left-radius: 0px;}");
	ui->lBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;border-top:1px solid gray; border-top-right-radius: 0px; border-top-left-radius: 0px;}");
	ui->cBox->setStyleSheet("QGroupBox{border:1px solid white; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);border-radius:10px;border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px; border-top-left-radius: 0px;border-top:1px solid gray;border-bottom-right-radius: 0px; border-bottom-left-radius: 0px;}");
	rFlag=false;lFlag=false;cFlag=true;
	on_C_clicked();
}

void ICM::on_ACDC_clicked()
{
	on_RacRdc_clicked();
}
