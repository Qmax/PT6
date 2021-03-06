/********************************************************************************
** Form generated from reading UI file 'icm.ui'
**
** Created: Mon Sep 1 17:12:16 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICM_H
#define UI_ICM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_ICM
{
public:
    QWidget *centralWidget;
    QGroupBox *displayBox;
    QLabel *display;
    QLabel *Unit;
    QLabel *holdCap;
    QLabel *rangeLabel;
    QLabel *label_39;
    QLabel *rangeCap;
    QLabel *autoManualCAp;
    QLabel *value_XLXC;
    QLabel *label_X;
    QLabel *label_LC;
    QGroupBox *Components;
    QGroupBox *ResistanceRanges;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *R10E;
    QRadioButton *R100E;
    QRadioButton *R1KE;
    QRadioButton *R10KE;
    QRadioButton *R100KE;
    QRadioButton *R1ME;
    QGroupBox *Inductorranges;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QRadioButton *L30uH;
    QRadioButton *L300uH;
    QRadioButton *L300mH;
    QRadioButton *L3H;
    QRadioButton *L3mH;
    QRadioButton *L30mH;
    QRadioButton *L30H;
    QGroupBox *CapacitanceRanges;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QRadioButton *C100pF;
    QRadioButton *C1nF;
    QRadioButton *C10nF;
    QRadioButton *C100nF;
    QRadioButton *C1uF;
    QRadioButton *C10uF;
    QRadioButton *C100uF;
    QRadioButton *C1mF;
    QRadioButton *C10mF;
    QGroupBox *functionsPanel;
    QPushButton *AutoManual;
    QPushButton *NULL_2;
    QPushButton *pushButton;
    QPushButton *settings;
    QPushButton *ONOFF;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *ACDC;
    QLabel *label_40;
    QGroupBox *debugPanel;
    QSpinBox *spinBox_2;
    QLabel *label_18;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *lblfrequency;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *RacRdc;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_15;
    QCheckBox *chkLoad;
    QLabel *label_14;
    QCheckBox *checkBox;
    QCheckBox *calibrateDisplay;
    QPushButton *calibrate;
    QLabel *noOFSamples;
    QFrame *selectFrame;
    QGroupBox *cBox;
    QPushButton *cBut;
    QLabel *label_21;
    QGroupBox *ExitBox;
    QPushButton *exit;
    QGroupBox *rBox;
    QPushButton *rBut;
    QLabel *label_19;
    QGroupBox *t2Box;
    QPushButton *t2But;
    QGroupBox *graphBox;
    QPushButton *graphBut;
    QGroupBox *lBox;
    QPushButton *lBut;
    QLabel *label_20;
    QFrame *plottingWindow;
    QCustomPlot *customPlot;
    QComboBox *sweep_interval_unit;
    QSpinBox *sweep_endfreq;
    QLabel *lbl_endfreq;
    QPushButton *sweep_capture;
    QLabel *lbl_startfreq;
    QSpinBox *sweep_startfreq;
    QComboBox *sweep_startfreq_unit;
    QComboBox *sweep_endfreq_unit;
    QSpinBox *sweep_interval;
    QLabel *lbl_interval;
    QFrame *frontPanel_ICM;
    QFrame *framePowerUSB;
    QFrame *fp_usbSocket;
    QFrame *fp_usbSymbol;
    QFrame *fp_powerButton;
    QLabel *fp_powerLabel;
    QFrame *analogHighway;
    QLabel *ah3_label;
    QLabel *ah1_label;
    QFrame *ah1_outer;
    QFrame *ah1_inner;
    QFrame *ah3_outer;
    QFrame *ah_inner;
    QLabel *ah_label;
    QLabel *ah0_label;
    QFrame *ah0_outer;
    QFrame *ah0_inner;
    QLabel *ah2_label;
    QFrame *ah2_outer;
    QFrame *ah2_inner;
    QFrame *fp_VI_ICM_SL;
    QFrame *fp_Guarding;
    QFrame *fp_VI2_EXT;
    QLabel *fp_VI1_ICM_SL_label;
    QLabel *fp_VI2_EXT_label;
    QFrame *fp_VI1_ICM_SL;
    QLabel *fp_ICM_Guard;
    QFrame *frame_15;
    QLabel *label_74;
    QLabel *label_75;
    QFrame *dso1_outer_9;
    QFrame *dso1_inner_6;
    QFrame *dso_outer_18;
    QFrame *dso_inner_6;
    QLabel *label_76;
    QLabel *label_77;
    QFrame *frame_40;
    QFrame *frame_41;
    QLabel *label_78;
    QFrame *frame_42;
    QFrame *frame_43;
    QFrame *frame_DMM;
    QLabel *fp_A_label;
    QFrame *fp_LO_inner;
    QFrame *fp_mA_inner;
    QFrame *fp_A_outer;
    QFrame *fp_A_inner;
    QFrame *fp_mA_outer;
    QLabel *fp_HI_label;
    QFrame *fp_LO_outer;
    QFrame *fp_HI_outer;
    QLabel *fp_LO_label;
    QFrame *fp_HI_inner;
    QLabel *fp_DMM_label;
    QLabel *fp_fuse_label;
    QFrame *fp_fuse;
    QLabel *fp_mA_label;
    QFrame *fp_REF;
    QLabel *fp_REF_label;
    QLabel *fp_GND_label;
    QFrame *fp_GND;

    void setupUi(QMainWindow *ICM)
    {
        if (ICM->objectName().isEmpty())
            ICM->setObjectName(QString::fromUtf8("ICM"));
        ICM->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(88, 88, 89, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ICM->setPalette(palette);
        ICM->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(ICM);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        displayBox = new QGroupBox(centralWidget);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));
        displayBox->setGeometry(QRect(10, 33, 693, 171));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        displayBox->setFont(font);
        displayBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"	border:2px solid white;\n"
" }\n"
"QTextEdit{\n"
"	background-color:black;\n"
"	border:1px solid black;\n"
"	border-radius:5px;\n"
"	color:yellow;\n"
"}\n"
"QLineEdit{\n"
"	background-color:black;\n"
"	border:1px solid black;\n"
"	border-radius:5px;\n"
"	color:yellow;\n"
"}\n"
"QLabel{\n"
"	background-color:black;\n"
"	color:yellow;\n"
"}"));
        display = new QLabel(displayBox);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(30, 11, 480, 131));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(72);
        font1.setBold(false);
        font1.setWeight(50);
        display->setFont(font1);
        display->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:black;\n"
"color:#fbec5d;\n"
"border-radius:10px;\n"
"margin:-1px;\n"
"}"));
        display->setFrameShape(QFrame::StyledPanel);
        display->setLineWidth(1);
        display->setTextFormat(Qt::PlainText);
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setMargin(1);
        Unit = new QLabel(displayBox);
        Unit->setObjectName(QString::fromUtf8("Unit"));
        Unit->setGeometry(QRect(500, 11, 160, 131));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(64);
        font2.setBold(false);
        font2.setWeight(50);
        Unit->setFont(font2);
        Unit->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:black;\n"
"color:#fbec5d;\n"
"border-radius:10px;\n"
"margin:-1px;\n"
"}"));
        Unit->setFrameShape(QFrame::StyledPanel);
        Unit->setLineWidth(1);
        Unit->setTextFormat(Qt::PlainText);
        Unit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Unit->setMargin(1);
        holdCap = new QLabel(displayBox);
        holdCap->setObjectName(QString::fromUtf8("holdCap"));
        holdCap->setGeometry(QRect(590, 15, 65, 17));
        QPalette palette1;
        QBrush brush2(QColor(251, 236, 93, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        holdCap->setPalette(palette1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        holdCap->setFont(font3);
        holdCap->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        rangeLabel = new QLabel(displayBox);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setGeometry(QRect(120, 140, 71, 17));
        QPalette palette2;
        QBrush brush4(QColor(255, 255, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        rangeLabel->setPalette(palette2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(14);
        rangeLabel->setFont(font4);
        label_39 = new QLabel(displayBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(40, 15, 70, 17));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_39->setPalette(palette3);
        label_39->setFont(font3);
        label_39->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        rangeCap = new QLabel(displayBox);
        rangeCap->setObjectName(QString::fromUtf8("rangeCap"));
        rangeCap->setGeometry(QRect(40, 140, 80, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        rangeCap->setPalette(palette4);
        rangeCap->setFont(font3);
        rangeCap->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        autoManualCAp = new QLabel(displayBox);
        autoManualCAp->setObjectName(QString::fromUtf8("autoManualCAp"));
        autoManualCAp->setGeometry(QRect(120, 15, 80, 17));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        autoManualCAp->setPalette(palette5);
        autoManualCAp->setFont(font4);
        autoManualCAp->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        value_XLXC = new QLabel(displayBox);
        value_XLXC->setObjectName(QString::fromUtf8("value_XLXC"));
        value_XLXC->setGeometry(QRect(532, 141, 120, 17));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        value_XLXC->setPalette(palette6);
        value_XLXC->setFont(font4);
        label_X = new QLabel(displayBox);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setGeometry(QRect(501, 140, 20, 17));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_X->setPalette(palette7);
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        label_X->setFont(font5);
        label_X->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        label_LC = new QLabel(displayBox);
        label_LC->setObjectName(QString::fromUtf8("label_LC"));
        label_LC->setGeometry(QRect(515, 142, 20, 17));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_LC->setPalette(palette8);
        label_LC->setFont(font3);
        label_LC->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        display->raise();
        Unit->raise();
        holdCap->raise();
        rangeLabel->raise();
        label_39->raise();
        rangeCap->raise();
        autoManualCAp->raise();
        label_X->raise();
        label_LC->raise();
        value_XLXC->raise();
        Components = new QGroupBox(centralWidget);
        Components->setObjectName(QString::fromUtf8("Components"));
        Components->setGeometry(QRect(10, 200, 693, 230));
        Components->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"     border: 2px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }"));
        ResistanceRanges = new QGroupBox(Components);
        ResistanceRanges->setObjectName(QString::fromUtf8("ResistanceRanges"));
        ResistanceRanges->setGeometry(QRect(30, 110, 630, 112));
        ResistanceRanges->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     background-color: rgba(0,0,0,0);\n"
"     border: 1px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
"	 font:bold 15px;	\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	     color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        gridLayoutWidget = new QWidget(ResistanceRanges);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(28, 26, 595, 82));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        R10E = new QRadioButton(gridLayoutWidget);
        R10E->setObjectName(QString::fromUtf8("R10E"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush5(QColor(116, 116, 116, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R10E->setPalette(palette9);
        R10E->setFont(font);
        R10E->setFocusPolicy(Qt::NoFocus);
        R10E->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));
        R10E->setChecked(false);

        gridLayout->addWidget(R10E, 1, 3, 1, 1);

        R100E = new QRadioButton(gridLayoutWidget);
        R100E->setObjectName(QString::fromUtf8("R100E"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R100E->setPalette(palette10);
        R100E->setFont(font);
        R100E->setFocusPolicy(Qt::NoFocus);
        R100E->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));
        R100E->setChecked(true);

        gridLayout->addWidget(R100E, 0, 0, 1, 1);

        R1KE = new QRadioButton(gridLayoutWidget);
        R1KE->setObjectName(QString::fromUtf8("R1KE"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R1KE->setPalette(palette11);
        R1KE->setFont(font);
        R1KE->setFocusPolicy(Qt::NoFocus);
        R1KE->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));

        gridLayout->addWidget(R1KE, 0, 1, 1, 1);

        R10KE = new QRadioButton(gridLayoutWidget);
        R10KE->setObjectName(QString::fromUtf8("R10KE"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R10KE->setPalette(palette12);
        R10KE->setFont(font);
        R10KE->setFocusPolicy(Qt::NoFocus);
        R10KE->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));

        gridLayout->addWidget(R10KE, 0, 3, 1, 1);

        R100KE = new QRadioButton(gridLayoutWidget);
        R100KE->setObjectName(QString::fromUtf8("R100KE"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R100KE->setPalette(palette13);
        R100KE->setFont(font);
        R100KE->setFocusPolicy(Qt::NoFocus);
        R100KE->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));

        gridLayout->addWidget(R100KE, 1, 0, 1, 1);

        R1ME = new QRadioButton(gridLayoutWidget);
        R1ME->setObjectName(QString::fromUtf8("R1ME"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        R1ME->setPalette(palette14);
        R1ME->setFont(font);
        R1ME->setFocusPolicy(Qt::NoFocus);
        R1ME->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#896e6e;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#896e6e;\n"
"     }"));

        gridLayout->addWidget(R1ME, 1, 1, 1, 1);

        Inductorranges = new QGroupBox(Components);
        Inductorranges->setObjectName(QString::fromUtf8("Inductorranges"));
        Inductorranges->setGeometry(QRect(30, 110, 630, 112));
        Inductorranges->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     background-color: rgba(0,0,0,0);\n"
"     border: 1px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
"	 font:bold 15px;	\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"    color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        gridLayoutWidget_2 = new QWidget(Inductorranges);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(32, 26, 591, 82));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        L30uH = new QRadioButton(gridLayoutWidget_2);
        L30uH->setObjectName(QString::fromUtf8("L30uH"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L30uH->setPalette(palette15);
        L30uH->setFont(font);
        L30uH->setFocusPolicy(Qt::NoFocus);
        L30uH->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));
        L30uH->setChecked(true);

        gridLayout_2->addWidget(L30uH, 0, 0, 1, 1);

        L300uH = new QRadioButton(gridLayoutWidget_2);
        L300uH->setObjectName(QString::fromUtf8("L300uH"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L300uH->setPalette(palette16);
        L300uH->setFont(font);
        L300uH->setFocusPolicy(Qt::NoFocus);
        L300uH->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L300uH, 0, 1, 1, 1);

        L300mH = new QRadioButton(gridLayoutWidget_2);
        L300mH->setObjectName(QString::fromUtf8("L300mH"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L300mH->setPalette(palette17);
        L300mH->setFont(font);
        L300mH->setFocusPolicy(Qt::NoFocus);
        L300mH->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L300mH, 1, 0, 1, 1);

        L3H = new QRadioButton(gridLayoutWidget_2);
        L3H->setObjectName(QString::fromUtf8("L3H"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L3H->setPalette(palette18);
        L3H->setFont(font);
        L3H->setFocusPolicy(Qt::NoFocus);
        L3H->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L3H, 1, 1, 1, 1);

        L3mH = new QRadioButton(gridLayoutWidget_2);
        L3mH->setObjectName(QString::fromUtf8("L3mH"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L3mH->setPalette(palette19);
        L3mH->setFont(font);
        L3mH->setFocusPolicy(Qt::NoFocus);
        L3mH->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L3mH, 0, 2, 1, 1);

        L30mH = new QRadioButton(gridLayoutWidget_2);
        L30mH->setObjectName(QString::fromUtf8("L30mH"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L30mH->setPalette(palette20);
        L30mH->setFont(font);
        L30mH->setFocusPolicy(Qt::NoFocus);
        L30mH->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L30mH, 0, 3, 1, 1);

        L30H = new QRadioButton(gridLayoutWidget_2);
        L30H->setObjectName(QString::fromUtf8("L30H"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        L30H->setPalette(palette21);
        L30H->setFont(font);
        L30H->setFocusPolicy(Qt::NoFocus);
        L30H->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#3a5976;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#3a5976;\n"
"     }"));

        gridLayout_2->addWidget(L30H, 1, 2, 1, 1);

        CapacitanceRanges = new QGroupBox(Components);
        CapacitanceRanges->setObjectName(QString::fromUtf8("CapacitanceRanges"));
        CapacitanceRanges->setGeometry(QRect(30, 110, 630, 112));
        CapacitanceRanges->setFont(font);
        CapacitanceRanges->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     background-color: rgba(0,0,0,0);\n"
"     border: 1px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
"	 font:bold 15px;	\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        gridLayoutWidget_3 = new QWidget(CapacitanceRanges);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 26, 594, 82));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        C100pF = new QRadioButton(gridLayoutWidget_3);
        C100pF->setObjectName(QString::fromUtf8("C100pF"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(C100pF->sizePolicy().hasHeightForWidth());
        C100pF->setSizePolicy(sizePolicy);
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C100pF->setPalette(palette22);
        C100pF->setFont(font);
        C100pF->setFocusPolicy(Qt::NoFocus);
        C100pF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));
        C100pF->setChecked(true);

        gridLayout_3->addWidget(C100pF, 0, 0, 1, 1);

        C1nF = new QRadioButton(gridLayoutWidget_3);
        C1nF->setObjectName(QString::fromUtf8("C1nF"));
        sizePolicy.setHeightForWidth(C1nF->sizePolicy().hasHeightForWidth());
        C1nF->setSizePolicy(sizePolicy);
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C1nF->setPalette(palette23);
        C1nF->setFont(font);
        C1nF->setFocusPolicy(Qt::NoFocus);
        C1nF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C1nF, 0, 1, 1, 1);

        C10nF = new QRadioButton(gridLayoutWidget_3);
        C10nF->setObjectName(QString::fromUtf8("C10nF"));
        sizePolicy.setHeightForWidth(C10nF->sizePolicy().hasHeightForWidth());
        C10nF->setSizePolicy(sizePolicy);
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C10nF->setPalette(palette24);
        C10nF->setFont(font);
        C10nF->setFocusPolicy(Qt::NoFocus);
        C10nF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C10nF, 0, 2, 1, 1);

        C100nF = new QRadioButton(gridLayoutWidget_3);
        C100nF->setObjectName(QString::fromUtf8("C100nF"));
        sizePolicy.setHeightForWidth(C100nF->sizePolicy().hasHeightForWidth());
        C100nF->setSizePolicy(sizePolicy);
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C100nF->setPalette(palette25);
        C100nF->setFont(font);
        C100nF->setFocusPolicy(Qt::NoFocus);
        C100nF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C100nF, 0, 3, 1, 1);

        C1uF = new QRadioButton(gridLayoutWidget_3);
        C1uF->setObjectName(QString::fromUtf8("C1uF"));
        sizePolicy.setHeightForWidth(C1uF->sizePolicy().hasHeightForWidth());
        C1uF->setSizePolicy(sizePolicy);
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C1uF->setPalette(palette26);
        C1uF->setFont(font);
        C1uF->setFocusPolicy(Qt::NoFocus);
        C1uF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C1uF, 0, 4, 1, 1);

        C10uF = new QRadioButton(gridLayoutWidget_3);
        C10uF->setObjectName(QString::fromUtf8("C10uF"));
        sizePolicy.setHeightForWidth(C10uF->sizePolicy().hasHeightForWidth());
        C10uF->setSizePolicy(sizePolicy);
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C10uF->setPalette(palette27);
        C10uF->setFont(font);
        C10uF->setFocusPolicy(Qt::NoFocus);
        C10uF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C10uF, 1, 0, 1, 1);

        C100uF = new QRadioButton(gridLayoutWidget_3);
        C100uF->setObjectName(QString::fromUtf8("C100uF"));
        sizePolicy.setHeightForWidth(C100uF->sizePolicy().hasHeightForWidth());
        C100uF->setSizePolicy(sizePolicy);
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C100uF->setPalette(palette28);
        C100uF->setFont(font);
        C100uF->setFocusPolicy(Qt::NoFocus);
        C100uF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C100uF, 1, 1, 1, 1);

        C1mF = new QRadioButton(gridLayoutWidget_3);
        C1mF->setObjectName(QString::fromUtf8("C1mF"));
        sizePolicy.setHeightForWidth(C1mF->sizePolicy().hasHeightForWidth());
        C1mF->setSizePolicy(sizePolicy);
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C1mF->setPalette(palette29);
        C1mF->setFont(font);
        C1mF->setFocusPolicy(Qt::NoFocus);
        C1mF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C1mF, 1, 2, 1, 1);

        C10mF = new QRadioButton(gridLayoutWidget_3);
        C10mF->setObjectName(QString::fromUtf8("C10mF"));
        sizePolicy.setHeightForWidth(C10mF->sizePolicy().hasHeightForWidth());
        C10mF->setSizePolicy(sizePolicy);
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        C10mF->setPalette(palette30);
        C10mF->setFont(font);
        C10mF->setFocusPolicy(Qt::NoFocus);
        C10mF->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"font:bold 25px;\n"
"}\n"
" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
"   border: 2px solid black;\n"
"	 border-radius:12px;\n"
"\n"
" }\n"
" QRadioButton::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QRadioButton::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QRadioButton::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));

        gridLayout_3->addWidget(C10mF, 1, 3, 1, 1);

        functionsPanel = new QGroupBox(Components);
        functionsPanel->setObjectName(QString::fromUtf8("functionsPanel"));
        functionsPanel->setGeometry(QRect(30, 14, 630, 106));
        functionsPanel->setFont(font);
        functionsPanel->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     background-color: rgba(0,0,0,0);\n"
"     border: 1px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
"	 font:bold 15px;	\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        AutoManual = new QPushButton(functionsPanel);
        AutoManual->setObjectName(QString::fromUtf8("AutoManual"));
        AutoManual->setGeometry(QRect(244, 19, 55, 55));
        AutoManual->setFont(font);
        AutoManual->setFocusPolicy(Qt::NoFocus);
        AutoManual->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Symbols/Time-Machine-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AutoManual->setIcon(icon);
        AutoManual->setIconSize(QSize(48, 48));
        NULL_2 = new QPushButton(functionsPanel);
        NULL_2->setObjectName(QString::fromUtf8("NULL_2"));
        NULL_2->setGeometry(QRect(437, 19, 55, 55));
        NULL_2->setFont(font);
        NULL_2->setFocusPolicy(Qt::NoFocus);
        NULL_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Symbols/Number-0-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        NULL_2->setIcon(icon1);
        NULL_2->setIconSize(QSize(48, 48));
        pushButton = new QPushButton(functionsPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(141, 19, 55, 55));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Symbols/Letter-I-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(48, 48));
        settings = new QPushButton(functionsPanel);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(38, 19, 55, 55));
        settings->setFont(font);
        settings->setFocusPolicy(Qt::NoFocus);
        settings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Symbols/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings->setIcon(icon3);
        settings->setIconSize(QSize(48, 48));
        ONOFF = new QPushButton(functionsPanel);
        ONOFF->setObjectName(QString::fromUtf8("ONOFF"));
        ONOFF->setGeometry(QRect(344, 19, 55, 55));
        ONOFF->setFont(font);
        ONOFF->setFocusPolicy(Qt::NoFocus);
        ONOFF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Symbols/Button-Play-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ONOFF->setIcon(icon4);
        ONOFF->setIconSize(QSize(48, 48));
        label_22 = new QLabel(functionsPanel);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 72, 70, 17));
        QFont font6;
        font6.setFamily(QString::fromUtf8("DejaVu Sans"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        label_22->setFont(font6);
        label_22->setStyleSheet(QString::fromUtf8("color:white;"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(functionsPanel);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(140, 73, 60, 17));
        label_23->setFont(font6);
        label_23->setStyleSheet(QString::fromUtf8("color:white;"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(functionsPanel);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(220, 73, 110, 17));
        label_24->setFont(font6);
        label_24->setStyleSheet(QString::fromUtf8("color:white;"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(functionsPanel);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(330, 72, 90, 17));
        label_25->setFont(font6);
        label_25->setStyleSheet(QString::fromUtf8("color:white;"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(functionsPanel);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(440, 73, 50, 17));
        label_26->setFont(font6);
        label_26->setStyleSheet(QString::fromUtf8("color:white;"));
        label_26->setAlignment(Qt::AlignCenter);
        ACDC = new QPushButton(functionsPanel);
        ACDC->setObjectName(QString::fromUtf8("ACDC"));
        ACDC->setGeometry(QRect(530, 20, 55, 55));
        ACDC->setFont(font);
        ACDC->setFocusPolicy(Qt::NoFocus);
        ACDC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Symbols/Letter-ac-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ACDC->setIcon(icon5);
        ACDC->setIconSize(QSize(48, 48));
        label_40 = new QLabel(functionsPanel);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(533, 74, 50, 17));
        label_40->setFont(font6);
        label_40->setStyleSheet(QString::fromUtf8("color:white;"));
        label_40->setAlignment(Qt::AlignCenter);
        functionsPanel->raise();
        ResistanceRanges->raise();
        Inductorranges->raise();
        CapacitanceRanges->raise();
        debugPanel = new QGroupBox(centralWidget);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(10, 434, 692, 160));
        QFont font7;
        font7.setBold(true);
        font7.setWeight(75);
        debugPanel->setFont(font7);
        debugPanel->setStyleSheet(QString::fromUtf8("QGroupBox{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 border: 2px solid black;\n"
" }"));
        spinBox_2 = new QSpinBox(debugPanel);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(10, 27, 121, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("DejaVu Sans"));
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setWeight(75);
        spinBox_2->setFont(font8);
        spinBox_2->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }\n"
"QSpinBox{\n"
"border:1px solid black;\n"
"\n"
"}"));
        spinBox_2->setMinimum(1);
        spinBox_2->setValue(1);
        label_18 = new QLabel(debugPanel);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 10, 111, 17));
        label_4 = new QLabel(debugPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(438, 40, 81, 17));
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans"));
        font9.setPointSize(12);
        label_4->setFont(font9);
        label_6 = new QLabel(debugPanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 40, 60, 17));
        label_6->setFont(font9);
        label_2 = new QLabel(debugPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(318, 40, 81, 17));
        label_2->setFont(font9);
        label_5 = new QLabel(debugPanel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(525, 40, 21, 17));
        label_5->setFont(font9);
        label = new QLabel(debugPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 40, 44, 17));
        label->setFont(font9);
        lblfrequency = new QLabel(debugPanel);
        lblfrequency->setObjectName(QString::fromUtf8("lblfrequency"));
        lblfrequency->setGeometry(QRect(218, 40, 60, 17));
        lblfrequency->setFont(font9);
        label_3 = new QLabel(debugPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 40, 44, 17));
        label_3->setFont(font9);
        label_13 = new QLabel(debugPanel);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(168, 40, 50, 17));
        label_13->setFont(font9);
        label_11 = new QLabel(debugPanel);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 80, 130, 17));
        label_11->setFont(font9);
        label_10 = new QLabel(debugPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(266, 80, 21, 17));
        label_10->setFont(font9);
        label_8 = new QLabel(debugPanel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(168, 80, 16, 17));
        label_8->setFont(font9);
        label_12 = new QLabel(debugPanel);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(376, 80, 21, 17));
        label_12->setFont(font9);
        label_7 = new QLabel(debugPanel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(182, 80, 81, 17));
        label_7->setFont(font9);
        label_9 = new QLabel(debugPanel);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(279, 80, 90, 17));
        label_9->setFont(font9);
        pushButton_3 = new QPushButton(debugPanel);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 100, 61, 61));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the default button prominent */\n"
"     }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Symbols/Control-Panel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(55, 50));
        pushButton_2 = new QPushButton(debugPanel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 60, 60, 41));
        RacRdc = new QPushButton(debugPanel);
        RacRdc->setObjectName(QString::fromUtf8("RacRdc"));
        RacRdc->setGeometry(QRect(640, 10, 50, 50));
        RacRdc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"    "));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ac.png"), QSize(), QIcon::Normal, QIcon::Off);
        RacRdc->setIcon(icon7);
        RacRdc->setIconSize(QSize(48, 48));
        label_16 = new QLabel(debugPanel);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(160, 120, 50, 17));
        label_17 = new QLabel(debugPanel);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 120, 71, 17));
        label_15 = new QLabel(debugPanel);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(430, 120, 71, 17));
        chkLoad = new QCheckBox(debugPanel);
        chkLoad->setObjectName(QString::fromUtf8("chkLoad"));
        chkLoad->setGeometry(QRect(470, 110, 30, 40));
        chkLoad->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color:green;\n"
"font:bold 17px;\n"
"}\n"
" QCheckBox::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
" }"));
        label_14 = new QLabel(debugPanel);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(500, 120, 71, 17));
        checkBox = new QCheckBox(debugPanel);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(550, 110, 30, 40));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color:green;\n"
"font:bold 17px;\n"
"}\n"
" QCheckBox::indicator {\n"
"     width: 25px;\n"
"     height:25px;\n"
" }"));
        calibrateDisplay = new QCheckBox(debugPanel);
        calibrateDisplay->setObjectName(QString::fromUtf8("calibrateDisplay"));
        calibrateDisplay->setGeometry(QRect(10, 70, 130, 31));
        calibrateDisplay->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"font: 14px;\n"
"color:black\n"
"}\n"
" QCheckBox::indicator {\n"
"     width: 20px;\n"
"     height:20px;\n"
"   border: 2px solid black;\n"
"	 border-radius:10;\n"
"\n"
" }\n"
" QCheckBox::indicator::unchecked {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QCheckBox::indicator:unchecked:hover {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QCheckBox::indicator:unchecked:pressed {\n"
"		background-color:white;\n"
"     }\n"
"\n"
"     QCheckBox::indicator::checked {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QCheckBox::indicator:checked:hover {\n"
"		background-color:#f2a400;\n"
"     }\n"
"\n"
"     QCheckBox::indicator:checked:pressed {\n"
"		background-color:#f2a400;\n"
"     }"));
        calibrate = new QPushButton(debugPanel);
        calibrate->setObjectName(QString::fromUtf8("calibrate"));
        calibrate->setGeometry(QRect(10, 100, 61, 61));
        QFont font10;
        font10.setFamily(QString::fromUtf8("DejaVu Sans"));
        font10.setPointSize(18);
        calibrate->setFont(font10);
        calibrate->setFocusPolicy(Qt::NoFocus);
        calibrate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the default button prominent */\n"
"     }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Symbols/Letter-C-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        calibrate->setIcon(icon8);
        calibrate->setIconSize(QSize(48, 48));
        noOFSamples = new QLabel(debugPanel);
        noOFSamples->setObjectName(QString::fromUtf8("noOFSamples"));
        noOFSamples->setGeometry(QRect(120, 10, 67, 17));
        selectFrame = new QFrame(centralWidget);
        selectFrame->setObjectName(QString::fromUtf8("selectFrame"));
        selectFrame->setGeometry(QRect(701, 54, 10, 60));
        selectFrame->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-top:1px solid white;\n"
"border-bottom:1px solid white;"));
        selectFrame->setFrameShape(QFrame::Box);
        selectFrame->setFrameShadow(QFrame::Raised);
        cBox = new QGroupBox(centralWidget);
        cBox->setObjectName(QString::fromUtf8("cBox"));
        cBox->setGeometry(QRect(710, 232, 80, 100));
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Sans"));
        cBox->setFont(font11);
        cBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        cBut = new QPushButton(cBox);
        cBut->setObjectName(QString::fromUtf8("cBut"));
        cBut->setGeometry(QRect(8, 20, 64, 64));
        QFont font12;
        font12.setPointSize(8);
        cBut->setFont(font12);
        cBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/C1.png"), QSize(), QIcon::Normal, QIcon::Off);
        cBut->setIcon(icon9);
        cBut->setIconSize(QSize(60, 60));
        label_21 = new QLabel(cBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(45, 60, 20, 20));
        label_21->setFont(font8);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ExitBox = new QGroupBox(centralWidget);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 532, 80, 61));
        ExitBox->setFont(font11);
        ExitBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
"}\n"
""));
        exit = new QPushButton(ExitBox);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(5, 0, 60, 70));
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;\n"
"	\n"
"	image: url(:/logout-icon.png);\n"
"}\n"
""));
        exit->setIconSize(QSize(70, 70));
        rBox = new QGroupBox(centralWidget);
        rBox->setObjectName(QString::fromUtf8("rBox"));
        rBox->setGeometry(QRect(710, 33, 80, 100));
        rBox->setFont(font11);
        rBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; \n"
"/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-radius:10px;\n"
"border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde); \n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
""));
        rBut = new QPushButton(rBox);
        rBut->setObjectName(QString::fromUtf8("rBut"));
        rBut->setGeometry(QRect(8, 20, 64, 64));
        rBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/R1.png"), QSize(), QIcon::Normal, QIcon::Off);
        rBut->setIcon(icon10);
        rBut->setIconSize(QSize(60, 60));
        label_19 = new QLabel(rBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(45, 60, 20, 20));
        label_19->setFont(font8);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t2Box = new QGroupBox(centralWidget);
        t2Box->setObjectName(QString::fromUtf8("t2Box"));
        t2Box->setGeometry(QRect(710, 432, 80, 100));
        t2Box->setFont(font11);
        t2Box->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        t2But = new QPushButton(t2Box);
        t2But->setObjectName(QString::fromUtf8("t2But"));
        t2But->setGeometry(QRect(8, 20, 64, 64));
        t2But->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        t2But->setIconSize(QSize(55, 55));
        graphBox = new QGroupBox(centralWidget);
        graphBox->setObjectName(QString::fromUtf8("graphBox"));
        graphBox->setGeometry(QRect(710, 332, 80, 100));
        graphBox->setFont(font11);
        graphBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        graphBut = new QPushButton(graphBox);
        graphBut->setObjectName(QString::fromUtf8("graphBut"));
        graphBut->setGeometry(QRect(8, 20, 64, 64));
        graphBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        graphBut->setIcon(icon11);
        graphBut->setIconSize(QSize(80, 90));
        lBox = new QGroupBox(centralWidget);
        lBox->setObjectName(QString::fromUtf8("lBox"));
        lBox->setGeometry(QRect(710, 132, 80, 100));
        lBox->setFont(font11);
        lBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        lBut = new QPushButton(lBox);
        lBut->setObjectName(QString::fromUtf8("lBut"));
        lBut->setGeometry(QRect(8, 20, 64, 64));
        lBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/L1.png"), QSize(), QIcon::Normal, QIcon::Off);
        lBut->setIcon(icon12);
        lBut->setIconSize(QSize(60, 60));
        label_20 = new QLabel(lBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(45, 60, 20, 20));
        label_20->setFont(font8);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        plottingWindow = new QFrame(centralWidget);
        plottingWindow->setObjectName(QString::fromUtf8("plottingWindow"));
        plottingWindow->setGeometry(QRect(10, 434, 693, 160));
        plottingWindow->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        plottingWindow->setFrameShape(QFrame::StyledPanel);
        plottingWindow->setFrameShadow(QFrame::Raised);
        customPlot = new QCustomPlot(plottingWindow);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(2, 2, 690, 128));
        sweep_interval_unit = new QComboBox(plottingWindow);
        sweep_interval_unit->setObjectName(QString::fromUtf8("sweep_interval_unit"));
        sweep_interval_unit->setGeometry(QRect(565, 131, 45, 29));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sweep_interval_unit->sizePolicy().hasHeightForWidth());
        sweep_interval_unit->setSizePolicy(sizePolicy1);
        sweep_interval_unit->setStyleSheet(QString::fromUtf8("max-width:45px;"));
        sweep_endfreq = new QSpinBox(plottingWindow);
        sweep_endfreq->setObjectName(QString::fromUtf8("sweep_endfreq"));
        sweep_endfreq->setGeometry(QRect(286, 132, 90, 27));
        sweep_endfreq->setStyleSheet(QString::fromUtf8("QSpinBox{max-width:90px;}\n"
"QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
"QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        sweep_endfreq->setMaximum(999);
        lbl_endfreq = new QLabel(plottingWindow);
        lbl_endfreq->setObjectName(QString::fromUtf8("lbl_endfreq"));
        lbl_endfreq->setGeometry(QRect(213, 130, 70, 29));
        lbl_endfreq->setStyleSheet(QString::fromUtf8("max-width:70px;"));
        sweep_capture = new QPushButton(plottingWindow);
        sweep_capture->setObjectName(QString::fromUtf8("sweep_capture"));
        sweep_capture->setGeometry(QRect(610, 132, 80, 27));
        sweep_capture->setStyleSheet(QString::fromUtf8("max-width:80px;"));
        lbl_startfreq = new QLabel(plottingWindow);
        lbl_startfreq->setObjectName(QString::fromUtf8("lbl_startfreq"));
        lbl_startfreq->setGeometry(QRect(0, 131, 72, 29));
        lbl_startfreq->setStyleSheet(QString::fromUtf8("max-width:70px;"));
        sweep_startfreq = new QSpinBox(plottingWindow);
        sweep_startfreq->setObjectName(QString::fromUtf8("sweep_startfreq"));
        sweep_startfreq->setGeometry(QRect(77, 132, 90, 27));
        sweep_startfreq->setStyleSheet(QString::fromUtf8("QSpinBox{max-width:90px;}\n"
"QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
"QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        sweep_startfreq->setMaximum(999);
        sweep_startfreq_unit = new QComboBox(plottingWindow);
        sweep_startfreq_unit->setObjectName(QString::fromUtf8("sweep_startfreq_unit"));
        sweep_startfreq_unit->setGeometry(QRect(167, 131, 45, 29));
        sizePolicy1.setHeightForWidth(sweep_startfreq_unit->sizePolicy().hasHeightForWidth());
        sweep_startfreq_unit->setSizePolicy(sizePolicy1);
        sweep_startfreq_unit->setStyleSheet(QString::fromUtf8("max-width:45px;"));
        sweep_endfreq_unit = new QComboBox(plottingWindow);
        sweep_endfreq_unit->setObjectName(QString::fromUtf8("sweep_endfreq_unit"));
        sweep_endfreq_unit->setGeometry(QRect(375, 131, 45, 29));
        sizePolicy1.setHeightForWidth(sweep_endfreq_unit->sizePolicy().hasHeightForWidth());
        sweep_endfreq_unit->setSizePolicy(sizePolicy1);
        sweep_endfreq_unit->setStyleSheet(QString::fromUtf8("max-width:45px;"));
        sweep_interval = new QSpinBox(plottingWindow);
        sweep_interval->setObjectName(QString::fromUtf8("sweep_interval"));
        sweep_interval->setGeometry(QRect(478, 132, 90, 27));
        sweep_interval->setStyleSheet(QString::fromUtf8("QSpinBox{max-width:90px;}\n"
"QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
"QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        sweep_interval->setMaximum(999);
        lbl_interval = new QLabel(plottingWindow);
        lbl_interval->setObjectName(QString::fromUtf8("lbl_interval"));
        lbl_interval->setGeometry(QRect(420, 131, 62, 29));
        lbl_interval->setStyleSheet(QString::fromUtf8("max-width:60px;"));
        frontPanel_ICM = new QFrame(centralWidget);
        frontPanel_ICM->setObjectName(QString::fromUtf8("frontPanel_ICM"));
        frontPanel_ICM->setGeometry(QRect(10, 434, 693, 160));
        frontPanel_ICM->setStyleSheet(QString::fromUtf8("/*QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame {\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 1 #3a5976, stop: 0 #000000);\n"
"     border: 2px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 0ex; /* leave space at the top for the title */\n"
" }\n"
""));
        frontPanel_ICM->setFrameShape(QFrame::StyledPanel);
        frontPanel_ICM->setFrameShadow(QFrame::Raised);
        framePowerUSB = new QFrame(frontPanel_ICM);
        framePowerUSB->setObjectName(QString::fromUtf8("framePowerUSB"));
        framePowerUSB->setGeometry(QRect(5, 6, 47, 150));
        framePowerUSB->setStyleSheet(QString::fromUtf8("/*QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}\n"
"\n"
""));
        framePowerUSB->setFrameShape(QFrame::StyledPanel);
        framePowerUSB->setFrameShadow(QFrame::Raised);
        fp_usbSocket = new QFrame(framePowerUSB);
        fp_usbSocket->setObjectName(QString::fromUtf8("fp_usbSocket"));
        fp_usbSocket->setGeometry(QRect(2, 96, 43, 23));
        fp_usbSocket->setStyleSheet(QString::fromUtf8("border:1px rgba(0,0,0,0);border-radius:7px;\n"
"background-color: rgb(0, 0, 0,0);\n"
"image: url(:/fp_images/usb.png);"));
        fp_usbSocket->setFrameShape(QFrame::StyledPanel);
        fp_usbSocket->setFrameShadow(QFrame::Raised);
        fp_usbSymbol = new QFrame(framePowerUSB);
        fp_usbSymbol->setObjectName(QString::fromUtf8("fp_usbSymbol"));
        fp_usbSymbol->setGeometry(QRect(5, 120, 38, 19));
        fp_usbSymbol->setStyleSheet(QString::fromUtf8("border:1px rgba(0,0,0,0);border-radius:5px;\n"
"background-color: rgb(0, 0, 0,0);\n"
"image: url(:/fp_images/usb_symbol.png);"));
        fp_usbSymbol->setFrameShape(QFrame::StyledPanel);
        fp_usbSymbol->setFrameShadow(QFrame::Raised);
        fp_powerButton = new QFrame(framePowerUSB);
        fp_powerButton->setObjectName(QString::fromUtf8("fp_powerButton"));
        fp_powerButton->setGeometry(QRect(4, 26, 38, 38));
        fp_powerButton->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:5px;\n"
"image: url(:/fp_images/power.png);"));
        fp_powerButton->setFrameShape(QFrame::StyledPanel);
        fp_powerButton->setFrameShadow(QFrame::Raised);
        fp_powerLabel = new QLabel(framePowerUSB);
        fp_powerLabel->setObjectName(QString::fromUtf8("fp_powerLabel"));
        fp_powerLabel->setGeometry(QRect(-3, 66, 50, 17));
        QFont font13;
        font13.setFamily(QString::fromUtf8("DejaVu Sans"));
        font13.setPointSize(9);
        font13.setBold(false);
        font13.setWeight(50);
        fp_powerLabel->setFont(font13);
        fp_powerLabel->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        analogHighway = new QFrame(frontPanel_ICM);
        analogHighway->setObjectName(QString::fromUtf8("analogHighway"));
        analogHighway->setGeometry(QRect(54, 6, 300, 72));
        analogHighway->setStyleSheet(QString::fromUtf8("/*QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}\n"
"\n"
""));
        analogHighway->setFrameShape(QFrame::StyledPanel);
        analogHighway->setFrameShadow(QFrame::Raised);
        ah3_label = new QLabel(analogHighway);
        ah3_label->setObjectName(QString::fromUtf8("ah3_label"));
        ah3_label->setGeometry(QRect(100, 11, 38, 17));
        ah3_label->setFont(font13);
        ah3_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        ah1_label = new QLabel(analogHighway);
        ah1_label->setObjectName(QString::fromUtf8("ah1_label"));
        ah1_label->setGeometry(QRect(26, 11, 38, 17));
        ah1_label->setFont(font13);
        ah1_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        ah1_outer = new QFrame(analogHighway);
        ah1_outer->setObjectName(QString::fromUtf8("ah1_outer"));
        ah1_outer->setGeometry(QRect(22, 26, 41, 41));
        ah1_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        ah1_outer->setFrameShape(QFrame::StyledPanel);
        ah1_outer->setFrameShadow(QFrame::Raised);
        ah1_inner = new QFrame(ah1_outer);
        ah1_inner->setObjectName(QString::fromUtf8("ah1_inner"));
        ah1_inner->setGeometry(QRect(15, 15, 10, 10));
        ah1_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        ah1_inner->setFrameShape(QFrame::StyledPanel);
        ah1_inner->setFrameShadow(QFrame::Raised);
        ah3_outer = new QFrame(analogHighway);
        ah3_outer->setObjectName(QString::fromUtf8("ah3_outer"));
        ah3_outer->setGeometry(QRect(96, 26, 41, 41));
        ah3_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        ah3_outer->setFrameShape(QFrame::StyledPanel);
        ah3_outer->setFrameShadow(QFrame::Raised);
        ah_inner = new QFrame(ah3_outer);
        ah_inner->setObjectName(QString::fromUtf8("ah_inner"));
        ah_inner->setGeometry(QRect(15, 15, 10, 10));
        ah_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        ah_inner->setFrameShape(QFrame::StyledPanel);
        ah_inner->setFrameShadow(QFrame::Raised);
        ah_label = new QLabel(analogHighway);
        ah_label->setObjectName(QString::fromUtf8("ah_label"));
        ah_label->setGeometry(QRect(7, 0, 287, 16));
        QFont font14;
        font14.setFamily(QString::fromUtf8("DejaVu Sans"));
        font14.setBold(true);
        font14.setWeight(75);
        ah_label->setFont(font14);
        ah_label->setStyleSheet(QString::fromUtf8("/*background-color:blue;\n"
"color: rgb(0, 85, 255);\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;*/\n"
"color: rgb(0, 85, 255);"));
        ah_label->setAlignment(Qt::AlignCenter);
        ah0_label = new QLabel(analogHighway);
        ah0_label->setObjectName(QString::fromUtf8("ah0_label"));
        ah0_label->setGeometry(QRect(240, 11, 43, 17));
        ah0_label->setFont(font13);
        ah0_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);\n"
"background-color: rgb(0, 0, 0,0);"));
        ah0_outer = new QFrame(analogHighway);
        ah0_outer->setObjectName(QString::fromUtf8("ah0_outer"));
        ah0_outer->setGeometry(QRect(237, 26, 41, 41));
        ah0_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        ah0_outer->setFrameShape(QFrame::StyledPanel);
        ah0_outer->setFrameShadow(QFrame::Raised);
        ah0_inner = new QFrame(ah0_outer);
        ah0_inner->setObjectName(QString::fromUtf8("ah0_inner"));
        ah0_inner->setGeometry(QRect(16, 15, 10, 10));
        ah0_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        ah0_inner->setFrameShape(QFrame::StyledPanel);
        ah0_inner->setFrameShadow(QFrame::Raised);
        ah2_label = new QLabel(analogHighway);
        ah2_label->setObjectName(QString::fromUtf8("ah2_label"));
        ah2_label->setGeometry(QRect(170, 11, 35, 17));
        ah2_label->setFont(font13);
        ah2_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        ah2_outer = new QFrame(analogHighway);
        ah2_outer->setObjectName(QString::fromUtf8("ah2_outer"));
        ah2_outer->setGeometry(QRect(167, 26, 41, 41));
        ah2_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        ah2_outer->setFrameShape(QFrame::StyledPanel);
        ah2_outer->setFrameShadow(QFrame::Raised);
        ah2_inner = new QFrame(ah2_outer);
        ah2_inner->setObjectName(QString::fromUtf8("ah2_inner"));
        ah2_inner->setGeometry(QRect(16, 15, 10, 10));
        ah2_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        ah2_inner->setFrameShape(QFrame::StyledPanel);
        ah2_inner->setFrameShadow(QFrame::Raised);
        fp_VI_ICM_SL = new QFrame(frontPanel_ICM);
        fp_VI_ICM_SL->setObjectName(QString::fromUtf8("fp_VI_ICM_SL"));
        fp_VI_ICM_SL->setGeometry(QRect(54, 84, 300, 72));
        fp_VI_ICM_SL->setStyleSheet(QString::fromUtf8("/*QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}\n"
"\n"
""));
        fp_VI_ICM_SL->setFrameShape(QFrame::StyledPanel);
        fp_VI_ICM_SL->setFrameShadow(QFrame::Raised);
        fp_Guarding = new QFrame(fp_VI_ICM_SL);
        fp_Guarding->setObjectName(QString::fromUtf8("fp_Guarding"));
        fp_Guarding->setGeometry(QRect(195, 26, 80, 30));
        fp_Guarding->setStyleSheet(QString::fromUtf8("border:1px rgba(0,0,0,0);\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;\n"
"image: url(:/Symbols/15PinDIN.png);"));
        fp_Guarding->setFrameShape(QFrame::StyledPanel);
        fp_Guarding->setFrameShadow(QFrame::Raised);
        fp_VI2_EXT = new QFrame(fp_VI_ICM_SL);
        fp_VI2_EXT->setObjectName(QString::fromUtf8("fp_VI2_EXT"));
        fp_VI2_EXT->setGeometry(QRect(110, 20, 41, 41));
        fp_VI2_EXT->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        fp_VI2_EXT->setFrameShape(QFrame::StyledPanel);
        fp_VI2_EXT->setFrameShadow(QFrame::Raised);
        fp_VI1_ICM_SL_label = new QLabel(fp_VI_ICM_SL);
        fp_VI1_ICM_SL_label->setObjectName(QString::fromUtf8("fp_VI1_ICM_SL_label"));
        fp_VI1_ICM_SL_label->setGeometry(QRect(11, 1, 74, 17));
        fp_VI1_ICM_SL_label->setFont(font13);
        fp_VI1_ICM_SL_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_VI2_EXT_label = new QLabel(fp_VI_ICM_SL);
        fp_VI2_EXT_label->setObjectName(QString::fromUtf8("fp_VI2_EXT_label"));
        fp_VI2_EXT_label->setGeometry(QRect(106, 1, 60, 17));
        fp_VI2_EXT_label->setFont(font13);
        fp_VI2_EXT_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_VI1_ICM_SL = new QFrame(fp_VI_ICM_SL);
        fp_VI1_ICM_SL->setObjectName(QString::fromUtf8("fp_VI1_ICM_SL"));
        fp_VI1_ICM_SL->setGeometry(QRect(24, 20, 53, 49));
        fp_VI1_ICM_SL->setStyleSheet(QString::fromUtf8("border:1px rgba(0,0,0,0);border-radius:20px;\n"
"image: url(:/fp_images/VI_SL_ICM.png);"));
        fp_VI1_ICM_SL->setFrameShape(QFrame::StyledPanel);
        fp_VI1_ICM_SL->setFrameShadow(QFrame::Raised);
        fp_ICM_Guard = new QLabel(fp_VI_ICM_SL);
        fp_ICM_Guard->setObjectName(QString::fromUtf8("fp_ICM_Guard"));
        fp_ICM_Guard->setGeometry(QRect(196, 1, 75, 17));
        fp_ICM_Guard->setFont(font13);
        fp_ICM_Guard->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        frame_15 = new QFrame(frontPanel_ICM);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(355, 6, 300, 72));
        frame_15->setStyleSheet(QString::fromUtf8("/*QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}\n"
"\n"
""));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        label_74 = new QLabel(frame_15);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(100, 12, 38, 17));
        label_74->setFont(font13);
        label_74->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        label_75 = new QLabel(frame_15);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(26, 12, 38, 17));
        label_75->setFont(font13);
        label_75->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        dso1_outer_9 = new QFrame(frame_15);
        dso1_outer_9->setObjectName(QString::fromUtf8("dso1_outer_9"));
        dso1_outer_9->setGeometry(QRect(22, 27, 41, 41));
        dso1_outer_9->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso1_outer_9->setFrameShape(QFrame::StyledPanel);
        dso1_outer_9->setFrameShadow(QFrame::Raised);
        dso1_inner_6 = new QFrame(dso1_outer_9);
        dso1_inner_6->setObjectName(QString::fromUtf8("dso1_inner_6"));
        dso1_inner_6->setGeometry(QRect(15, 15, 10, 10));
        dso1_inner_6->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso1_inner_6->setFrameShape(QFrame::StyledPanel);
        dso1_inner_6->setFrameShadow(QFrame::Raised);
        dso_outer_18 = new QFrame(frame_15);
        dso_outer_18->setObjectName(QString::fromUtf8("dso_outer_18"));
        dso_outer_18->setGeometry(QRect(96, 27, 41, 41));
        dso_outer_18->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso_outer_18->setFrameShape(QFrame::StyledPanel);
        dso_outer_18->setFrameShadow(QFrame::Raised);
        dso_inner_6 = new QFrame(dso_outer_18);
        dso_inner_6->setObjectName(QString::fromUtf8("dso_inner_6"));
        dso_inner_6->setGeometry(QRect(15, 15, 10, 10));
        dso_inner_6->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso_inner_6->setFrameShape(QFrame::StyledPanel);
        dso_inner_6->setFrameShadow(QFrame::Raised);
        label_76 = new QLabel(frame_15);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(7, 1, 287, 16));
        label_76->setFont(font14);
        label_76->setStyleSheet(QString::fromUtf8("/*background-color:blue;\n"
"color: rgb(0, 85, 255);\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;*/\n"
"color: rgb(0, 85, 255);"));
        label_76->setAlignment(Qt::AlignCenter);
        label_77 = new QLabel(frame_15);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(241, 12, 43, 17));
        label_77->setFont(font13);
        label_77->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        frame_40 = new QFrame(frame_15);
        frame_40->setObjectName(QString::fromUtf8("frame_40"));
        frame_40->setGeometry(QRect(237, 27, 41, 41));
        frame_40->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_40->setFrameShape(QFrame::StyledPanel);
        frame_40->setFrameShadow(QFrame::Raised);
        frame_41 = new QFrame(frame_40);
        frame_41->setObjectName(QString::fromUtf8("frame_41"));
        frame_41->setGeometry(QRect(16, 15, 10, 10));
        frame_41->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_41->setFrameShape(QFrame::StyledPanel);
        frame_41->setFrameShadow(QFrame::Raised);
        label_78 = new QLabel(frame_15);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(171, 12, 35, 17));
        label_78->setFont(font13);
        label_78->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        frame_42 = new QFrame(frame_15);
        frame_42->setObjectName(QString::fromUtf8("frame_42"));
        frame_42->setGeometry(QRect(167, 27, 41, 41));
        frame_42->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_42->setFrameShape(QFrame::StyledPanel);
        frame_42->setFrameShadow(QFrame::Raised);
        frame_43 = new QFrame(frame_42);
        frame_43->setObjectName(QString::fromUtf8("frame_43"));
        frame_43->setGeometry(QRect(16, 15, 10, 10));
        frame_43->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_43->setFrameShape(QFrame::StyledPanel);
        frame_43->setFrameShadow(QFrame::Raised);
        frame_DMM = new QFrame(frontPanel_ICM);
        frame_DMM->setObjectName(QString::fromUtf8("frame_DMM"));
        frame_DMM->setGeometry(QRect(355, 84, 300, 72));
        frame_DMM->setStyleSheet(QString::fromUtf8("/*QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}\n"
"\n"
""));
        frame_DMM->setFrameShape(QFrame::StyledPanel);
        frame_DMM->setFrameShadow(QFrame::Raised);
        fp_A_label = new QLabel(frame_DMM);
        fp_A_label->setObjectName(QString::fromUtf8("fp_A_label"));
        fp_A_label->setGeometry(QRect(247, 14, 20, 12));
        fp_A_label->setFont(font13);
        fp_A_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_LO_inner = new QFrame(frame_DMM);
        fp_LO_inner->setObjectName(QString::fromUtf8("fp_LO_inner"));
        fp_LO_inner->setGeometry(QRect(80, 32, 31, 31));
        fp_LO_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        fp_LO_inner->setFrameShape(QFrame::StyledPanel);
        fp_LO_inner->setFrameShadow(QFrame::Raised);
        fp_mA_inner = new QFrame(frame_DMM);
        fp_mA_inner->setObjectName(QString::fromUtf8("fp_mA_inner"));
        fp_mA_inner->setGeometry(QRect(130, 32, 31, 31));
        fp_mA_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
"\n"
""));
        fp_mA_inner->setFrameShape(QFrame::StyledPanel);
        fp_mA_inner->setFrameShadow(QFrame::Raised);
        fp_A_outer = new QFrame(frame_DMM);
        fp_A_outer->setObjectName(QString::fromUtf8("fp_A_outer"));
        fp_A_outer->setGeometry(QRect(235, 27, 41, 41));
        fp_A_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        fp_A_outer->setFrameShape(QFrame::StyledPanel);
        fp_A_outer->setFrameShadow(QFrame::Raised);
        fp_A_inner = new QFrame(frame_DMM);
        fp_A_inner->setObjectName(QString::fromUtf8("fp_A_inner"));
        fp_A_inner->setGeometry(QRect(240, 32, 31, 31));
        fp_A_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        fp_A_inner->setFrameShape(QFrame::StyledPanel);
        fp_A_inner->setFrameShadow(QFrame::Raised);
        fp_mA_outer = new QFrame(frame_DMM);
        fp_mA_outer->setObjectName(QString::fromUtf8("fp_mA_outer"));
        fp_mA_outer->setGeometry(QRect(125, 27, 41, 41));
        fp_mA_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        fp_mA_outer->setFrameShape(QFrame::StyledPanel);
        fp_mA_outer->setFrameShadow(QFrame::Raised);
        fp_HI_label = new QLabel(frame_DMM);
        fp_HI_label->setObjectName(QString::fromUtf8("fp_HI_label"));
        fp_HI_label->setGeometry(QRect(37, 14, 20, 12));
        fp_HI_label->setFont(font13);
        fp_HI_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_HI_label->setAlignment(Qt::AlignCenter);
        fp_LO_outer = new QFrame(frame_DMM);
        fp_LO_outer->setObjectName(QString::fromUtf8("fp_LO_outer"));
        fp_LO_outer->setGeometry(QRect(75, 27, 41, 41));
        fp_LO_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        fp_LO_outer->setFrameShape(QFrame::StyledPanel);
        fp_LO_outer->setFrameShadow(QFrame::Raised);
        fp_HI_outer = new QFrame(frame_DMM);
        fp_HI_outer->setObjectName(QString::fromUtf8("fp_HI_outer"));
        fp_HI_outer->setGeometry(QRect(25, 27, 41, 41));
        fp_HI_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        fp_HI_outer->setFrameShape(QFrame::StyledPanel);
        fp_HI_outer->setFrameShadow(QFrame::Raised);
        fp_LO_label = new QLabel(frame_DMM);
        fp_LO_label->setObjectName(QString::fromUtf8("fp_LO_label"));
        fp_LO_label->setGeometry(QRect(85, 14, 22, 12));
        fp_LO_label->setFont(font13);
        fp_LO_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_HI_inner = new QFrame(frame_DMM);
        fp_HI_inner->setObjectName(QString::fromUtf8("fp_HI_inner"));
        fp_HI_inner->setGeometry(QRect(30, 32, 31, 31));
        fp_HI_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        fp_HI_inner->setFrameShape(QFrame::StyledPanel);
        fp_HI_inner->setFrameShadow(QFrame::Raised);
        fp_DMM_label = new QLabel(frame_DMM);
        fp_DMM_label->setObjectName(QString::fromUtf8("fp_DMM_label"));
        fp_DMM_label->setGeometry(QRect(6, 0, 287, 16));
        fp_DMM_label->setFont(font14);
        fp_DMM_label->setStyleSheet(QString::fromUtf8("/*background-color:blue;\n"
"color: rgb(0, 85, 255);\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;*/\n"
"color: rgb(0, 85, 255);"));
        fp_DMM_label->setAlignment(Qt::AlignCenter);
        fp_fuse_label = new QLabel(frame_DMM);
        fp_fuse_label->setObjectName(QString::fromUtf8("fp_fuse_label"));
        fp_fuse_label->setGeometry(QRect(178, 14, 50, 12));
        fp_fuse_label->setFont(font13);
        fp_fuse_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_fuse = new QFrame(frame_DMM);
        fp_fuse->setObjectName(QString::fromUtf8("fp_fuse"));
        fp_fuse->setGeometry(QRect(172, 23, 50, 47));
        fp_fuse->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"image: url(:/fp_images/fuse.png);\n"
"border:1px solid rgba(0,0,0,0);\n"
""));
        fp_fuse->setFrameShape(QFrame::StyledPanel);
        fp_fuse->setFrameShadow(QFrame::Raised);
        fp_mA_label = new QLabel(frame_DMM);
        fp_mA_label->setObjectName(QString::fromUtf8("fp_mA_label"));
        fp_mA_label->setGeometry(QRect(133, 15, 35, 12));
        fp_mA_label->setFont(font13);
        fp_mA_label->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        fp_A_label->raise();
        fp_A_outer->raise();
        fp_A_inner->raise();
        fp_mA_outer->raise();
        fp_HI_label->raise();
        fp_LO_outer->raise();
        fp_HI_outer->raise();
        fp_LO_label->raise();
        fp_HI_inner->raise();
        fp_DMM_label->raise();
        fp_fuse_label->raise();
        fp_fuse->raise();
        fp_mA_label->raise();
        fp_mA_inner->raise();
        fp_LO_inner->raise();
        fp_REF = new QFrame(frontPanel_ICM);
        fp_REF->setObjectName(QString::fromUtf8("fp_REF"));
        fp_REF->setGeometry(QRect(657, 21, 31, 31));
        fp_REF->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1px rgba(0,0,0,0); \n"
"border-radius:12px;\n"
"image: url(:/fp_images/ref.png);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}"));
        fp_REF->setFrameShape(QFrame::StyledPanel);
        fp_REF->setFrameShadow(QFrame::Raised);
        fp_REF_label = new QLabel(frontPanel_ICM);
        fp_REF_label->setObjectName(QString::fromUtf8("fp_REF_label"));
        fp_REF_label->setGeometry(QRect(657, 51, 32, 17));
        fp_REF_label->setFont(font13);
        fp_REF_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color:rgb(0, 0, 0,0);"));
        fp_GND_label = new QLabel(frontPanel_ICM);
        fp_GND_label->setObjectName(QString::fromUtf8("fp_GND_label"));
        fp_GND_label->setGeometry(QRect(653, 131, 35, 17));
        fp_GND_label->setFont(font13);
        fp_GND_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color:rgb(0, 0, 0,0);"));
        fp_GND = new QFrame(frontPanel_ICM);
        fp_GND->setObjectName(QString::fromUtf8("fp_GND"));
        fp_GND->setGeometry(QRect(654, 96, 38, 31));
        fp_GND->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1px rgba(0,0,0,0); \n"
"border-radius:13px;\n"
"background-color: rgb(0, 0, 0,0);\n"
"	image: url(:/fp_images/gnd.png);\n"
"}"));
        fp_GND->setFrameShape(QFrame::StyledPanel);
        fp_GND->setFrameShadow(QFrame::Raised);
        ICM->setCentralWidget(centralWidget);
        plottingWindow->raise();
        displayBox->raise();
        Components->raise();
        debugPanel->raise();
        cBox->raise();
        ExitBox->raise();
        rBox->raise();
        t2Box->raise();
        graphBox->raise();
        lBox->raise();
        frontPanel_ICM->raise();
        selectFrame->raise();

        retranslateUi(ICM);

        QMetaObject::connectSlotsByName(ICM);
    } // setupUi

    void retranslateUi(QMainWindow *ICM)
    {
        ICM->setWindowTitle(QApplication::translate("ICM", "ICM", 0, QApplication::UnicodeUTF8));
        displayBox->setTitle(QString());
        display->setText(QString());
        Unit->setText(QString());
        holdCap->setText(QApplication::translate("ICM", "HOLD", 0, QApplication::UnicodeUTF8));
        rangeLabel->setText(QApplication::translate("ICM", "5E", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ICM", "MODE:", 0, QApplication::UnicodeUTF8));
        rangeCap->setText(QApplication::translate("ICM", "RANGE:", 0, QApplication::UnicodeUTF8));
        autoManualCAp->setText(QApplication::translate("ICM", "Auto", 0, QApplication::UnicodeUTF8));
        value_XLXC->setText(QString());
        label_X->setText(QApplication::translate("ICM", "X", 0, QApplication::UnicodeUTF8));
        label_LC->setText(QApplication::translate("ICM", "L:", 0, QApplication::UnicodeUTF8));
        Components->setTitle(QString());
        ResistanceRanges->setTitle(QApplication::translate("ICM", "RANGES", 0, QApplication::UnicodeUTF8));
        R10E->setText(QApplication::translate("ICM", "5E", 0, QApplication::UnicodeUTF8));
        R100E->setText(QApplication::translate("ICM", "300E", 0, QApplication::UnicodeUTF8));
        R1KE->setText(QApplication::translate("ICM", "3KE", 0, QApplication::UnicodeUTF8));
        R10KE->setText(QApplication::translate("ICM", "30KE", 0, QApplication::UnicodeUTF8));
        R100KE->setText(QApplication::translate("ICM", "300KE", 0, QApplication::UnicodeUTF8));
        R1ME->setText(QApplication::translate("ICM", "1ME", 0, QApplication::UnicodeUTF8));
        Inductorranges->setTitle(QApplication::translate("ICM", "RANGES", 0, QApplication::UnicodeUTF8));
        L30uH->setText(QApplication::translate("ICM", "30uH", 0, QApplication::UnicodeUTF8));
        L300uH->setText(QApplication::translate("ICM", "300uH", 0, QApplication::UnicodeUTF8));
        L300mH->setText(QApplication::translate("ICM", "300mH", 0, QApplication::UnicodeUTF8));
        L3H->setText(QApplication::translate("ICM", "3H", 0, QApplication::UnicodeUTF8));
        L3mH->setText(QApplication::translate("ICM", "3mH", 0, QApplication::UnicodeUTF8));
        L30mH->setText(QApplication::translate("ICM", "30mH", 0, QApplication::UnicodeUTF8));
        L30H->setText(QApplication::translate("ICM", "30H", 0, QApplication::UnicodeUTF8));
        CapacitanceRanges->setTitle(QApplication::translate("ICM", "RANGES", 0, QApplication::UnicodeUTF8));
        C100pF->setText(QApplication::translate("ICM", "100pF", 0, QApplication::UnicodeUTF8));
        C1nF->setText(QApplication::translate("ICM", "1nF", 0, QApplication::UnicodeUTF8));
        C10nF->setText(QApplication::translate("ICM", "10nF", 0, QApplication::UnicodeUTF8));
        C100nF->setText(QApplication::translate("ICM", "100nF", 0, QApplication::UnicodeUTF8));
        C1uF->setText(QApplication::translate("ICM", "1uF", 0, QApplication::UnicodeUTF8));
        C10uF->setText(QApplication::translate("ICM", "10uF", 0, QApplication::UnicodeUTF8));
        C100uF->setText(QApplication::translate("ICM", "100uF", 0, QApplication::UnicodeUTF8));
        C1mF->setText(QApplication::translate("ICM", "1mF", 0, QApplication::UnicodeUTF8));
        C10mF->setText(QApplication::translate("ICM", "10mF", 0, QApplication::UnicodeUTF8));
        functionsPanel->setTitle(QApplication::translate("ICM", "FUNCTIONS", 0, QApplication::UnicodeUTF8));
        AutoManual->setText(QString());
        NULL_2->setText(QString());
        pushButton->setText(QString());
        settings->setText(QString());
        ONOFF->setText(QString());
        label_22->setText(QApplication::translate("ICM", "SETTINGS", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ICM", "INT/EXT", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ICM", "AUTO/MAN", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ICM", "HOLD", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ICM", "REL", 0, QApplication::UnicodeUTF8));
        ACDC->setText(QString());
        label_40->setText(QApplication::translate("ICM", "AC/DC", 0, QApplication::UnicodeUTF8));
        debugPanel->setTitle(QApplication::translate("ICM", "DEBUG PANEL", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ICM", "No of Samples", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_6->setText(QString());
        label_2->setText(QString());
        label_5->setText(QApplication::translate("ICM", "Rf:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ICM", "ADC1:", 0, QApplication::UnicodeUTF8));
        lblfrequency->setText(QString());
        label_3->setText(QApplication::translate("ICM", "ADC2:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ICM", "Freq:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_10->setText(QApplication::translate("ICM", "L:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ICM", "R:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ICM", "C:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_9->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QApplication::translate("ICM", "Open \n"
" Short", 0, QApplication::UnicodeUTF8));
        RacRdc->setText(QString());
        label_16->setText(QApplication::translate("ICM", "Actual", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ICM", "Measured", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ICM", "Load", 0, QApplication::UnicodeUTF8));
        chkLoad->setText(QString());
        label_14->setText(QApplication::translate("ICM", "Apply", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        calibrateDisplay->setText(QApplication::translate("ICM", "Screen \n"
"Calibration", 0, QApplication::UnicodeUTF8));
        calibrate->setText(QString());
        noOFSamples->setText(QString());
        cBox->setTitle(QString());
        cBut->setText(QString());
        label_21->setText(QApplication::translate("ICM", "C", 0, QApplication::UnicodeUTF8));
        ExitBox->setTitle(QString());
        exit->setText(QString());
        rBox->setTitle(QString());
        label_19->setText(QApplication::translate("ICM", "R", 0, QApplication::UnicodeUTF8));
        t2Box->setTitle(QString());
        t2But->setText(QString());
        graphBox->setTitle(QString());
        graphBut->setText(QString());
        lBox->setTitle(QString());
        lBut->setText(QString());
        label_20->setText(QApplication::translate("ICM", "L", 0, QApplication::UnicodeUTF8));
        sweep_interval_unit->clear();
        sweep_interval_unit->insertItems(0, QStringList()
         << QApplication::translate("ICM", "Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ICM", "KHz", 0, QApplication::UnicodeUTF8)
        );
        lbl_endfreq->setText(QApplication::translate("ICM", "End Freq:", 0, QApplication::UnicodeUTF8));
        sweep_capture->setText(QApplication::translate("ICM", "Capture", 0, QApplication::UnicodeUTF8));
        lbl_startfreq->setText(QApplication::translate("ICM", "Start Freq:", 0, QApplication::UnicodeUTF8));
        sweep_startfreq_unit->clear();
        sweep_startfreq_unit->insertItems(0, QStringList()
         << QApplication::translate("ICM", "Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ICM", "KHz", 0, QApplication::UnicodeUTF8)
        );
        sweep_endfreq_unit->clear();
        sweep_endfreq_unit->insertItems(0, QStringList()
         << QApplication::translate("ICM", "Hz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ICM", "KHz", 0, QApplication::UnicodeUTF8)
        );
        lbl_interval->setText(QApplication::translate("ICM", "Interval:", 0, QApplication::UnicodeUTF8));
        fp_powerLabel->setText(QApplication::translate("ICM", "POWER", 0, QApplication::UnicodeUTF8));
        ah3_label->setText(QApplication::translate("ICM", "AH3", 0, QApplication::UnicodeUTF8));
        ah1_label->setText(QApplication::translate("ICM", "AH1", 0, QApplication::UnicodeUTF8));
        ah_label->setText(QApplication::translate("ICM", "ANALOG HIGHWAY", 0, QApplication::UnicodeUTF8));
        ah0_label->setText(QApplication::translate("ICM", "AH0", 0, QApplication::UnicodeUTF8));
        ah2_label->setText(QApplication::translate("ICM", "AH2", 0, QApplication::UnicodeUTF8));
        fp_VI1_ICM_SL_label->setText(QApplication::translate("ICM", "VI-1/ICM/SL", 0, QApplication::UnicodeUTF8));
        fp_VI2_EXT_label->setText(QApplication::translate("ICM", "VI-2/EXT", 0, QApplication::UnicodeUTF8));
        fp_ICM_Guard->setText(QApplication::translate("ICM", "ICM GUARD", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("ICM", "CH2", 0, QApplication::UnicodeUTF8));
        label_75->setText(QApplication::translate("ICM", "CH1", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("ICM", "DSO", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("ICM", "AWG", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("ICM", "EXT", 0, QApplication::UnicodeUTF8));
        fp_A_label->setText(QApplication::translate("ICM", "A", 0, QApplication::UnicodeUTF8));
        fp_HI_label->setText(QApplication::translate("ICM", "HI", 0, QApplication::UnicodeUTF8));
        fp_LO_label->setText(QApplication::translate("ICM", "LO", 0, QApplication::UnicodeUTF8));
        fp_DMM_label->setText(QApplication::translate("ICM", "DMM", 0, QApplication::UnicodeUTF8));
        fp_fuse_label->setText(QApplication::translate("ICM", "FUSE", 0, QApplication::UnicodeUTF8));
        fp_mA_label->setText(QApplication::translate("ICM", "mA", 0, QApplication::UnicodeUTF8));
        fp_REF_label->setText(QApplication::translate("ICM", "REF", 0, QApplication::UnicodeUTF8));
        fp_GND_label->setText(QApplication::translate("ICM", "GND", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ICM: public Ui_ICM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICM_H
