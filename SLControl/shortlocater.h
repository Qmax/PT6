/*Created by Ravivarman,Qmax
 * 11th Jan 2013
 */
#ifndef SHORTLOCATER_H
#define SHORTLOCATER_H

#include <QtGui/QWidget>
#include <QLabel>
#include <QDebug>
#include <QTimer>
#include <qmessagebox.h>
#include <phonon/Effect>
#include <unistd.h>
#include <math.h>
#include <qpluginloader.h>
#include "ui_shortlocater.h"
#include "ApplicationCardInterface.h"
#include "BackPlaneInterface.h"
#include "IPSOCCommunication.h"
#include "DMMLibInterface.h"
#include "PTGPIOEventInterfaces.h"
#include "PTEventInterfaces.h"
#include "GPIOInterfaces.h"
#include "PTAppBckPsocInterface.h"
#include "HACADCTestJigInterface.h"
#include "offset.h"
#include "interfaceHeader.h"
#include "InterfacePTLibrary.h"
#include "display.h"
#include "serialdevice.h"


const unsigned int guid = 0x534C4D;

//definitions
#define		GPIOINT		0x0100
#define		KNOBINT		0x0800
#define		GPIOKNOBINT	0x0900
#define		NOINT		0x0000

#define R200E 	1
#define SLR200E 9
#define R2E		7
#define R200mE	8

//enum DisplayResistance {R200E=1,SLR200E=9,R2E=7,R200ME=8};


const QEvent::Type GpioEvent = (QEvent::Type) 1234;//embedded probe
const QEvent::Type KnobEvent = (QEvent::Type) 3456;//magnetic knob
const QEvent::Type PTKeyEvent = (QEvent::Type)5678;//pykey event

class ShortLocater : public QWidget
{
    Q_OBJECT

public:
    //Variables
        QString rangeFlag;


    	int m_nGPIOCode,m_nPTKeyCode;
        double retval,retval2;
        int rangePrevValue,buzPrevValue,sliderValue,rangePrevOffset;
        QString ohms,micro;
        bool AutoFlag,BuzzerFlag,OffsetFlag,runFlag,holdFlag;
        double nullify;
    	short ResistancePrev,ResistanceCur,ResistanceNext;
        QTimer *m_nADCtimer;

    //Functions
    	void Initializations();
        void ToolBox(bool flag);
    	void customEvent(QEvent *eve);
    	void KeyFunction();
    	void ProbeFunction();
    	void changeByProbe(unsigned int);
    	bool CustomMessageBox();
        void Beep(double value);
        void checkProbeConnect();
        QString convertToUnits(double l_nvalue);

        double output;
        ADC ShortData;
        double r200EShortValue,r2EShortValue,r200mEShortValue;
        double r200EShortValue2,r2EShortValue2,r200mEShortValue2;
        void shortCalibration();
    //Constructor&Destructor
    	ShortLocater(QWidget *parent = 0);
        unsigned int getSLID() const{
            return guid;
        }
    	~ShortLocater();

    	DISPLAY *dis;

    	double retval3;
    	double m_dOutput[10];
    	int m_nAvgCount;
    	int movingAverage;
protected:

    	IntefaceBackPlane *IBackPlane;
    	IPSOCCOMMUNICATION *IPsoc;
    	IDMMLibInterface	*IDMMLib;
    	IApplicationCardInterface *IAppCard;
    	PTGPIOEventInterface *IGPIOEvent;
    	PTEventInterface *IPTKeyEvent;
    	InterfaceGPIOPins *IGPIOPin;

        IPTAppBckPsocInterface *test;
    	IHACADCTestJigInterface *HAADC;

        QMessageBox *msgBox;
        QAbstractButton *connectButton,*abortButton;
        bool msgBoxLive;
        bool showMessageBox(bool,bool,QString,QString,QString);
        bool toolboxFlag;

        offset *m_objoffset;

        double nullit;bool nullitFlag;
    	int avg,noOFsamples;
    	double avgRetval[100];
private:
    Ui::ShortLocaterClass ui;
public slots:
   	void Measure();
    void Configure(int);

private slots:
    void on_openShortEnable_clicked(bool checked);
    void on_External_clicked();
    void on_Internal_clicked();
    void on_pushButton_2_clicked();
    void on_HAADC_clicked();
    void on_haadcClose_clicked();
    void on_pushButton_clicked();
    void on_hold_clicked();
    void on_microOhms_clicked();
    void on_Null_clicked();
    void on_offset_clicked();
    void on_Auto_clicked();
    void on_buzzer_clicked();
    void on_exit_clicked();

    void on_r200mEBut_clicked();
    void on_r2EBut_clicked();
    void on_r200But_clicked();
    void on_ShortCalib_2_clicked();
    void on_ShortCalib_clicked();
    void on_pushButton_5_clicked();
//    void on_spinBox_3_valueChanged(int );
//    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_printImage_clicked();
//    void on_horizontalSlider_4_sliderMoved(int position);
//    void on_spinBox_2_valueChanged(int );
//    void on_spinBox_valueChanged(int );
    void startStop();
    void Exit();
};

#endif // SHORTLOCATER_H
