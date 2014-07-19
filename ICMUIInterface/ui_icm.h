/********************************************************************************
** Form generated from reading UI file 'icm.ui'
**
** Created: Sat Jul 19 10:51:08 2014
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
    QGroupBox *t1Box;
    QPushButton *t1But;
    QGroupBox *lBox;
    QPushButton *lBut;
    QLabel *label_20;
    QFrame *frontPanel;
    QFrame *frame;
    QLabel *label_4w;
    QFrame *DMM2W_P2;
    QFrame *DMMI_P1;
    QFrame *DMM4W_P12;
    QFrame *DMM4W_P1;
    QFrame *DMMI_P12;
    QLabel *label_2w;
    QFrame *DMM2W_P22;
    QFrame *DMM2W_P12;
    QLabel *label_Amp;
    QFrame *DMM2W_P1;
    QLabel *label_27;
    QLabel *label_Amp_2;
    QFrame *DMMI_P12_2;
    QLabel *label_Amp_5;
    QFrame *frame_2;
    QLabel *label_28;
    QLabel *label_29;
    QFrame *dso1_outer;
    QFrame *dso1_inner;
    QFrame *dso_outer;
    QFrame *dso_inner;
    QLabel *label_30;
    QLabel *label_37;
    QFrame *frame_17;
    QFrame *frame_19;
    QLabel *label_53;
    QFrame *frame_29;
    QFrame *frame_30;
    QFrame *frame_3;
    QLabel *label_31;
    QFrame *frame_21;
    QLabel *label_33;
    QFrame *dso_outer_4;
    QLabel *label_55;
    QLabel *label_58;
    QFrame *dso1_outer_4;
    QLabel *label_59;
    QFrame *frame_4;
    QLabel *label_32;
    QLabel *label_34;
    QFrame *dso1_outer_3;
    QFrame *dso1_inner_3;
    QFrame *dso_outer_3;
    QFrame *dso_inner_3;
    QLabel *label_35;
    QLabel *label_38;
    QFrame *frame_20;
    QFrame *frame_22;
    QLabel *label_54;
    QFrame *frame_31;
    QFrame *frame_32;
    QFrame *frame_7;
    QLabel *label_56;
    QFrame *DMM4W_P1_4;
    QFrame *frame_23;
    QFrame *DMM4W_P1_3;
    QFrame *frame_33;
    QLabel *label_36;
    QLabel *label_57;

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
        selectFrame = new QFrame(centralWidget);
        selectFrame->setObjectName(QString::fromUtf8("selectFrame"));
        selectFrame->setGeometry(QRect(701, 50, 10, 60));
        selectFrame->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-top:1px solid white;\n"
"border-bottom:1px solid white;"));
        selectFrame->setFrameShape(QFrame::Box);
        selectFrame->setFrameShadow(QFrame::Raised);
        cBox = new QGroupBox(centralWidget);
        cBox->setObjectName(QString::fromUtf8("cBox"));
        cBox->setGeometry(QRect(710, 211, 80, 90));
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
        cBut->setGeometry(QRect(8, 15, 64, 64));
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
        ExitBox->setGeometry(QRect(710, 480, 80, 112));
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
        exit->setGeometry(QRect(2, 14, 64, 80));
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/logout-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon10);
        exit->setIconSize(QSize(70, 70));
        rBox = new QGroupBox(centralWidget);
        rBox->setObjectName(QString::fromUtf8("rBox"));
        rBox->setGeometry(QRect(710, 32, 80, 90));
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
        rBut->setGeometry(QRect(8, 18, 64, 64));
        rBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/R1.png"), QSize(), QIcon::Normal, QIcon::Off);
        rBut->setIcon(icon11);
        rBut->setIconSize(QSize(60, 60));
        label_19 = new QLabel(rBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(45, 60, 20, 20));
        label_19->setFont(font8);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t2Box = new QGroupBox(centralWidget);
        t2Box->setObjectName(QString::fromUtf8("t2Box"));
        t2Box->setGeometry(QRect(710, 390, 80, 90));
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
        t2But->setGeometry(QRect(8, 15, 64, 64));
        t2But->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        t2But->setIconSize(QSize(55, 55));
        t1Box = new QGroupBox(centralWidget);
        t1Box->setObjectName(QString::fromUtf8("t1Box"));
        t1Box->setGeometry(QRect(710, 300, 80, 90));
        t1Box->setFont(font11);
        t1Box->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        t1But = new QPushButton(t1Box);
        t1But->setObjectName(QString::fromUtf8("t1But"));
        t1But->setGeometry(QRect(8, 15, 64, 64));
        t1But->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        t1But->setIconSize(QSize(55, 55));
        lBox = new QGroupBox(centralWidget);
        lBox->setObjectName(QString::fromUtf8("lBox"));
        lBox->setGeometry(QRect(710, 121, 80, 90));
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
        lBut->setGeometry(QRect(8, 17, 64, 64));
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
        frontPanel = new QFrame(centralWidget);
        frontPanel->setObjectName(QString::fromUtf8("frontPanel"));
        frontPanel->setGeometry(QRect(10, 434, 693, 160));
        frontPanel->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        frontPanel->setFrameShape(QFrame::StyledPanel);
        frontPanel->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frontPanel);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(328, 81, 300, 76));
        frame->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4w = new QLabel(frame);
        label_4w->setObjectName(QString::fromUtf8("label_4w"));
        label_4w->setGeometry(QRect(243, 60, 20, 15));
        QFont font13;
        font13.setFamily(QString::fromUtf8("DejaVu Sans"));
        font13.setPointSize(11);
        font13.setBold(false);
        font13.setWeight(50);
        label_4w->setFont(font13);
        label_4w->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P2 = new QFrame(frame);
        DMM2W_P2->setObjectName(QString::fromUtf8("DMM2W_P2"));
        DMM2W_P2->setGeometry(QRect(80, 25, 31, 31));
        DMM2W_P2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P2->setFrameShape(QFrame::StyledPanel);
        DMM2W_P2->setFrameShadow(QFrame::Raised);
        DMMI_P1 = new QFrame(frame);
        DMMI_P1->setObjectName(QString::fromUtf8("DMMI_P1"));
        DMMI_P1->setGeometry(QRect(130, 25, 31, 31));
        DMMI_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
"\n"
""));
        DMMI_P1->setFrameShape(QFrame::StyledPanel);
        DMMI_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P12 = new QFrame(frame);
        DMM4W_P12->setObjectName(QString::fromUtf8("DMM4W_P12"));
        DMM4W_P12->setGeometry(QRect(235, 20, 41, 41));
        DMM4W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P12->setFrameShape(QFrame::StyledPanel);
        DMM4W_P12->setFrameShadow(QFrame::Raised);
        DMM4W_P1 = new QFrame(frame);
        DMM4W_P1->setObjectName(QString::fromUtf8("DMM4W_P1"));
        DMM4W_P1->setGeometry(QRect(240, 25, 31, 31));
        DMM4W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P1->setFrameShape(QFrame::StyledPanel);
        DMM4W_P1->setFrameShadow(QFrame::Raised);
        DMMI_P12 = new QFrame(frame);
        DMMI_P12->setObjectName(QString::fromUtf8("DMMI_P12"));
        DMMI_P12->setGeometry(QRect(125, 20, 41, 41));
        DMMI_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMMI_P12->setFrameShape(QFrame::StyledPanel);
        DMMI_P12->setFrameShadow(QFrame::Raised);
        label_2w = new QLabel(frame);
        label_2w->setObjectName(QString::fromUtf8("label_2w"));
        label_2w->setGeometry(QRect(35, 60, 20, 17));
        label_2w->setFont(font13);
        label_2w->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_2w->setAlignment(Qt::AlignCenter);
        DMM2W_P22 = new QFrame(frame);
        DMM2W_P22->setObjectName(QString::fromUtf8("DMM2W_P22"));
        DMM2W_P22->setGeometry(QRect(75, 20, 41, 41));
        DMM2W_P22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P22->setFrameShape(QFrame::StyledPanel);
        DMM2W_P22->setFrameShadow(QFrame::Raised);
        DMM2W_P12 = new QFrame(frame);
        DMM2W_P12->setObjectName(QString::fromUtf8("DMM2W_P12"));
        DMM2W_P12->setGeometry(QRect(25, 20, 41, 41));
        DMM2W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P12->setFrameShape(QFrame::StyledPanel);
        DMM2W_P12->setFrameShadow(QFrame::Raised);
        label_Amp = new QLabel(frame);
        label_Amp->setObjectName(QString::fromUtf8("label_Amp"));
        label_Amp->setGeometry(QRect(83, 60, 20, 17));
        label_Amp->setFont(font13);
        label_Amp->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P1 = new QFrame(frame);
        DMM2W_P1->setObjectName(QString::fromUtf8("DMM2W_P1"));
        DMM2W_P1->setGeometry(QRect(30, 25, 31, 31));
        DMM2W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P1->setFrameShape(QFrame::StyledPanel);
        DMM2W_P1->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(6, 3, 287, 16));
        QFont font14;
        font14.setFamily(QString::fromUtf8("DejaVu Sans"));
        font14.setBold(true);
        font14.setWeight(75);
        label_27->setFont(font14);
        label_27->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_27->setAlignment(Qt::AlignCenter);
        label_Amp_2 = new QLabel(frame);
        label_Amp_2->setObjectName(QString::fromUtf8("label_Amp_2"));
        label_Amp_2->setGeometry(QRect(176, 60, 50, 17));
        label_Amp_2->setFont(font13);
        label_Amp_2->setStyleSheet(QString::fromUtf8("color:black;"));
        DMMI_P12_2 = new QFrame(frame);
        DMMI_P12_2->setObjectName(QString::fromUtf8("DMMI_P12_2"));
        DMMI_P12_2->setGeometry(QRect(178, 16, 44, 50));
        DMMI_P12_2->setStyleSheet(QString::fromUtf8("border:1px solid rgba(0,0,0,0);\n"
"image: url(:/fuse.png);"));
        DMMI_P12_2->setFrameShape(QFrame::StyledPanel);
        DMMI_P12_2->setFrameShadow(QFrame::Raised);
        label_Amp_5 = new QLabel(frame);
        label_Amp_5->setObjectName(QString::fromUtf8("label_Amp_5"));
        label_Amp_5->setGeometry(QRect(129, 60, 35, 17));
        label_Amp_5->setFont(font13);
        label_Amp_5->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_2 = new QFrame(frontPanel);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(328, 3, 300, 76));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(97, 59, 38, 17));
        label_28->setFont(font13);
        label_28->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(23, 59, 38, 17));
        label_29->setFont(font13);
        label_29->setStyleSheet(QString::fromUtf8("color:gray;"));
        dso1_outer = new QFrame(frame_2);
        dso1_outer->setObjectName(QString::fromUtf8("dso1_outer"));
        dso1_outer->setGeometry(QRect(22, 20, 41, 41));
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
        dso_outer->setGeometry(QRect(96, 20, 41, 41));
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
        label_30->setGeometry(QRect(7, 3, 287, 16));
        label_30->setFont(font14);
        label_30->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_30->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(frame_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(238, 59, 43, 17));
        label_37->setFont(font13);
        label_37->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_17 = new QFrame(frame_2);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(237, 20, 41, 41));
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
        label_53 = new QLabel(frame_2);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(168, 59, 35, 17));
        label_53->setFont(font13);
        label_53->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_29 = new QFrame(frame_2);
        frame_29->setObjectName(QString::fromUtf8("frame_29"));
        frame_29->setGeometry(QRect(167, 20, 41, 41));
        frame_29->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        frame_30 = new QFrame(frame_29);
        frame_30->setObjectName(QString::fromUtf8("frame_30"));
        frame_30->setGeometry(QRect(16, 15, 10, 10));
        frame_30->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frontPanel);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(18, 80, 300, 76));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frame_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(6, 3, 287, 16));
        label_31->setFont(font14);
        label_31->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_31->setAlignment(Qt::AlignCenter);
        frame_21 = new QFrame(frame_3);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(195, 26, 80, 30));
        frame_21->setStyleSheet(QString::fromUtf8("image: url(:/Symbols/15PinDIN.png);\n"
" border:0px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(140, 119, 60, 17));
        label_33->setFont(font13);
        label_33->setStyleSheet(QString::fromUtf8("color:black;"));
        dso_outer_4 = new QFrame(frame_3);
        dso_outer_4->setObjectName(QString::fromUtf8("dso_outer_4"));
        dso_outer_4->setGeometry(QRect(110, 20, 41, 41));
        dso_outer_4->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso_outer_4->setFrameShape(QFrame::StyledPanel);
        dso_outer_4->setFrameShadow(QFrame::Raised);
        label_55 = new QLabel(frame_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(0, 59, 84, 17));
        label_55->setFont(font13);
        label_55->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_58 = new QLabel(frame_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(80, 59, 100, 17));
        label_58->setFont(font13);
        label_58->setStyleSheet(QString::fromUtf8("color:gray;"));
        dso1_outer_4 = new QFrame(frame_3);
        dso1_outer_4->setObjectName(QString::fromUtf8("dso1_outer_4"));
        dso1_outer_4->setGeometry(QRect(24, 20, 41, 41));
        dso1_outer_4->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso1_outer_4->setFrameShape(QFrame::StyledPanel);
        dso1_outer_4->setFrameShadow(QFrame::Raised);
        label_59 = new QLabel(frame_3);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(190, 58, 90, 17));
        label_59->setFont(font13);
        label_59->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_4 = new QFrame(frontPanel);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(18, 3, 300, 76));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_32 = new QLabel(frame_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(97, 59, 38, 17));
        label_32->setFont(font13);
        label_32->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_34 = new QLabel(frame_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(23, 59, 38, 17));
        label_34->setFont(font13);
        label_34->setStyleSheet(QString::fromUtf8("color:gray;"));
        dso1_outer_3 = new QFrame(frame_4);
        dso1_outer_3->setObjectName(QString::fromUtf8("dso1_outer_3"));
        dso1_outer_3->setGeometry(QRect(22, 20, 41, 41));
        dso1_outer_3->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso1_outer_3->setFrameShape(QFrame::StyledPanel);
        dso1_outer_3->setFrameShadow(QFrame::Raised);
        dso1_inner_3 = new QFrame(dso1_outer_3);
        dso1_inner_3->setObjectName(QString::fromUtf8("dso1_inner_3"));
        dso1_inner_3->setGeometry(QRect(15, 15, 10, 10));
        dso1_inner_3->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso1_inner_3->setFrameShape(QFrame::StyledPanel);
        dso1_inner_3->setFrameShadow(QFrame::Raised);
        dso_outer_3 = new QFrame(frame_4);
        dso_outer_3->setObjectName(QString::fromUtf8("dso_outer_3"));
        dso_outer_3->setGeometry(QRect(96, 20, 41, 41));
        dso_outer_3->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso_outer_3->setFrameShape(QFrame::StyledPanel);
        dso_outer_3->setFrameShadow(QFrame::Raised);
        dso_inner_3 = new QFrame(dso_outer_3);
        dso_inner_3->setObjectName(QString::fromUtf8("dso_inner_3"));
        dso_inner_3->setGeometry(QRect(15, 15, 10, 10));
        dso_inner_3->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso_inner_3->setFrameShape(QFrame::StyledPanel);
        dso_inner_3->setFrameShadow(QFrame::Raised);
        label_35 = new QLabel(frame_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(7, 3, 287, 16));
        label_35->setFont(font14);
        label_35->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_35->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(frame_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(237, 59, 43, 17));
        label_38->setFont(font13);
        label_38->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_20 = new QFrame(frame_4);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setGeometry(QRect(237, 20, 41, 41));
        frame_20->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        frame_22 = new QFrame(frame_20);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setGeometry(QRect(16, 15, 10, 10));
        frame_22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        label_54 = new QLabel(frame_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(167, 59, 35, 17));
        label_54->setFont(font13);
        label_54->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_31 = new QFrame(frame_4);
        frame_31->setObjectName(QString::fromUtf8("frame_31"));
        frame_31->setGeometry(QRect(167, 20, 41, 41));
        frame_31->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        frame_32 = new QFrame(frame_31);
        frame_32->setObjectName(QString::fromUtf8("frame_32"));
        frame_32->setGeometry(QRect(16, 15, 10, 10));
        frame_32->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frontPanel);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(638, 4, 40, 152));
        frame_7->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_56 = new QLabel(frame_7);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(140, 119, 60, 17));
        label_56->setFont(font13);
        label_56->setStyleSheet(QString::fromUtf8("color:black;"));
        DMM4W_P1_4 = new QFrame(frame_7);
        DMM4W_P1_4->setObjectName(QString::fromUtf8("DMM4W_P1_4"));
        DMM4W_P1_4->setGeometry(QRect(7, 31, 27, 27));
        DMM4W_P1_4->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:12px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P1_4->setFrameShape(QFrame::StyledPanel);
        DMM4W_P1_4->setFrameShadow(QFrame::Raised);
        frame_23 = new QFrame(DMM4W_P1_4);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setGeometry(QRect(8, 9, 10, 10));
        frame_23->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        DMM4W_P1_3 = new QFrame(frame_7);
        DMM4W_P1_3->setObjectName(QString::fromUtf8("DMM4W_P1_3"));
        DMM4W_P1_3->setGeometry(QRect(5, 103, 31, 31));
        DMM4W_P1_3->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P1_3->setFrameShape(QFrame::StyledPanel);
        DMM4W_P1_3->setFrameShadow(QFrame::Raised);
        frame_33 = new QFrame(DMM4W_P1_3);
        frame_33->setObjectName(QString::fromUtf8("frame_33"));
        frame_33->setGeometry(QRect(10, 10, 10, 10));
        frame_33->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Raised);
        label_36 = new QLabel(frame_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(4, 5, 34, 16));
        label_36->setFont(font14);
        label_36->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_36->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(frame_7);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(3, 79, 34, 16));
        label_57->setFont(font14);
        label_57->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_57->setAlignment(Qt::AlignCenter);
        ICM->setCentralWidget(centralWidget);
        debugPanel->raise();
        frontPanel->raise();
        displayBox->raise();
        Components->raise();
        cBox->raise();
        ExitBox->raise();
        rBox->raise();
        t2Box->raise();
        t1Box->raise();
        lBox->raise();
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
        cBox->setTitle(QString());
        cBut->setText(QString());
        label_21->setText(QApplication::translate("ICM", "C", 0, QApplication::UnicodeUTF8));
        ExitBox->setTitle(QString());
        exit->setText(QString());
        rBox->setTitle(QString());
        label_19->setText(QApplication::translate("ICM", "R", 0, QApplication::UnicodeUTF8));
        t2Box->setTitle(QString());
        t2But->setText(QString());
        t1Box->setTitle(QString());
        t1But->setText(QString());
        lBox->setTitle(QString());
        lBut->setText(QString());
        label_20->setText(QApplication::translate("ICM", "L", 0, QApplication::UnicodeUTF8));
        label_4w->setText(QApplication::translate("ICM", "A", 0, QApplication::UnicodeUTF8));
        label_2w->setText(QApplication::translate("ICM", "V", 0, QApplication::UnicodeUTF8));
        label_Amp->setText(QApplication::translate("ICM", "C", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ICM", "DIGITAL MULTI METER", 0, QApplication::UnicodeUTF8));
        label_Amp_2->setText(QApplication::translate("ICM", "FUSE", 0, QApplication::UnicodeUTF8));
        label_Amp_5->setText(QApplication::translate("ICM", "mA", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ICM", "CH2", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ICM", "CH1", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ICM", "DSO / AWG", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ICM", "AWG", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("ICM", "EXT", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ICM", "QSM-VI/ICM/SHORT LOCATOR", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ICM", "GUARD", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("ICM", "VI1/SL/ICM", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("ICM", "VI2/EXT MUX", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("ICM", "GUARDING", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ICM", "AH3", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ICM", "AH1", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ICM", "AH EXTERNAL CHANNEL", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("ICM", "AH0", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("ICM", "AH2", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("ICM", "GUARD", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ICM", "REF", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("ICM", "GND", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ICM: public Ui_ICM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICM_H
