/********************************************************************************
** Form generated from reading UI file 'shortlocater.ui'
**
** Created: Thu Aug 7 18:19:50 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTLOCATER_H
#define UI_SHORTLOCATER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortLocaterClass
{
public:
    QFrame *displayPanel;
    QLabel *units;
    QLabel *displayBG;
    QLabel *label;
    QLabel *rangeLabel;
    QLabel *rangeCap;
    QProgressBar *progressBar_2;
    QSlider *horizontalSlider_5;
    QLabel *holdCap;
    QGroupBox *ohmBox;
    QPushButton *microOhms;
    QLabel *uE;
    QFrame *selectFrame;
    QFrame *inputPanel;
    QGroupBox *functionsPanel;
    QPushButton *Null;
    QPushButton *offset;
    QPushButton *Auto;
    QPushButton *buzzer;
    QPushButton *hold;
    QPushButton *External;
    QPushButton *Internal;
    QGroupBox *Ranges;
    QPushButton *r200But;
    QLabel *r200ECap;
    QPushButton *r2EBut;
    QLabel *r2Ecap;
    QPushButton *r200mEBut;
    QLabel *r200mECap;
    QWidget *splashWidget;
    QLabel *splashLabel;
    QGroupBox *temp4;
    QPushButton *ohmMeter_3;
    QGroupBox *temp2;
    QPushButton *ohmMeter;
    QGroupBox *ExitBox;
    QPushButton *exit;
    QGroupBox *temp1;
    QPushButton *ampMeter;
    QGroupBox *temp3;
    QPushButton *ohmMeter_2;
    QGroupBox *debugPanel;
    QPushButton *pushButton_16;
    QPushButton *pushButton;
    QPushButton *HAADC;
    QCheckBox *calibrateDisplay;
    QGroupBox *haadcFrame;
    QPushButton *haadcClose;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *adcRawData;
    QLineEdit *adcConvData;
    QLineEdit *displayInput;
    QLabel *label_25;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QCheckBox *openShortEnable;
    QLineEdit *displayOffset;
    QWidget *HAADC_WIDGET;
    QFrame *frontPanel_SHLOC;
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
    QFrame *ah3_inner;
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

    void setupUi(QWidget *ShortLocaterClass)
    {
        if (ShortLocaterClass->objectName().isEmpty())
            ShortLocaterClass->setObjectName(QString::fromUtf8("ShortLocaterClass"));
        ShortLocaterClass->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(88, 88, 89, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ShortLocaterClass->setPalette(palette);
        ShortLocaterClass->setAutoFillBackground(true);
        displayPanel = new QFrame(ShortLocaterClass);
        displayPanel->setObjectName(QString::fromUtf8("displayPanel"));
        displayPanel->setGeometry(QRect(10, 33, 693, 171));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        displayPanel->setFont(font);
        displayPanel->setStyleSheet(QString::fromUtf8("QFrame {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
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
        displayPanel->setFrameShape(QFrame::Box);
        displayPanel->setFrameShadow(QFrame::Raised);
        units = new QLabel(displayPanel);
        units->setObjectName(QString::fromUtf8("units"));
        units->setGeometry(QRect(510, 30, 140, 90));
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
        units->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setWeight(50);
        units->setFont(font1);
        units->setStyleSheet(QString::fromUtf8("color: #fbec5d;"));
        displayBG = new QLabel(displayPanel);
        displayBG->setObjectName(QString::fromUtf8("displayBG"));
        displayBG->setGeometry(QRect(30, 10, 630, 120));
        QPalette palette2;
        QBrush brush4(QColor(255, 255, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        QBrush brush5(QColor(255, 255, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush3);
        palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush6(QColor(0, 0, 128, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        displayBG->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(60);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        displayBG->setFont(font2);
        displayBG->setFocusPolicy(Qt::NoFocus);
        displayBG->setAutoFillBackground(false);
        displayBG->setFrameShape(QFrame::Panel);
        displayBG->setFrameShadow(QFrame::Sunken);
        displayBG->setLineWidth(1);
        displayBG->setMidLineWidth(2);
        displayBG->setMargin(0);
        label = new QLabel(displayPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 15, 90, 17));
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
        label->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        rangeLabel = new QLabel(displayPanel);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setGeometry(QRect(120, 120, 71, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        rangeLabel->setPalette(palette4);
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(14);
        rangeLabel->setFont(font4);
        rangeCap = new QLabel(displayPanel);
        rangeCap->setObjectName(QString::fromUtf8("rangeCap"));
        rangeCap->setGeometry(QRect(40, 120, 80, 17));
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
        rangeCap->setPalette(palette5);
        rangeCap->setFont(font3);
        rangeCap->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        progressBar_2 = new QProgressBar(displayPanel);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(30, 140, 630, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        progressBar_2->setFont(font5);
        progressBar_2->setAutoFillBackground(false);
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"     border: 1px solid black;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #1874CD;\n"
"     width:10px;\n"
"     border-radius: 10px;\n"
" }"));
        progressBar_2->setMinimum(0);
        progressBar_2->setMaximum(256000);
        progressBar_2->setValue(10000);
        progressBar_2->setTextVisible(false);
        horizontalSlider_5 = new QSlider(displayPanel);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setEnabled(true);
        horizontalSlider_5->setGeometry(QRect(30, 140, 630, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        QBrush brush7(QColor(116, 116, 116, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        horizontalSlider_5->setPalette(palette6);
        horizontalSlider_5->setFont(font5);
        horizontalSlider_5->setFocusPolicy(Qt::NoFocus);
        horizontalSlider_5->setMaximum(90);
        horizontalSlider_5->setTracking(false);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_5->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_5->setTickInterval(1);
        holdCap = new QLabel(displayPanel);
        holdCap->setObjectName(QString::fromUtf8("holdCap"));
        holdCap->setGeometry(QRect(594, 15, 60, 17));
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
        holdCap->setPalette(palette7);
        holdCap->setFont(font3);
        holdCap->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        displayBG->raise();
        label->raise();
        rangeLabel->raise();
        rangeCap->raise();
        horizontalSlider_5->raise();
        units->raise();
        progressBar_2->raise();
        holdCap->raise();
        ohmBox = new QGroupBox(ShortLocaterClass);
        ohmBox->setObjectName(QString::fromUtf8("ohmBox"));
        ohmBox->setGeometry(QRect(710, 33, 80, 100));
        QFont font6;
        font6.setFamily(QString::fromUtf8("DejaVu Sans"));
        ohmBox->setFont(font6);
        ohmBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        microOhms = new QPushButton(ohmBox);
        microOhms->setObjectName(QString::fromUtf8("microOhms"));
        microOhms->setGeometry(QRect(8, 20, 64, 64));
        microOhms->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/R1.png"), QSize(), QIcon::Normal, QIcon::Off);
        microOhms->setIcon(icon);
        microOhms->setIconSize(QSize(55, 55));
        uE = new QLabel(ohmBox);
        uE->setObjectName(QString::fromUtf8("uE"));
        uE->setGeometry(QRect(47, 60, 20, 20));
        uE->setFont(font3);
        uE->setStyleSheet(QString::fromUtf8("color:blue;"));
        uE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        selectFrame = new QFrame(ShortLocaterClass);
        selectFrame->setObjectName(QString::fromUtf8("selectFrame"));
        selectFrame->setGeometry(QRect(701, 54, 10, 60));
        selectFrame->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-top:1px solid white;\n"
"border-bottom:1px solid white;"));
        selectFrame->setFrameShape(QFrame::Box);
        selectFrame->setFrameShadow(QFrame::Raised);
        inputPanel = new QFrame(ShortLocaterClass);
        inputPanel->setObjectName(QString::fromUtf8("inputPanel"));
        inputPanel->setGeometry(QRect(10, 200, 693, 230));
        inputPanel->setFont(font6);
        inputPanel->setStyleSheet(QString::fromUtf8("QFrame {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"\n"
"\n"
"\n"
" }\n"
"QLabel{\n"
"	background-color:rgba(0,0,0,0);\n"
"	color:white;\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"	background-color:rgba(0,0,0,0);\n"
"	color:gray;\n"
"}"));
        inputPanel->setFrameShape(QFrame::Box);
        inputPanel->setFrameShadow(QFrame::Raised);
        functionsPanel = new QGroupBox(inputPanel);
        functionsPanel->setObjectName(QString::fromUtf8("functionsPanel"));
        functionsPanel->setGeometry(QRect(30, 10, 630, 120));
        QFont font7;
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        functionsPanel->setFont(font7);
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
        Null = new QPushButton(functionsPanel);
        Null->setObjectName(QString::fromUtf8("Null"));
        Null->setGeometry(QRect(426, 30, 64, 64));
        QFont font8;
        font8.setFamily(QString::fromUtf8("DejaVu Sans"));
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setItalic(false);
        font8.setWeight(75);
        Null->setFont(font8);
        Null->setFocusPolicy(Qt::NoFocus);
        Null->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        Null->setIconSize(QSize(64, 64));
        offset = new QPushButton(functionsPanel);
        offset->setObjectName(QString::fromUtf8("offset"));
        offset->setGeometry(QRect(332, 32, 64, 64));
        offset->setFont(font8);
        offset->setFocusPolicy(Qt::NoFocus);
        offset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        offset->setIconSize(QSize(64, 64));
        Auto = new QPushButton(functionsPanel);
        Auto->setObjectName(QString::fromUtf8("Auto"));
        Auto->setGeometry(QRect(238, 30, 64, 64));
        Auto->setFont(font8);
        Auto->setFocusPolicy(Qt::NoFocus);
        Auto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        Auto->setIconSize(QSize(64, 64));
        buzzer = new QPushButton(functionsPanel);
        buzzer->setObjectName(QString::fromUtf8("buzzer"));
        buzzer->setGeometry(QRect(50, 30, 64, 64));
        buzzer->setFont(font8);
        buzzer->setFocusPolicy(Qt::NoFocus);
        buzzer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        buzzer->setIconSize(QSize(64, 64));
        hold = new QPushButton(functionsPanel);
        hold->setObjectName(QString::fromUtf8("hold"));
        hold->setGeometry(QRect(520, 30, 64, 64));
        hold->setFont(font8);
        hold->setFocusPolicy(Qt::NoFocus);
        hold->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        hold->setIconSize(QSize(64, 64));
        External = new QPushButton(functionsPanel);
        External->setObjectName(QString::fromUtf8("External"));
        External->setGeometry(QRect(144, 30, 64, 64));
        External->setFont(font8);
        External->setFocusPolicy(Qt::NoFocus);
        External->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        External->setIconSize(QSize(64, 64));
        Internal = new QPushButton(functionsPanel);
        Internal->setObjectName(QString::fromUtf8("Internal"));
        Internal->setGeometry(QRect(144, 30, 64, 64));
        Internal->setFont(font8);
        Internal->setFocusPolicy(Qt::NoFocus);
        Internal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        Internal->setIconSize(QSize(64, 64));
        Ranges = new QGroupBox(inputPanel);
        Ranges->setObjectName(QString::fromUtf8("Ranges"));
        Ranges->setGeometry(QRect(30, 120, 630, 100));
        Ranges->setFont(font7);
        Ranges->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        r200But = new QPushButton(Ranges);
        r200But->setObjectName(QString::fromUtf8("r200But"));
        r200But->setGeometry(QRect(100, 30, 40, 40));
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans"));
        font9.setPointSize(18);
        r200But->setFont(font9);
        r200But->setFocusPolicy(Qt::NoFocus);
        r200But->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"	QPushButton::enabled{\n"
"	         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"	image: url(:/svgbutton/Beryl/normal.svg);\n"
"	}\n"
" \n"
"	QPushButton::disabled{\n"
"	         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"	image: url(:/svgbutton/Beryl/hovered.svg);\n"
"	}\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the default button prominent */\n"
"     }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/svgbutton/Beryl/pressed.svg"), QSize(), QIcon::Normal, QIcon::Off);
        r200But->setIcon(icon1);
        r200But->setIconSize(QSize(48, 48));
        r200ECap = new QLabel(Ranges);
        r200ECap->setObjectName(QString::fromUtf8("r200ECap"));
        r200ECap->setGeometry(QRect(140, 40, 51, 17));
        r200ECap->setFont(font5);
        r2EBut = new QPushButton(Ranges);
        r2EBut->setObjectName(QString::fromUtf8("r2EBut"));
        r2EBut->setGeometry(QRect(274, 32, 40, 40));
        r2EBut->setFont(font9);
        r2EBut->setFocusPolicy(Qt::NoFocus);
        r2EBut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"	QPushButton::disabled{\n"
"	\n"
"	image: url(:/svgbutton/Beryl/hovered.svg);\n"
"	}\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the default button prominent */\n"
"     }"));
        r2EBut->setIcon(icon1);
        r2EBut->setIconSize(QSize(48, 48));
        r2Ecap = new QLabel(Ranges);
        r2Ecap->setObjectName(QString::fromUtf8("r2Ecap"));
        r2Ecap->setGeometry(QRect(321, 40, 30, 17));
        r2Ecap->setFont(font5);
        r200mEBut = new QPushButton(Ranges);
        r200mEBut->setObjectName(QString::fromUtf8("r200mEBut"));
        r200mEBut->setGeometry(QRect(423, 31, 40, 40));
        r200mEBut->setFont(font9);
        r200mEBut->setFocusPolicy(Qt::NoFocus);
        r200mEBut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"     }\n"
"	QPushButton::disabled{\n"
"	\n"
"	image: url(:/svgbutton/Beryl/hovered.svg);\n"
"	}\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the default button prominent */\n"
"     }"));
        r200mEBut->setIcon(icon1);
        r200mEBut->setIconSize(QSize(48, 48));
        r200mECap = new QLabel(Ranges);
        r200mECap->setObjectName(QString::fromUtf8("r200mECap"));
        r200mECap->setGeometry(QRect(469, 38, 71, 17));
        r200mECap->setFont(font5);
        splashWidget = new QWidget(inputPanel);
        splashWidget->setObjectName(QString::fromUtf8("splashWidget"));
        splashWidget->setGeometry(QRect(260, 110, 210, 40));
        splashWidget->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 200), stop:0.497326 rgba(0, 0, 0, 200), stop:1 rgba(0, 169, 255, 200));\n"
"border:2px solid white;"));
        splashLabel = new QLabel(splashWidget);
        splashLabel->setObjectName(QString::fromUtf8("splashLabel"));
        splashLabel->setGeometry(QRect(10, 10, 190, 20));
        splashLabel->setFont(font8);
        splashLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"font:bold;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color: rgb(0, 0, 0,0);"));
        splashLabel->setAlignment(Qt::AlignCenter);
        temp4 = new QGroupBox(ShortLocaterClass);
        temp4->setObjectName(QString::fromUtf8("temp4"));
        temp4->setGeometry(QRect(710, 432, 80, 100));
        temp4->setFont(font6);
        temp4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter_3 = new QPushButton(temp4);
        ohmMeter_3->setObjectName(QString::fromUtf8("ohmMeter_3"));
        ohmMeter_3->setGeometry(QRect(8, 20, 64, 64));
        ohmMeter_3->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter_3->setIconSize(QSize(55, 55));
        temp2 = new QGroupBox(ShortLocaterClass);
        temp2->setObjectName(QString::fromUtf8("temp2"));
        temp2->setGeometry(QRect(710, 232, 80, 100));
        temp2->setFont(font6);
        temp2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter = new QPushButton(temp2);
        ohmMeter->setObjectName(QString::fromUtf8("ohmMeter"));
        ohmMeter->setGeometry(QRect(8, 20, 64, 64));
        ohmMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter->setIconSize(QSize(55, 55));
        ExitBox = new QGroupBox(ShortLocaterClass);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 532, 80, 61));
        ExitBox->setFont(font6);
        ExitBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
"}\n"
""));
        exit = new QPushButton(ExitBox);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(5, 1, 60, 70));
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;\n"
"image: url(:/logout-icon.png);}\n"
""));
        exit->setIconSize(QSize(70, 70));
        temp1 = new QGroupBox(ShortLocaterClass);
        temp1->setObjectName(QString::fromUtf8("temp1"));
        temp1->setGeometry(QRect(710, 132, 80, 100));
        temp1->setFont(font6);
        temp1->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        ampMeter = new QPushButton(temp1);
        ampMeter->setObjectName(QString::fromUtf8("ampMeter"));
        ampMeter->setGeometry(QRect(8, 20, 64, 64));
        ampMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ampMeter->setIconSize(QSize(55, 55));
        temp3 = new QGroupBox(ShortLocaterClass);
        temp3->setObjectName(QString::fromUtf8("temp3"));
        temp3->setGeometry(QRect(710, 332, 80, 100));
        temp3->setFont(font6);
        temp3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter_2 = new QPushButton(temp3);
        ohmMeter_2->setObjectName(QString::fromUtf8("ohmMeter_2"));
        ohmMeter_2->setGeometry(QRect(8, 20, 64, 64));
        ohmMeter_2->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter_2->setIconSize(QSize(55, 55));
        debugPanel = new QGroupBox(ShortLocaterClass);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(10, 433, 693, 160));
        QFont font10;
        font10.setBold(true);
        font10.setWeight(75);
        debugPanel->setFont(font10);
        debugPanel->setStyleSheet(QString::fromUtf8("QGroupBox{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 border: 2px solid black;\n"
" }"));
        pushButton_16 = new QPushButton(debugPanel);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(80, 40, 50, 50));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Letter-R-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon2);
        pushButton_16->setIconSize(QSize(48, 48));
        pushButton = new QPushButton(debugPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Control-Panel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(48, 48));
        HAADC = new QPushButton(debugPanel);
        HAADC->setObjectName(QString::fromUtf8("HAADC"));
        HAADC->setGeometry(QRect(10, 40, 50, 50));
        HAADC->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Letter-A-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HAADC->setIcon(icon4);
        HAADC->setIconSize(QSize(48, 48));
        calibrateDisplay = new QCheckBox(debugPanel);
        calibrateDisplay->setObjectName(QString::fromUtf8("calibrateDisplay"));
        calibrateDisplay->setGeometry(QRect(440, 0, 170, 31));
        QFont font11;
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        calibrateDisplay->setFont(font11);
        calibrateDisplay->setFocusPolicy(Qt::NoFocus);
        calibrateDisplay->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"font: 14px;\n"
"color:black;\n"
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
        haadcFrame = new QGroupBox(debugPanel);
        haadcFrame->setObjectName(QString::fromUtf8("haadcFrame"));
        haadcFrame->setGeometry(QRect(614, 52, 80, 100));
        haadcFrame->setFont(font6);
        haadcFrame->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        haadcClose = new QPushButton(haadcFrame);
        haadcClose->setObjectName(QString::fromUtf8("haadcClose"));
        haadcClose->setGeometry(QRect(0, 70, 80, 30));
        label_22 = new QLabel(debugPanel);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(280, 56, 110, 17));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(debugPanel);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(270, 120, 120, 30));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        adcRawData = new QLineEdit(debugPanel);
        adcRawData->setObjectName(QString::fromUtf8("adcRawData"));
        adcRawData->setGeometry(QRect(390, 50, 170, 29));
        QFont font12;
        font12.setFamily(QString::fromUtf8("DejaVu Sans"));
        font12.setBold(true);
        font12.setWeight(75);
        adcRawData->setFont(font12);
        adcRawData->setAlignment(Qt::AlignCenter);
        adcConvData = new QLineEdit(debugPanel);
        adcConvData->setObjectName(QString::fromUtf8("adcConvData"));
        adcConvData->setGeometry(QRect(390, 118, 210, 29));
        adcConvData->setFont(font12);
        adcConvData->setAlignment(Qt::AlignCenter);
        displayInput = new QLineEdit(debugPanel);
        displayInput->setObjectName(QString::fromUtf8("displayInput"));
        displayInput->setGeometry(QRect(390, 84, 210, 29));
        displayInput->setFont(font12);
        displayInput->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(debugPanel);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(270, 87, 120, 30));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(debugPanel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 37, 113, 30));
        pushButton_3 = new QPushButton(debugPanel);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 100, 114, 30));
        lineEdit = new QLineEdit(debugPanel);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 113, 29));
        openShortEnable = new QCheckBox(debugPanel);
        openShortEnable->setObjectName(QString::fromUtf8("openShortEnable"));
        openShortEnable->setGeometry(QRect(90, 125, 160, 30));
        openShortEnable->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"font: 14px;\n"
"color:black;\n"
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
        openShortEnable->setChecked(false);
        displayOffset = new QLineEdit(debugPanel);
        displayOffset->setObjectName(QString::fromUtf8("displayOffset"));
        displayOffset->setGeometry(QRect(150, 4, 113, 29));
        HAADC_WIDGET = new QWidget(ShortLocaterClass);
        HAADC_WIDGET->setObjectName(QString::fromUtf8("HAADC_WIDGET"));
        HAADC_WIDGET->setGeometry(QRect(633, 525, 50, 2));
        HAADC_WIDGET->setStyleSheet(QString::fromUtf8(""));
        frontPanel_SHLOC = new QFrame(ShortLocaterClass);
        frontPanel_SHLOC->setObjectName(QString::fromUtf8("frontPanel_SHLOC"));
        frontPanel_SHLOC->setGeometry(QRect(10, 434, 693, 160));
        frontPanel_SHLOC->setStyleSheet(QString::fromUtf8("/*QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}*/\n"
"QFrame {\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 1 #3a5976, stop: 0 #000000);\n"
"     border: 2px solid white;\n"
"     border-radius: 5px;\n"
"     margin-top: 0ex; /* leave space at the top for the title */\n"
" }\n"
""));
        frontPanel_SHLOC->setFrameShape(QFrame::StyledPanel);
        frontPanel_SHLOC->setFrameShadow(QFrame::Raised);
        framePowerUSB = new QFrame(frontPanel_SHLOC);
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
        analogHighway = new QFrame(frontPanel_SHLOC);
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
        ah3_inner = new QFrame(ah3_outer);
        ah3_inner->setObjectName(QString::fromUtf8("ah3_inner"));
        ah3_inner->setGeometry(QRect(15, 15, 10, 10));
        ah3_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        ah3_inner->setFrameShape(QFrame::StyledPanel);
        ah3_inner->setFrameShadow(QFrame::Raised);
        ah_label = new QLabel(analogHighway);
        ah_label->setObjectName(QString::fromUtf8("ah_label"));
        ah_label->setGeometry(QRect(7, 0, 287, 16));
        ah_label->setFont(font12);
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
        fp_VI_ICM_SL = new QFrame(frontPanel_SHLOC);
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
        fp_Guarding->setStyleSheet(QString::fromUtf8("border:1px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
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
        fp_VI1_ICM_SL->setGeometry(QRect(24, 20, 41, 41));
        fp_VI1_ICM_SL->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        fp_VI1_ICM_SL->setFrameShape(QFrame::StyledPanel);
        fp_VI1_ICM_SL->setFrameShadow(QFrame::Raised);
        fp_ICM_Guard = new QLabel(fp_VI_ICM_SL);
        fp_ICM_Guard->setObjectName(QString::fromUtf8("fp_ICM_Guard"));
        fp_ICM_Guard->setGeometry(QRect(196, 1, 75, 17));
        fp_ICM_Guard->setFont(font13);
        fp_ICM_Guard->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        frame_15 = new QFrame(frontPanel_SHLOC);
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
        label_76->setFont(font12);
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
        frame_DMM = new QFrame(frontPanel_SHLOC);
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
        fp_DMM_label->setFont(font12);
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
        fp_REF = new QFrame(frontPanel_SHLOC);
        fp_REF->setObjectName(QString::fromUtf8("fp_REF"));
        fp_REF->setGeometry(QRect(655, 21, 31, 31));
        fp_REF->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1px rgba(0,0,0,0); \n"
"border-radius:12px;\n"
"image: url(:/fp_images/ref.png);\n"
"background-color: rgb(0, 0, 0,0);\n"
"}"));
        fp_REF->setFrameShape(QFrame::StyledPanel);
        fp_REF->setFrameShadow(QFrame::Raised);
        fp_REF_label = new QLabel(frontPanel_SHLOC);
        fp_REF_label->setObjectName(QString::fromUtf8("fp_REF_label"));
        fp_REF_label->setGeometry(QRect(655, 51, 32, 17));
        fp_REF_label->setFont(font13);
        fp_REF_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color:rgb(0, 0, 0,0);"));
        fp_GND_label = new QLabel(frontPanel_SHLOC);
        fp_GND_label->setObjectName(QString::fromUtf8("fp_GND_label"));
        fp_GND_label->setGeometry(QRect(653, 131, 35, 17));
        fp_GND_label->setFont(font13);
        fp_GND_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color:rgb(0, 0, 0,0);"));
        fp_GND = new QFrame(frontPanel_SHLOC);
        fp_GND->setObjectName(QString::fromUtf8("fp_GND"));
        fp_GND->setGeometry(QRect(652, 96, 38, 31));
        fp_GND->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1px rgba(0,0,0,0); \n"
"border-radius:13px;\n"
"background-color: rgb(0, 0, 0,0);\n"
"	image: url(:/fp_images/gnd.png);\n"
"}"));
        fp_GND->setFrameShape(QFrame::StyledPanel);
        fp_GND->setFrameShadow(QFrame::Raised);

        retranslateUi(ShortLocaterClass);

        QMetaObject::connectSlotsByName(ShortLocaterClass);
    } // setupUi

    void retranslateUi(QWidget *ShortLocaterClass)
    {
        ShortLocaterClass->setWindowTitle(QApplication::translate("ShortLocaterClass", "ShortLocater", 0, QApplication::UnicodeUTF8));
        units->setText(QString());
        displayBG->setText(QString());
        label->setText(QApplication::translate("ShortLocaterClass", "AUTO", 0, QApplication::UnicodeUTF8));
        rangeLabel->setText(QString());
        rangeCap->setText(QApplication::translate("ShortLocaterClass", "RANGE:", 0, QApplication::UnicodeUTF8));
        progressBar_2->setFormat(QApplication::translate("ShortLocaterClass", "%vmE", 0, QApplication::UnicodeUTF8));
        holdCap->setText(QApplication::translate("ShortLocaterClass", "HOLD", 0, QApplication::UnicodeUTF8));
        ohmBox->setTitle(QString());
        uE->setText(QApplication::translate("ShortLocaterClass", "R", 0, QApplication::UnicodeUTF8));
        functionsPanel->setTitle(QApplication::translate("ShortLocaterClass", "FUNCTIONS", 0, QApplication::UnicodeUTF8));
        Null->setText(QApplication::translate("ShortLocaterClass", "Probe\n"
"Calib", 0, QApplication::UnicodeUTF8));
        offset->setText(QApplication::translate("ShortLocaterClass", "Offset", 0, QApplication::UnicodeUTF8));
        Auto->setText(QApplication::translate("ShortLocaterClass", "AUTO", 0, QApplication::UnicodeUTF8));
        buzzer->setText(QApplication::translate("ShortLocaterClass", "Buzzer", 0, QApplication::UnicodeUTF8));
        hold->setText(QApplication::translate("ShortLocaterClass", "HOLD", 0, QApplication::UnicodeUTF8));
        External->setText(QApplication::translate("ShortLocaterClass", "EXT", 0, QApplication::UnicodeUTF8));
        Internal->setText(QApplication::translate("ShortLocaterClass", "INT", 0, QApplication::UnicodeUTF8));
        Ranges->setTitle(QApplication::translate("ShortLocaterClass", "RANGES", 0, QApplication::UnicodeUTF8));
        r200But->setText(QString());
        r200ECap->setText(QApplication::translate("ShortLocaterClass", "200E", 0, QApplication::UnicodeUTF8));
        r2EBut->setText(QString());
        r2Ecap->setText(QApplication::translate("ShortLocaterClass", "2E", 0, QApplication::UnicodeUTF8));
        r200mEBut->setText(QString());
        r200mECap->setText(QApplication::translate("ShortLocaterClass", "200mE", 0, QApplication::UnicodeUTF8));
        splashLabel->setText(QApplication::translate("ShortLocaterClass", "OFFSET APPLYING.....", 0, QApplication::UnicodeUTF8));
        temp4->setTitle(QString());
        ohmMeter_3->setText(QString());
        temp2->setTitle(QString());
        ohmMeter->setText(QString());
        ExitBox->setTitle(QString());
        exit->setText(QString());
        temp1->setTitle(QString());
        ampMeter->setText(QString());
        temp3->setTitle(QString());
        ohmMeter_2->setText(QString());
        debugPanel->setTitle(QApplication::translate("ShortLocaterClass", "DEBUG PANEL", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QString());
        pushButton->setText(QString());
        HAADC->setText(QString());
        calibrateDisplay->setText(QApplication::translate("ShortLocaterClass", "Screen Calibration", 0, QApplication::UnicodeUTF8));
        haadcFrame->setTitle(QString());
        haadcClose->setText(QApplication::translate("ShortLocaterClass", "&Close", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ShortLocaterClass", "ADC Raw Data :", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ShortLocaterClass", "ADC Converted\n"
"Data :", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ShortLocaterClass", "Display Input : ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ShortLocaterClass", "NULL ON", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ShortLocaterClass", "NULL OFF", 0, QApplication::UnicodeUTF8));
        openShortEnable->setText(QApplication::translate("ShortLocaterClass", "OpenShort Values", 0, QApplication::UnicodeUTF8));
        fp_powerLabel->setText(QApplication::translate("ShortLocaterClass", "POWER", 0, QApplication::UnicodeUTF8));
        ah3_label->setText(QApplication::translate("ShortLocaterClass", "AH3", 0, QApplication::UnicodeUTF8));
        ah1_label->setText(QApplication::translate("ShortLocaterClass", "AH1", 0, QApplication::UnicodeUTF8));
        ah_label->setText(QApplication::translate("ShortLocaterClass", "ANALOG HIGHWAY", 0, QApplication::UnicodeUTF8));
        ah0_label->setText(QApplication::translate("ShortLocaterClass", "AH0", 0, QApplication::UnicodeUTF8));
        ah2_label->setText(QApplication::translate("ShortLocaterClass", "AH2", 0, QApplication::UnicodeUTF8));
        fp_VI1_ICM_SL_label->setText(QApplication::translate("ShortLocaterClass", "VI-1/ICM/SL", 0, QApplication::UnicodeUTF8));
        fp_VI2_EXT_label->setText(QApplication::translate("ShortLocaterClass", "VI-2/EXT", 0, QApplication::UnicodeUTF8));
        fp_ICM_Guard->setText(QApplication::translate("ShortLocaterClass", "ICM GUARD", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("ShortLocaterClass", "CH2", 0, QApplication::UnicodeUTF8));
        label_75->setText(QApplication::translate("ShortLocaterClass", "CH1", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("ShortLocaterClass", "DSO", 0, QApplication::UnicodeUTF8));
        label_77->setText(QApplication::translate("ShortLocaterClass", "AWG", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("ShortLocaterClass", "EXT", 0, QApplication::UnicodeUTF8));
        fp_A_label->setText(QApplication::translate("ShortLocaterClass", "A", 0, QApplication::UnicodeUTF8));
        fp_HI_label->setText(QApplication::translate("ShortLocaterClass", "HI", 0, QApplication::UnicodeUTF8));
        fp_LO_label->setText(QApplication::translate("ShortLocaterClass", "LO", 0, QApplication::UnicodeUTF8));
        fp_DMM_label->setText(QApplication::translate("ShortLocaterClass", "DMM", 0, QApplication::UnicodeUTF8));
        fp_fuse_label->setText(QApplication::translate("ShortLocaterClass", "FUSE", 0, QApplication::UnicodeUTF8));
        fp_mA_label->setText(QApplication::translate("ShortLocaterClass", "mA", 0, QApplication::UnicodeUTF8));
        fp_REF_label->setText(QApplication::translate("ShortLocaterClass", "REF", 0, QApplication::UnicodeUTF8));
        fp_GND_label->setText(QApplication::translate("ShortLocaterClass", "GND", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShortLocaterClass: public Ui_ShortLocaterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTLOCATER_H
