/********************************************************************************
** Form generated from reading UI file 'shortlocater.ui'
**
** Created: Thu Jul 10 15:26:20 2014
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
    QFrame *frontPanel;
    QFrame *frame;
    QLabel *label_4w;
    QFrame *DMM2W_P2;
    QFrame *DMMI_P1;
    QFrame *DMM4W_P12;
    QFrame *DMM4W_P1;
    QFrame *DMM4W_P22;
    QFrame *DMMI_P12;
    QLabel *label_2w;
    QFrame *DMM2W_P22;
    QFrame *DMM2W_P12;
    QLabel *label_Amp;
    QFrame *DMM2W_P1;
    QFrame *DMM4W_P2;
    QLabel *label_27;
    QLabel *label_Amp_2;
    QFrame *DMMI_P12_2;
    QFrame *frame_2;
    QLabel *label_28;
    QLabel *label_29;
    QFrame *dso1_outer;
    QFrame *dso1_inner;
    QFrame *dso_outer;
    QFrame *dso_inner;
    QLabel *label_30;
    QFrame *frame_3;
    QLabel *label_31;
    QFrame *frame_22;
    QFrame *frame_23;
    QFrame *frame_21;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QFrame *frame_20;
    QLabel *label_35;
    QFrame *frame_4;
    QLabel *label_36;
    QFrame *frame_17;
    QFrame *frame_19;
    QLabel *label_37;
    QFrame *Reference;
    QFrame *REF;
    QFrame *GND;
    QLabel *V51KHz;
    QLabel *REF_GND_Cap;
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
    QWidget *splashWidget;
    QLabel *splashLabel;

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
        ohmBox->setGeometry(QRect(710, 32, 80, 90));
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
        microOhms->setGeometry(QRect(8, 18, 64, 64));
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
        selectFrame->setGeometry(QRect(701, 50, 10, 60));
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
        Null->raise();
        offset->raise();
        Auto->raise();
        buzzer->raise();
        hold->raise();
        External->raise();
        Internal->raise();
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
        temp4 = new QGroupBox(ShortLocaterClass);
        temp4->setObjectName(QString::fromUtf8("temp4"));
        temp4->setGeometry(QRect(710, 390, 80, 90));
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
        ohmMeter_3->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_3->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter_3->setIconSize(QSize(55, 55));
        temp2 = new QGroupBox(ShortLocaterClass);
        temp2->setObjectName(QString::fromUtf8("temp2"));
        temp2->setGeometry(QRect(710, 211, 80, 90));
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
        ohmMeter->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter->setIconSize(QSize(55, 55));
        ExitBox = new QGroupBox(ShortLocaterClass);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 480, 80, 112));
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
        exit->setGeometry(QRect(2, 14, 64, 80));
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/logout-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon2);
        exit->setIconSize(QSize(70, 70));
        temp1 = new QGroupBox(ShortLocaterClass);
        temp1->setObjectName(QString::fromUtf8("temp1"));
        temp1->setGeometry(QRect(710, 121, 80, 90));
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
        ampMeter->setGeometry(QRect(8, 17, 64, 64));
        ampMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ampMeter->setIconSize(QSize(55, 55));
        temp3 = new QGroupBox(ShortLocaterClass);
        temp3->setObjectName(QString::fromUtf8("temp3"));
        temp3->setGeometry(QRect(710, 300, 80, 90));
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
        ohmMeter_2->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_2->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter_2->setIconSize(QSize(55, 55));
        frontPanel = new QFrame(ShortLocaterClass);
        frontPanel->setObjectName(QString::fromUtf8("frontPanel"));
        frontPanel->setGeometry(QRect(10, 433, 693, 160));
        frontPanel->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        frontPanel->setFrameShape(QFrame::StyledPanel);
        frontPanel->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frontPanel);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(105, 7, 230, 146));
        frame->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4w = new QLabel(frame);
        label_4w->setObjectName(QString::fromUtf8("label_4w"));
        label_4w->setGeometry(QRect(47, 130, 60, 15));
        QFont font10;
        font10.setFamily(QString::fromUtf8("DejaVu Sans"));
        font10.setPointSize(11);
        font10.setBold(false);
        font10.setWeight(50);
        label_4w->setFont(font10);
        label_4w->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P2 = new QFrame(frame);
        DMM2W_P2->setObjectName(QString::fromUtf8("DMM2W_P2"));
        DMM2W_P2->setGeometry(QRect(100, 35, 31, 31));
        DMM2W_P2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P2->setFrameShape(QFrame::StyledPanel);
        DMM2W_P2->setFrameShadow(QFrame::Raised);
        DMMI_P1 = new QFrame(frame);
        DMMI_P1->setObjectName(QString::fromUtf8("DMMI_P1"));
        DMMI_P1->setGeometry(QRect(180, 35, 31, 31));
        DMMI_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMMI_P1->setFrameShape(QFrame::StyledPanel);
        DMMI_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P12 = new QFrame(frame);
        DMM4W_P12->setObjectName(QString::fromUtf8("DMM4W_P12"));
        DMM4W_P12->setGeometry(QRect(25, 93, 41, 41));
        DMM4W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P12->setFrameShape(QFrame::StyledPanel);
        DMM4W_P12->setFrameShadow(QFrame::Raised);
        DMM4W_P1 = new QFrame(frame);
        DMM4W_P1->setObjectName(QString::fromUtf8("DMM4W_P1"));
        DMM4W_P1->setGeometry(QRect(30, 98, 31, 31));
        DMM4W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P1->setFrameShape(QFrame::StyledPanel);
        DMM4W_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P22 = new QFrame(frame);
        DMM4W_P22->setObjectName(QString::fromUtf8("DMM4W_P22"));
        DMM4W_P22->setGeometry(QRect(95, 93, 41, 41));
        DMM4W_P22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P22->setFrameShape(QFrame::StyledPanel);
        DMM4W_P22->setFrameShadow(QFrame::Raised);
        DMMI_P12 = new QFrame(frame);
        DMMI_P12->setObjectName(QString::fromUtf8("DMMI_P12"));
        DMMI_P12->setGeometry(QRect(175, 30, 41, 41));
        DMMI_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMMI_P12->setFrameShape(QFrame::StyledPanel);
        DMMI_P12->setFrameShadow(QFrame::Raised);
        label_2w = new QLabel(frame);
        label_2w->setObjectName(QString::fromUtf8("label_2w"));
        label_2w->setGeometry(QRect(34, 71, 90, 17));
        label_2w->setFont(font10);
        label_2w->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_2w->setAlignment(Qt::AlignCenter);
        DMM2W_P22 = new QFrame(frame);
        DMM2W_P22->setObjectName(QString::fromUtf8("DMM2W_P22"));
        DMM2W_P22->setGeometry(QRect(95, 30, 41, 41));
        DMM2W_P22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P22->setFrameShape(QFrame::StyledPanel);
        DMM2W_P22->setFrameShadow(QFrame::Raised);
        DMM2W_P12 = new QFrame(frame);
        DMM2W_P12->setObjectName(QString::fromUtf8("DMM2W_P12"));
        DMM2W_P12->setGeometry(QRect(25, 30, 41, 41));
        DMM2W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P12->setFrameShape(QFrame::StyledPanel);
        DMM2W_P12->setFrameShadow(QFrame::Raised);
        label_Amp = new QLabel(frame);
        label_Amp->setObjectName(QString::fromUtf8("label_Amp"));
        label_Amp->setGeometry(QRect(134, 71, 40, 17));
        label_Amp->setFont(font10);
        label_Amp->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P1 = new QFrame(frame);
        DMM2W_P1->setObjectName(QString::fromUtf8("DMM2W_P1"));
        DMM2W_P1->setGeometry(QRect(30, 35, 31, 31));
        DMM2W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P1->setFrameShape(QFrame::StyledPanel);
        DMM2W_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P2 = new QFrame(frame);
        DMM4W_P2->setObjectName(QString::fromUtf8("DMM4W_P2"));
        DMM4W_P2->setGeometry(QRect(100, 98, 31, 31));
        DMM4W_P2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P2->setFrameShape(QFrame::StyledPanel);
        DMM4W_P2->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(5, 3, 220, 20));
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Sans"));
        font11.setBold(true);
        font11.setWeight(75);
        label_27->setFont(font11);
        label_27->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_27->setAlignment(Qt::AlignCenter);
        label_Amp_2 = new QLabel(frame);
        label_Amp_2->setObjectName(QString::fromUtf8("label_Amp_2"));
        label_Amp_2->setGeometry(QRect(173, 130, 50, 17));
        label_Amp_2->setFont(font10);
        label_Amp_2->setStyleSheet(QString::fromUtf8("color:black;"));
        DMMI_P12_2 = new QFrame(frame);
        DMMI_P12_2->setObjectName(QString::fromUtf8("DMMI_P12_2"));
        DMMI_P12_2->setGeometry(QRect(169, 80, 50, 50));
        DMMI_P12_2->setStyleSheet(QString::fromUtf8("border:1px solid rgba(0,0,0,0);\n"
"border-image: url(:/fuse.png);"));
        DMMI_P12_2->setFrameShape(QFrame::StyledPanel);
        DMMI_P12_2->setFrameShadow(QFrame::Raised);
        label_4w->raise();
        DMM4W_P12->raise();
        DMM4W_P1->raise();
        DMM4W_P22->raise();
        DMMI_P12->raise();
        label_2w->raise();
        DMM2W_P22->raise();
        DMM2W_P12->raise();
        label_Amp->raise();
        DMM2W_P1->raise();
        DMM4W_P2->raise();
        label_27->raise();
        label_Amp_2->raise();
        DMMI_P12_2->raise();
        DMMI_P1->raise();
        DMM2W_P2->raise();
        frame_2 = new QFrame(frontPanel);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 7, 92, 146));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(25, 130, 38, 17));
        label_28->setFont(font10);
        label_28->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(26, 72, 38, 17));
        label_29->setFont(font10);
        label_29->setStyleSheet(QString::fromUtf8("color:gray;"));
        dso1_outer = new QFrame(frame_2);
        dso1_outer->setObjectName(QString::fromUtf8("dso1_outer"));
        dso1_outer->setGeometry(QRect(25, 30, 41, 41));
        dso1_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso1_outer->setFrameShape(QFrame::StyledPanel);
        dso1_outer->setFrameShadow(QFrame::Raised);
        dso1_inner = new QFrame(dso1_outer);
        dso1_inner->setObjectName(QString::fromUtf8("dso1_inner"));
        dso1_inner->setGeometry(QRect(15, 15, 10, 10));
        dso1_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso1_inner->setFrameShape(QFrame::StyledPanel);
        dso1_inner->setFrameShadow(QFrame::Raised);
        dso_outer = new QFrame(frame_2);
        dso_outer->setObjectName(QString::fromUtf8("dso_outer"));
        dso_outer->setGeometry(QRect(25, 90, 41, 41));
        dso_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso_outer->setFrameShape(QFrame::StyledPanel);
        dso_outer->setFrameShadow(QFrame::Raised);
        dso_inner = new QFrame(dso_outer);
        dso_inner->setObjectName(QString::fromUtf8("dso_inner"));
        dso_inner->setGeometry(QRect(15, 15, 10, 10));
        dso_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso_inner->setFrameShape(QFrame::StyledPanel);
        dso_inner->setFrameShadow(QFrame::Raised);
        label_30 = new QLabel(frame_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(6, 3, 80, 20));
        label_30->setFont(font11);
        label_30->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_30->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(frontPanel);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(338, 7, 250, 146));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frame_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(5, 3, 240, 20));
        label_31->setFont(font11);
        label_31->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_31->setAlignment(Qt::AlignCenter);
        frame_22 = new QFrame(frame_3);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setGeometry(QRect(28, 38, 60, 15));
        frame_22->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 5px;\n"
" border-top-left-radius: 5px;\n"
" border-bottom-right-radius: 5px;\n"
" border-bottom-left-radius: 5px;"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        frame_23 = new QFrame(frame_3);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setGeometry(QRect(17, 80, 90, 40));
        frame_23->setStyleSheet(QString::fromUtf8(" border:1px solid rgba(0,0,0,0);\n"
" image: url(:/icm.png);\n"
""));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        frame_21 = new QFrame(frame_3);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(130, 90, 80, 26));
        frame_21->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        label_32 = new QLabel(frame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(19, 116, 87, 30));
        label_32->setFont(font10);
        label_32->setStyleSheet(QString::fromUtf8("color:black;"));
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(140, 120, 60, 17));
        label_33->setFont(font10);
        label_33->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_34 = new QLabel(frame_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(42, 61, 30, 17));
        label_34->setFont(font10);
        label_34->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_20 = new QFrame(frame_3);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setGeometry(QRect(120, 38, 100, 15));
        frame_20->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 5px;\n"
" border-top-left-radius: 5px;\n"
" border-bottom-right-radius: 10px;\n"
" border-bottom-left-radius: 10px;"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        label_35 = new QLabel(frame_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(130, 60, 81, 17));
        label_35->setFont(font10);
        label_35->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_4 = new QFrame(frontPanel);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(590, 7, 90, 85));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_36 = new QLabel(frame_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(6, 3, 80, 20));
        label_36->setFont(font11);
        label_36->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_36->setAlignment(Qt::AlignCenter);
        frame_17 = new QFrame(frame_4);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(20, 27, 41, 41));
        frame_17->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        frame_19 = new QFrame(frame_17);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(16, 15, 10, 10));
        frame_19->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        label_37 = new QLabel(frame_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(26, 68, 30, 17));
        label_37->setFont(font10);
        label_37->setStyleSheet(QString::fromUtf8("color:gray;"));
        Reference = new QFrame(frontPanel);
        Reference->setObjectName(QString::fromUtf8("Reference"));
        Reference->setGeometry(QRect(590, 96, 90, 57));
        Reference->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        Reference->setFrameShape(QFrame::StyledPanel);
        Reference->setFrameShadow(QFrame::Raised);
        REF = new QFrame(Reference);
        REF->setObjectName(QString::fromUtf8("REF"));
        REF->setGeometry(QRect(24, 14, 10, 30));
        REF->setFrameShape(QFrame::StyledPanel);
        REF->setFrameShadow(QFrame::Raised);
        GND = new QFrame(Reference);
        GND->setObjectName(QString::fromUtf8("GND"));
        GND->setGeometry(QRect(51, 14, 10, 30));
        GND->setFrameShape(QFrame::StyledPanel);
        GND->setFrameShadow(QFrame::Raised);
        V51KHz = new QLabel(Reference);
        V51KHz->setObjectName(QString::fromUtf8("V51KHz"));
        V51KHz->setGeometry(QRect(19, 0, 50, 16));
        QFont font12;
        font12.setFamily(QString::fromUtf8("DejaVu Sans"));
        font12.setPointSize(8);
        font12.setBold(false);
        font12.setWeight(50);
        V51KHz->setFont(font12);
        V51KHz->setAlignment(Qt::AlignCenter);
        REF_GND_Cap = new QLabel(Reference);
        REF_GND_Cap->setObjectName(QString::fromUtf8("REF_GND_Cap"));
        REF_GND_Cap->setGeometry(QRect(15, 43, 60, 16));
        REF_GND_Cap->setFont(font12);
        REF_GND_Cap->setAlignment(Qt::AlignCenter);
        debugPanel = new QGroupBox(ShortLocaterClass);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(10, 433, 693, 160));
        QFont font13;
        font13.setBold(true);
        font13.setWeight(75);
        debugPanel->setFont(font13);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Letter-R-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon3);
        pushButton_16->setIconSize(QSize(48, 48));
        pushButton = new QPushButton(debugPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Control-Panel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(48, 48));
        HAADC = new QPushButton(debugPanel);
        HAADC->setObjectName(QString::fromUtf8("HAADC"));
        HAADC->setGeometry(QRect(10, 40, 50, 50));
        HAADC->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Letter-A-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HAADC->setIcon(icon5);
        HAADC->setIconSize(QSize(48, 48));
        calibrateDisplay = new QCheckBox(debugPanel);
        calibrateDisplay->setObjectName(QString::fromUtf8("calibrateDisplay"));
        calibrateDisplay->setGeometry(QRect(440, 0, 170, 31));
        QFont font14;
        font14.setBold(false);
        font14.setItalic(false);
        font14.setWeight(50);
        calibrateDisplay->setFont(font14);
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
        adcRawData->setFont(font11);
        adcRawData->setAlignment(Qt::AlignCenter);
        adcConvData = new QLineEdit(debugPanel);
        adcConvData->setObjectName(QString::fromUtf8("adcConvData"));
        adcConvData->setGeometry(QRect(390, 118, 210, 29));
        adcConvData->setFont(font11);
        adcConvData->setAlignment(Qt::AlignCenter);
        displayInput = new QLineEdit(debugPanel);
        displayInput->setObjectName(QString::fromUtf8("displayInput"));
        displayInput->setGeometry(QRect(390, 84, 210, 29));
        displayInput->setFont(font11);
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
        splashWidget = new QWidget(ShortLocaterClass);
        splashWidget->setObjectName(QString::fromUtf8("splashWidget"));
        splashWidget->setGeometry(QRect(250, 310, 210, 40));
        splashWidget->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 200), stop:0.497326 rgba(0, 0, 0, 200), stop:1 rgba(0, 169, 255, 200));\n"
"border:2px solid white;"));
        splashLabel = new QLabel(splashWidget);
        splashLabel->setObjectName(QString::fromUtf8("splashLabel"));
        splashLabel->setGeometry(QRect(10, 10, 190, 20));
        QFont font15;
        font15.setPointSize(12);
        font15.setBold(true);
        font15.setItalic(false);
        font15.setWeight(75);
        splashLabel->setFont(font15);
        splashLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"font:bold;\n"
"background-color: rgb(0, 0, 0,0);\n"
"border-color: rgb(0, 0, 0,0);"));

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
        label_4w->setText(QApplication::translate("ShortLocaterClass", "4 WIRE", 0, QApplication::UnicodeUTF8));
        label_2w->setText(QApplication::translate("ShortLocaterClass", "VOLT", 0, QApplication::UnicodeUTF8));
        label_Amp->setText(QApplication::translate("ShortLocaterClass", "AMP", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ShortLocaterClass", "DIGITAL MULTI METER", 0, QApplication::UnicodeUTF8));
        label_Amp_2->setText(QApplication::translate("ShortLocaterClass", "FUSE", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ShortLocaterClass", "CH2", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ShortLocaterClass", "CH1", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ShortLocaterClass", "DSO", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ShortLocaterClass", "QSM-VI/ICM/SHORT LOCATOR", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ShortLocaterClass", "SHORT\n"
"LOCATOR", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ShortLocaterClass", "GUARD", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ShortLocaterClass", "VI1", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ShortLocaterClass", "EXTERNAL", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ShortLocaterClass", "AWG", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ShortLocaterClass", "FG", 0, QApplication::UnicodeUTF8));
        V51KHz->setText(QApplication::translate("ShortLocaterClass", "5V 1KHz", 0, QApplication::UnicodeUTF8));
        REF_GND_Cap->setText(QApplication::translate("ShortLocaterClass", "REF GND", 0, QApplication::UnicodeUTF8));
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
        splashLabel->setText(QApplication::translate("ShortLocaterClass", "OFFSET APPLYING.....", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShortLocaterClass: public Ui_ShortLocaterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTLOCATER_H
