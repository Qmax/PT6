/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Jul 23 14:23:21 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *deleteBox;
    QPushButton *deleteButton;
    QGroupBox *ExitBox;
    QPushButton *exit;
    QGroupBox *PCBox;
    QPushButton *butProClip;
    QLabel *singleCap_7;
    QFrame *selectFrame;
    QGroupBox *storeBox;
    QPushButton *storeButton;
    QGroupBox *CalibBox;
    QPushButton *ohmMeter_3;
    QPushButton *calibButton;
    QGroupBox *startBox;
    QPushButton *startButton;
    QGroupBox *grpInteractive;
    QGroupBox *Parameters;
    QPushButton *butUP;
    QPushButton *butDown;
    QLabel *lblFrequency;
    QLabel *lblImpedance;
    QLabel *lblVoltage;
    QLabel *lblnxtImpedance;
    QLabel *lblPrevFrequency;
    QLabel *lblPrevVoltage;
    QLabel *lblnxtVoltage;
    QLabel *lblPrevImpedance;
    QLabel *lblnxtFrequecy;
    QToolButton *tblImpedance;
    QToolButton *tblFrequency;
    QGroupBox *grpProbes;
    QPushButton *butProbe;
    QPushButton *butAM;
    QLabel *singleCap_2;
    QLabel *singleCap_6;
    QFrame *line;
    QLabel *lblProbeType;
    QGroupBox *groupBox_2;
    QPushButton *butProbe1;
    QPushButton *butProbe2;
    QPushButton *butExternal;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblProbe1;
    QLabel *lblProbe2;
    QLabel *lblExternal;
    QLabel *lblExternal_2;
    QPushButton *butExternal_2;
    QGroupBox *grpError;
    QLineEdit *lblPassFail;
    QToolButton *redPallete;
    QLineEdit *edtErrPercentage;
    QToolButton *errPallete;
    QLabel *lblClip_7;
    QLabel *lblProbeComparison_2;
    QGroupBox *grpEmbedded;
    QFrame *line_16;
    QLineEdit *lblLeft;
    QLineEdit *lblMiddle;
    QLineEdit *lblRight;
    QFrame *line_17;
    QFrame *line_18;
    QPushButton *butL;
    QPushButton *butM;
    QPushButton *butR;
    QToolButton *tblVoltage;
    QToolButton *tblVI;
    QToolButton *tblVT;
    QGroupBox *grpClip;
    QPushButton *butClip;
    QPushButton *butLearn;
    QPushButton *butVerify;
    QPushButton *butViewTrace;
    QLabel *singleCap_8;
    QFrame *line_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *lblClip;
    QLabel *lblClip_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *lblClip_5;
    QLabel *lblClip_3;
    QLabel *lblClip_8;
    QLabel *lblClip_6;
    QLabel *lblClip_4;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *lblRefereceType;
    QLabel *lblNC;
    QLabel *lblDriveSettings;
    QLabel *lblComparisonMode;
    QLabel *lblTestStatus;
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
    QLabel *label_33;
    QFrame *vi2;
    QLabel *label_55;
    QLabel *label_58;
    QFrame *vi1;
    QLabel *label_59;
    QFrame *frame_21;
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
    QFrame *debugPanel;
    QFrame *frame_5;
    QLabel *label_41;
    QDoubleSpinBox *yAxisBox;
    QLabel *xAxis;
    QLabel *YAxis;
    QDoubleSpinBox *xAxisBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
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
        centralWidget->setPalette(palette);
        deleteBox = new QGroupBox(centralWidget);
        deleteBox->setObjectName(QString::fromUtf8("deleteBox"));
        deleteBox->setGeometry(QRect(710, 301, 80, 90));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        deleteBox->setFont(font);
        deleteBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:1px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        deleteButton = new QPushButton(deleteBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(10, 20, 64, 64));
        deleteButton->setFont(font);
        deleteButton->setFocusPolicy(Qt::NoFocus);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon);
        deleteButton->setIconSize(QSize(64, 64));
        ExitBox = new QGroupBox(centralWidget);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 480, 80, 112));
        ExitBox->setFont(font);
        ExitBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:0px solid white; background-color: #dadbde;border-radius:10px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
"}\n"
""));
        exit = new QPushButton(ExitBox);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(2, 14, 64, 80));
        exit->setFont(font);
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;\n"
"	image: url(:/res/logout-icon.png);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/logout-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon1);
        exit->setIconSize(QSize(70, 70));
        PCBox = new QGroupBox(centralWidget);
        PCBox->setObjectName(QString::fromUtf8("PCBox"));
        PCBox->setEnabled(true);
        PCBox->setGeometry(QRect(710, 32, 80, 90));
        PCBox->setFont(font);
        PCBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        butProClip = new QPushButton(PCBox);
        butProClip->setObjectName(QString::fromUtf8("butProClip"));
        butProClip->setGeometry(QRect(9, 7, 61, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 1, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(26, 116, 219, 255));
        gradient.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush2(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 1, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(26, 116, 219, 255));
        gradient1.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush3(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        QLinearGradient gradient2(0, 1, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(26, 116, 219, 255));
        gradient2.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush4(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 1, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(26, 116, 219, 255));
        gradient3.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush5(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 1, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(26, 116, 219, 255));
        gradient4.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush6(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        QLinearGradient gradient5(0, 1, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(26, 116, 219, 255));
        gradient5.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush7(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush8(QColor(211, 211, 211, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        QBrush brush9(QColor(128, 128, 128, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        butProClip->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        butProClip->setFont(font1);
        butProClip->setFocusPolicy(Qt::NoFocus);
        butProClip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/Probe.png"), QSize(), QIcon::Normal, QIcon::Off);
        butProClip->setIcon(icon2);
        butProClip->setIconSize(QSize(64, 64));
        singleCap_7 = new QLabel(PCBox);
        singleCap_7->setObjectName(QString::fromUtf8("singleCap_7"));
        singleCap_7->setGeometry(QRect(10, 68, 71, 20));
        singleCap_7->setFont(font1);
        singleCap_7->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        selectFrame = new QFrame(centralWidget);
        selectFrame->setObjectName(QString::fromUtf8("selectFrame"));
        selectFrame->setGeometry(QRect(702, 50, 9, 60));
        selectFrame->setFont(font);
        selectFrame->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-top:1px solid white;\n"
"border-bottom:1px solid white;"));
        selectFrame->setFrameShape(QFrame::Box);
        selectFrame->setFrameShadow(QFrame::Raised);
        storeBox = new QGroupBox(centralWidget);
        storeBox->setObjectName(QString::fromUtf8("storeBox"));
        storeBox->setGeometry(QRect(710, 211, 80, 90));
        storeBox->setFont(font);
        storeBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:1px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        storeButton = new QPushButton(storeBox);
        storeButton->setObjectName(QString::fromUtf8("storeButton"));
        storeButton->setEnabled(true);
        storeButton->setGeometry(QRect(10, 14, 64, 64));
        storeButton->setFont(font);
        storeButton->setFocusPolicy(Qt::NoFocus);
        storeButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/Store.png"), QSize(), QIcon::Normal, QIcon::Off);
        storeButton->setIcon(icon3);
        storeButton->setIconSize(QSize(64, 64));
        CalibBox = new QGroupBox(centralWidget);
        CalibBox->setObjectName(QString::fromUtf8("CalibBox"));
        CalibBox->setGeometry(QRect(710, 390, 80, 90));
        CalibBox->setFont(font);
        CalibBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:1px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        ohmMeter_3 = new QPushButton(CalibBox);
        ohmMeter_3->setObjectName(QString::fromUtf8("ohmMeter_3"));
        ohmMeter_3->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_3->setFont(font);
        ohmMeter_3->setFocusPolicy(Qt::NoFocus);
        ohmMeter_3->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"	image: url(:/res/Awgb.png);}"));
        ohmMeter_3->setIconSize(QSize(55, 55));
        calibButton = new QPushButton(CalibBox);
        calibButton->setObjectName(QString::fromUtf8("calibButton"));
        calibButton->setEnabled(true);
        calibButton->setGeometry(QRect(10, 14, 64, 64));
        calibButton->setFont(font);
        calibButton->setFocusPolicy(Qt::NoFocus);
        calibButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/Calibar.png"), QSize(), QIcon::Normal, QIcon::Off);
        calibButton->setIcon(icon4);
        calibButton->setIconSize(QSize(64, 64));
        startBox = new QGroupBox(centralWidget);
        startBox->setObjectName(QString::fromUtf8("startBox"));
        startBox->setEnabled(true);
        startBox->setGeometry(QRect(710, 121, 80, 90));
        startBox->setFont(font);
        startBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:1px;\n"
"border-top:1px qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"border-top:1px solid gray;\n"
";border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        startButton = new QPushButton(startBox);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(true);
        startButton->setGeometry(QRect(10, 20, 64, 64));
        startButton->setFont(font);
        startButton->setFocusPolicy(Qt::NoFocus);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"}\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/Start.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon5);
        startButton->setIconSize(QSize(64, 64));
        grpInteractive = new QGroupBox(centralWidget);
        grpInteractive->setObjectName(QString::fromUtf8("grpInteractive"));
        grpInteractive->setGeometry(QRect(10, 33, 693, 390));
        grpInteractive->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border:1px solid white;\n"
"border-bottom:0px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        Parameters = new QGroupBox(grpInteractive);
        Parameters->setObjectName(QString::fromUtf8("Parameters"));
        Parameters->setGeometry(QRect(10, 280, 320, 104));
        Parameters->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"\n"
"border:1px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        butUP = new QPushButton(Parameters);
        butUP->setObjectName(QString::fromUtf8("butUP"));
        butUP->setGeometry(QRect(261, 10, 60, 40));
        butUP->setFocusPolicy(Qt::NoFocus);
        butUP->setStyleSheet(QString::fromUtf8("border:0px rgba(0,0,0,0);\n"
"background-color:rgba(0,0,0,0)"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/up-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        butUP->setIcon(icon6);
        butUP->setIconSize(QSize(54, 54));
        butDown = new QPushButton(Parameters);
        butDown->setObjectName(QString::fromUtf8("butDown"));
        butDown->setGeometry(QRect(263, 54, 60, 40));
        butDown->setFocusPolicy(Qt::NoFocus);
        butDown->setStyleSheet(QString::fromUtf8("\n"
"border:0px rgba(0,0,0,0);\n"
"background-color:rgba(0,0,0,0);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/down-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        butDown->setIcon(icon7);
        butDown->setIconSize(QSize(54, 54));
        lblFrequency = new QLabel(Parameters);
        lblFrequency->setObjectName(QString::fromUtf8("lblFrequency"));
        lblFrequency->setGeometry(QRect(170, 39, 81, 31));
        QPalette palette2;
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        QBrush brush11(QColor(242, 164, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        lblFrequency->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferAntialias);
        lblFrequency->setFont(font2);
        lblFrequency->setFocusPolicy(Qt::StrongFocus);
        lblFrequency->setStyleSheet(QString::fromUtf8("QLabel {color:black;border: rgba(0,0,0,0);background-color: #f2a400;}"));
        lblFrequency->setFrameShape(QFrame::WinPanel);
        lblFrequency->setFrameShadow(QFrame::Raised);
        lblFrequency->setAlignment(Qt::AlignCenter);
        lblImpedance = new QLabel(Parameters);
        lblImpedance->setObjectName(QString::fromUtf8("lblImpedance"));
        lblImpedance->setGeometry(QRect(90, 39, 70, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        lblImpedance->setPalette(palette3);
        lblImpedance->setFont(font2);
        lblImpedance->setFocusPolicy(Qt::StrongFocus);
        lblImpedance->setLayoutDirection(Qt::LeftToRight);
        lblImpedance->setStyleSheet(QString::fromUtf8("QLabel {color:black;border: rgba(0,0,0,0);background-color: #f2a400;}"));
        lblImpedance->setFrameShape(QFrame::WinPanel);
        lblImpedance->setFrameShadow(QFrame::Raised);
        lblImpedance->setAlignment(Qt::AlignCenter);
        lblVoltage = new QLabel(Parameters);
        lblVoltage->setObjectName(QString::fromUtf8("lblVoltage"));
        lblVoltage->setGeometry(QRect(8, 39, 70, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        lblVoltage->setPalette(palette4);
        lblVoltage->setFont(font2);
        lblVoltage->setFocusPolicy(Qt::StrongFocus);
        lblVoltage->setStyleSheet(QString::fromUtf8("QLabel {color:black;border: rgba(0,0,0,0);background-color: #f2a400;}"));
        lblVoltage->setFrameShape(QFrame::WinPanel);
        lblVoltage->setFrameShadow(QFrame::Raised);
        lblVoltage->setLineWidth(1);
        lblVoltage->setAlignment(Qt::AlignCenter);
        lblnxtImpedance = new QLabel(Parameters);
        lblnxtImpedance->setObjectName(QString::fromUtf8("lblnxtImpedance"));
        lblnxtImpedance->setGeometry(QRect(90, 10, 70, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        QBrush brush12(QColor(0, 0, 0, 0));
        brush12.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(39, 120, 134, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(32, 100, 111, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(13, 40, 44, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(17, 53, 59, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        QBrush brush17(QColor(255, 255, 220, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        QBrush brush18(QColor(26, 80, 89, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblnxtImpedance->setPalette(palette5);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setStyleStrategy(QFont::PreferAntialias);
        lblnxtImpedance->setFont(font3);
        lblnxtImpedance->setCursor(QCursor(Qt::BlankCursor));
        lblnxtImpedance->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblnxtImpedance->setFrameShadow(QFrame::Plain);
        lblnxtImpedance->setAlignment(Qt::AlignCenter);
        lblPrevFrequency = new QLabel(Parameters);
        lblPrevFrequency->setObjectName(QString::fromUtf8("lblPrevFrequency"));
        lblPrevFrequency->setGeometry(QRect(164, 78, 91, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblPrevFrequency->setPalette(palette6);
        lblPrevFrequency->setFont(font3);
        lblPrevFrequency->setCursor(QCursor(Qt::BlankCursor));
        lblPrevFrequency->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblPrevFrequency->setFrameShadow(QFrame::Plain);
        lblPrevFrequency->setAlignment(Qt::AlignCenter);
        lblPrevVoltage = new QLabel(Parameters);
        lblPrevVoltage->setObjectName(QString::fromUtf8("lblPrevVoltage"));
        lblPrevVoltage->setGeometry(QRect(10, 78, 70, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush19(QColor(135, 135, 135, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush19);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblPrevVoltage->setPalette(palette7);
        lblPrevVoltage->setFont(font3);
        lblPrevVoltage->setCursor(QCursor(Qt::BlankCursor));
        lblPrevVoltage->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblPrevVoltage->setFrameShadow(QFrame::Plain);
        lblPrevVoltage->setTextFormat(Qt::PlainText);
        lblPrevVoltage->setAlignment(Qt::AlignCenter);
        lblnxtVoltage = new QLabel(Parameters);
        lblnxtVoltage->setObjectName(QString::fromUtf8("lblnxtVoltage"));
        lblnxtVoltage->setGeometry(QRect(10, 10, 70, 20));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblnxtVoltage->setPalette(palette8);
        lblnxtVoltage->setFont(font3);
        lblnxtVoltage->setCursor(QCursor(Qt::BlankCursor));
        lblnxtVoltage->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblnxtVoltage->setFrameShadow(QFrame::Plain);
        lblnxtVoltage->setAlignment(Qt::AlignCenter);
        lblPrevImpedance = new QLabel(Parameters);
        lblPrevImpedance->setObjectName(QString::fromUtf8("lblPrevImpedance"));
        lblPrevImpedance->setGeometry(QRect(91, 78, 70, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblPrevImpedance->setPalette(palette9);
        lblPrevImpedance->setFont(font3);
        lblPrevImpedance->setCursor(QCursor(Qt::BlankCursor));
        lblPrevImpedance->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblPrevImpedance->setFrameShadow(QFrame::Plain);
        lblPrevImpedance->setAlignment(Qt::AlignCenter);
        lblnxtFrequecy = new QLabel(Parameters);
        lblnxtFrequecy->setObjectName(QString::fromUtf8("lblnxtFrequecy"));
        lblnxtFrequecy->setGeometry(QRect(164, 12, 91, 20));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblnxtFrequecy->setPalette(palette10);
        lblnxtFrequecy->setFont(font3);
        lblnxtFrequecy->setCursor(QCursor(Qt::BlankCursor));
        lblnxtFrequecy->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"color:gray;"));
        lblnxtFrequecy->setFrameShadow(QFrame::Plain);
        lblnxtFrequecy->setAlignment(Qt::AlignCenter);
        tblImpedance = new QToolButton(Parameters);
        tblImpedance->setObjectName(QString::fromUtf8("tblImpedance"));
        tblImpedance->setGeometry(QRect(89, 0, 71, 101));
        tblImpedance->setFont(font);
        tblImpedance->setStyleSheet(QString::fromUtf8("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}"));
        tblFrequency = new QToolButton(Parameters);
        tblFrequency->setObjectName(QString::fromUtf8("tblFrequency"));
        tblFrequency->setGeometry(QRect(170, 1, 81, 101));
        tblFrequency->setStyleSheet(QString::fromUtf8("QWidget{border:0px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}"));
        grpProbes = new QGroupBox(grpInteractive);
        grpProbes->setObjectName(QString::fromUtf8("grpProbes"));
        grpProbes->setEnabled(true);
        grpProbes->setGeometry(QRect(370, 10, 318, 261));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(12);
        grpProbes->setFont(font4);
        grpProbes->setFocusPolicy(Qt::NoFocus);
        grpProbes->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"border:1px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        butProbe = new QPushButton(grpProbes);
        butProbe->setObjectName(QString::fromUtf8("butProbe"));
        butProbe->setGeometry(QRect(10, 4, 64, 64));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        butProbe->setFont(font5);
        butProbe->setFocusPolicy(Qt::NoFocus);
        butProbe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        butProbe->setIcon(icon8);
        butProbe->setIconSize(QSize(70, 70));
        butAM = new QPushButton(grpProbes);
        butAM->setObjectName(QString::fromUtf8("butAM"));
        butAM->setGeometry(QRect(300, 490, 60, 60));
        butAM->setFocusPolicy(Qt::NoFocus);
        butAM->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/pressedOrange.png"), QSize(), QIcon::Normal, QIcon::Off);
        butAM->setIcon(icon9);
        butAM->setIconSize(QSize(48, 48));
        singleCap_2 = new QLabel(grpProbes);
        singleCap_2->setObjectName(QString::fromUtf8("singleCap_2"));
        singleCap_2->setGeometry(QRect(310, 540, 51, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("DejaVu Sans"));
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setWeight(50);
        singleCap_2->setFont(font6);
        singleCap_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        singleCap_6 = new QLabel(grpProbes);
        singleCap_6->setObjectName(QString::fromUtf8("singleCap_6"));
        singleCap_6->setGeometry(QRect(4, 163, 51, 30));
        singleCap_6->setFont(font6);
        singleCap_6->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        line = new QFrame(grpProbes);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(53, 170, 261, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lblProbeType = new QLabel(grpProbes);
        lblProbeType->setObjectName(QString::fromUtf8("lblProbeType"));
        lblProbeType->setGeometry(QRect(97, 27, 70, 23));
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans"));
        font7.setPointSize(14);
        font7.setBold(false);
        font7.setWeight(50);
        lblProbeType->setFont(font7);
        lblProbeType->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        groupBox_2 = new QGroupBox(grpProbes);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 69, 291, 101));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"\n"
"border:0px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        butProbe1 = new QPushButton(groupBox_2);
        butProbe1->setObjectName(QString::fromUtf8("butProbe1"));
        butProbe1->setGeometry(QRect(20, 20, 50, 60));
        butProbe1->setFont(font);
        butProbe1->setFocusPolicy(Qt::NoFocus);
        butProbe1->setStyleSheet(QString::fromUtf8("border:0px rgba(0,0,0,0);\n"
"background-color:rgba(0,0,0,0);\n"
"image:url(:/res/knob_on.svg)\n"
""));
        butProbe1->setIconSize(QSize(48, 48));
        butProbe2 = new QPushButton(groupBox_2);
        butProbe2->setObjectName(QString::fromUtf8("butProbe2"));
        butProbe2->setGeometry(QRect(90, 18, 50, 60));
        butProbe2->setFont(font);
        butProbe2->setFocusPolicy(Qt::NoFocus);
        butProbe2->setStyleSheet(QString::fromUtf8("border:0px rgba(0,0,0,0);\n"
"image: url(:/res/knob_off.svg);\n"
"background-color:rgba(0,0,0,0);\n"
""));
        butProbe2->setIconSize(QSize(48, 48));
        butExternal = new QPushButton(groupBox_2);
        butExternal->setObjectName(QString::fromUtf8("butExternal"));
        butExternal->setGeometry(QRect(160, 20, 50, 60));
        butExternal->setFont(font);
        butExternal->setFocusPolicy(Qt::NoFocus);
        butExternal->setStyleSheet(QString::fromUtf8("border:0px rgba(0,0,0,0);\n"
"image: url(:/res/knob_off.svg);\n"
"background-color:rgba(0,0,0,0);\n"
""));
        butExternal->setIconSize(QSize(48, 48));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 76, 271, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblProbe1 = new QLabel(layoutWidget);
        lblProbe1->setObjectName(QString::fromUtf8("lblProbe1"));
        lblProbe1->setFont(font6);
        lblProbe1->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,255);}"));

        horizontalLayout->addWidget(lblProbe1);

        lblProbe2 = new QLabel(layoutWidget);
        lblProbe2->setObjectName(QString::fromUtf8("lblProbe2"));
        lblProbe2->setFont(font6);
        lblProbe2->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        horizontalLayout->addWidget(lblProbe2);

        lblExternal = new QLabel(layoutWidget);
        lblExternal->setObjectName(QString::fromUtf8("lblExternal"));
        lblExternal->setFont(font6);
        lblExternal->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        horizontalLayout->addWidget(lblExternal);

        lblExternal_2 = new QLabel(layoutWidget);
        lblExternal_2->setObjectName(QString::fromUtf8("lblExternal_2"));
        lblExternal_2->setFont(font6);
        lblExternal_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        horizontalLayout->addWidget(lblExternal_2);

        butExternal_2 = new QPushButton(groupBox_2);
        butExternal_2->setObjectName(QString::fromUtf8("butExternal_2"));
        butExternal_2->setGeometry(QRect(230, 20, 50, 60));
        butExternal_2->setFont(font);
        butExternal_2->setFocusPolicy(Qt::NoFocus);
        butExternal_2->setStyleSheet(QString::fromUtf8("border:0px rgba(0,0,0,0);\n"
"image: url(:/res/knob_off.svg);\n"
"background-color:rgba(0,0,0,0);\n"
""));
        butExternal_2->setIconSize(QSize(48, 48));
        grpError = new QGroupBox(grpProbes);
        grpError->setObjectName(QString::fromUtf8("grpError"));
        grpError->setGeometry(QRect(2, 214, 301, 41));
        grpError->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        lblPassFail = new QLineEdit(grpError);
        lblPassFail->setObjectName(QString::fromUtf8("lblPassFail"));
        lblPassFail->setGeometry(QRect(201, 0, 91, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush20(QColor(89, 109, 163, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush20);
        QBrush brush21(QColor(132, 132, 134, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush21);
        QBrush brush22(QColor(110, 110, 111, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush22);
        QBrush brush23(QColor(44, 44, 44, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush23);
        QBrush brush24(QColor(58, 58, 59, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush24);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush21);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush22);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush24);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush21);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush22);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblPassFail->setPalette(palette11);
        QFont font8;
        font8.setFamily(QString::fromUtf8("DejaVu Sans"));
        font8.setPointSize(24);
        font8.setBold(false);
        font8.setWeight(50);
        lblPassFail->setFont(font8);
        lblPassFail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:10;\n"
"background-color:#596DA3;\n"
"color:white\n"
"}"));
        lblPassFail->setFrame(false);
        lblPassFail->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        lblPassFail->setReadOnly(true);
        redPallete = new QToolButton(grpError);
        redPallete->setObjectName(QString::fromUtf8("redPallete"));
        redPallete->setEnabled(false);
        redPallete->setGeometry(QRect(8, 6, 41, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        QBrush brush25(QColor(255, 0, 0, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush25);
        QBrush brush26(QColor(255, 127, 127, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush26);
        QBrush brush27(QColor(255, 63, 63, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush27);
        QBrush brush28(QColor(127, 0, 0, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush28);
        QBrush brush29(QColor(170, 0, 0, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush29);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush25);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush25);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush26);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush25);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush26);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush27);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush28);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush29);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush25);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush25);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush26);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush28);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush25);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush26);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush27);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush28);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush29);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush28);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush28);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush25);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        redPallete->setPalette(palette12);
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans"));
        font9.setBold(false);
        font9.setWeight(50);
        redPallete->setFont(font9);
        redPallete->setStyleSheet(QString::fromUtf8(""));
        edtErrPercentage = new QLineEdit(grpError);
        edtErrPercentage->setObjectName(QString::fromUtf8("edtErrPercentage"));
        edtErrPercentage->setGeometry(QRect(105, 0, 91, 41));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush21);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush22);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush23);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush24);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush21);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush22);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush23);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush24);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush21);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush22);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush23);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        edtErrPercentage->setPalette(palette13);
        edtErrPercentage->setFont(font8);
        edtErrPercentage->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:10;\n"
"background-color:#596DA3;\n"
"color:white\n"
"}"));
        edtErrPercentage->setFrame(false);
        edtErrPercentage->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        edtErrPercentage->setReadOnly(true);
        errPallete = new QToolButton(grpError);
        errPallete->setObjectName(QString::fromUtf8("errPallete"));
        errPallete->setEnabled(false);
        errPallete->setGeometry(QRect(53, 6, 41, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush21);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush22);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush23);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush24);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush21);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush22);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush23);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush24);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush23);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush21);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush22);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush23);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush23);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush23);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        errPallete->setPalette(palette14);
        errPallete->setFont(font9);
        errPallete->setStyleSheet(QString::fromUtf8(""));
        lblClip_7 = new QLabel(grpProbes);
        lblClip_7->setObjectName(QString::fromUtf8("lblClip_7"));
        lblClip_7->setGeometry(QRect(10, 190, 111, 19));
        QFont font10;
        font10.setFamily(QString::fromUtf8("DejaVu Sans"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        lblClip_7->setFont(font10);
        lblClip_7->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        lblProbeComparison_2 = new QLabel(grpProbes);
        lblProbeComparison_2->setObjectName(QString::fromUtf8("lblProbeComparison_2"));
        lblProbeComparison_2->setGeometry(QRect(130, 190, 129, 19));
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Sans"));
        font11.setPointSize(12);
        font11.setBold(false);
        font11.setWeight(50);
        lblProbeComparison_2->setFont(font11);
        lblProbeComparison_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        grpEmbedded = new QGroupBox(grpInteractive);
        grpEmbedded->setObjectName(QString::fromUtf8("grpEmbedded"));
        grpEmbedded->setGeometry(QRect(338, 280, 350, 104));
        grpEmbedded->setFont(font4);
        grpEmbedded->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"\n"
"border:1px solid white;\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        line_16 = new QFrame(grpEmbedded);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(56, 41, 2, 30));
        line_16->setStyleSheet(QString::fromUtf8("color:blue;\n"
"background-color:blue;"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        lblLeft = new QLineEdit(grpEmbedded);
        lblLeft->setObjectName(QString::fromUtf8("lblLeft"));
        lblLeft->setGeometry(QRect(12, 71, 101, 30));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush20);
        QBrush brush30(QColor(132, 132, 131, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush30);
        QBrush brush31(QColor(110, 110, 109, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush31);
        QBrush brush32(QColor(44, 44, 43, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush32);
        QBrush brush33(QColor(58, 58, 58, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush33);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush32);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush30);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush31);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush32);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush33);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush32);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush32);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush30);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush31);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush32);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush33);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush32);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush32);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        QBrush brush34(QColor(88, 88, 87, 255));
        brush34.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush34);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblLeft->setPalette(palette15);
        lblLeft->setFont(font11);
        lblLeft->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid blue;\n"
"border-radius:10;\n"
"background-color:#596DA3;\n"
"}"));
        lblLeft->setFrame(false);
        lblLeft->setAlignment(Qt::AlignCenter);
        lblLeft->setReadOnly(true);
        lblMiddle = new QLineEdit(grpEmbedded);
        lblMiddle->setObjectName(QString::fromUtf8("lblMiddle"));
        lblMiddle->setGeometry(QRect(122, 71, 101, 30));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush30);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush31);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush32);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush33);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush32);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush30);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush31);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush32);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush33);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush32);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush30);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush31);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush33);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush34);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblMiddle->setPalette(palette16);
        lblMiddle->setFont(font11);
        lblMiddle->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid blue;\n"
"border-radius:10;\n"
"background-color:#596DA3;\n"
"}"));
        lblMiddle->setFrame(false);
        lblMiddle->setAlignment(Qt::AlignCenter);
        lblMiddle->setReadOnly(true);
        lblRight = new QLineEdit(grpEmbedded);
        lblRight->setObjectName(QString::fromUtf8("lblRight"));
        lblRight->setGeometry(QRect(232, 71, 101, 30));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush30);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush31);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush32);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush33);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush32);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush30);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush31);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush32);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush33);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush32);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush30);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush31);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush33);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush34);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        lblRight->setPalette(palette17);
        lblRight->setFont(font11);
        lblRight->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid blue;\n"
"border-radius:10;\n"
"background-color:#596DA3;\n"
"}"));
        lblRight->setFrame(false);
        lblRight->setAlignment(Qt::AlignCenter);
        lblRight->setReadOnly(true);
        line_17 = new QFrame(grpEmbedded);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(167, 41, 2, 30));
        line_17->setStyleSheet(QString::fromUtf8("color:blue;\n"
"background-color:blue;"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(grpEmbedded);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(280, 41, 2, 30));
        line_18->setStyleSheet(QString::fromUtf8("color:blue;\n"
"background-color:blue;"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        butL = new QPushButton(grpEmbedded);
        butL->setObjectName(QString::fromUtf8("butL"));
        butL->setGeometry(QRect(29, 13, 60, 60));
        butL->setFont(font);
        butL->setFocusPolicy(Qt::NoFocus);
        butL->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/48L.png"), QSize(), QIcon::Normal, QIcon::Off);
        butL->setIcon(icon10);
        butL->setIconSize(QSize(64, 64));
        butM = new QPushButton(grpEmbedded);
        butM->setObjectName(QString::fromUtf8("butM"));
        butM->setGeometry(QRect(138, 10, 60, 60));
        butM->setFont(font4);
        butM->setFocusPolicy(Qt::NoFocus);
        butM->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/48M.png"), QSize(), QIcon::Normal, QIcon::Off);
        butM->setIcon(icon11);
        butM->setIconSize(QSize(64, 64));
        butR = new QPushButton(grpEmbedded);
        butR->setObjectName(QString::fromUtf8("butR"));
        butR->setGeometry(QRect(250, 14, 60, 60));
        butR->setFont(font4);
        butR->setFocusPolicy(Qt::NoFocus);
        butR->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/res/48R.png"), QSize(), QIcon::Normal, QIcon::Off);
        butR->setIcon(icon12);
        butR->setIconSize(QSize(64, 64));
        tblVoltage = new QToolButton(grpInteractive);
        tblVoltage->setObjectName(QString::fromUtf8("tblVoltage"));
        tblVoltage->setGeometry(QRect(19, 281, 71, 101));
        tblVoltage->setFont(font);
        tblVoltage->setStyleSheet(QString::fromUtf8("QWidget{border:2px solid white;border-style: ridge;border-radius:20px;background-color: rgba(255,255,255,50);}"));
        tblVI = new QToolButton(grpInteractive);
        tblVI->setObjectName(QString::fromUtf8("tblVI"));
        tblVI->setGeometry(QRect(324, 7, 41, 41));
        QFont font12;
        font12.setFamily(QString::fromUtf8("DejaVu Sans"));
        font12.setPointSize(14);
        tblVI->setFont(font12);
        tblVI->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"color:white;\n"
"border: 2px solid #2D5059;\n"
"border-radius: 0px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"border-top-right-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"\n"
""));
        tblVT = new QToolButton(grpInteractive);
        tblVT->setObjectName(QString::fromUtf8("tblVT"));
        tblVT->setGeometry(QRect(324, 46, 41, 41));
        tblVT->setFont(font12);
        tblVT->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"color:black;\n"
"border: 2px solid #2D5059;\n"
"border-radius: 0px;\n"
"background-color: white;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"\n"
""));
        grpClip = new QGroupBox(grpInteractive);
        grpClip->setObjectName(QString::fromUtf8("grpClip"));
        grpClip->setGeometry(QRect(0, 10, 318, 261));
        grpClip->setFont(font4);
        grpClip->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"\n"
"border:1px solid white;\n"
"\n"
"}\n"
" QGroupBox::title {\n"
"	border:1px solid white;\n"
"	border-radius:5px;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color:white;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
" }"));
        butClip = new QPushButton(grpClip);
        butClip->setObjectName(QString::fromUtf8("butClip"));
        butClip->setGeometry(QRect(7, 3, 64, 64));
        butClip->setFont(font5);
        butClip->setFocusPolicy(Qt::NoFocus);
        butClip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
        butClip->setIcon(icon8);
        butClip->setIconSize(QSize(64, 64));
        butLearn = new QPushButton(grpClip);
        butLearn->setObjectName(QString::fromUtf8("butLearn"));
        butLearn->setGeometry(QRect(62, 66, 71, 51));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient6(0, 1, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(26, 116, 219, 255));
        gradient6.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush35(gradient6);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush35);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0, 1, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(26, 116, 219, 255));
        gradient7.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient7.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush36(gradient7);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush36);
        QLinearGradient gradient8(0, 1, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(26, 116, 219, 255));
        gradient8.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush37(gradient8);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush37);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient9(0, 1, 1, 0);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(26, 116, 219, 255));
        gradient9.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient9.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush38(gradient9);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush38);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient10(0, 1, 1, 0);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(26, 116, 219, 255));
        gradient10.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient10.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush39(gradient10);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush39);
        QLinearGradient gradient11(0, 1, 1, 0);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(26, 116, 219, 255));
        gradient11.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient11.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush40(gradient11);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush40);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        butLearn->setPalette(palette18);
        butLearn->setFont(font7);
        butLearn->setFocusPolicy(Qt::NoFocus);
        butLearn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
        butVerify = new QPushButton(grpClip);
        butVerify->setObjectName(QString::fromUtf8("butVerify"));
        butVerify->setGeometry(QRect(142, 66, 71, 51));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient12(0, 1, 1, 0);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(26, 116, 219, 255));
        gradient12.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient12.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush41(gradient12);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush41);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient13(0, 1, 1, 0);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(26, 116, 219, 255));
        gradient13.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient13.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush42(gradient13);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush42);
        QLinearGradient gradient14(0, 1, 1, 0);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(26, 116, 219, 255));
        gradient14.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient14.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush43(gradient14);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush43);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient15(0, 1, 1, 0);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(26, 116, 219, 255));
        gradient15.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient15.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush44(gradient15);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush44);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient16(0, 1, 1, 0);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(26, 116, 219, 255));
        gradient16.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient16.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush45(gradient16);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush45);
        QLinearGradient gradient17(0, 1, 1, 0);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(26, 116, 219, 255));
        gradient17.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient17.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush46(gradient17);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush46);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        butVerify->setPalette(palette19);
        butVerify->setFont(font7);
        butVerify->setFocusPolicy(Qt::NoFocus);
        butVerify->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        butViewTrace = new QPushButton(grpClip);
        butViewTrace->setObjectName(QString::fromUtf8("butViewTrace"));
        butViewTrace->setGeometry(QRect(220, 66, 71, 51));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient18(0, 1, 1, 0);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(26, 116, 219, 255));
        gradient18.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient18.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush47(gradient18);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush47);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient19(0, 1, 1, 0);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(26, 116, 219, 255));
        gradient19.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient19.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush48(gradient19);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush48);
        QLinearGradient gradient20(0, 1, 1, 0);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(26, 116, 219, 255));
        gradient20.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient20.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush49(gradient20);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush49);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient21(0, 1, 1, 0);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(26, 116, 219, 255));
        gradient21.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient21.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush50(gradient21);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush50);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient22(0, 1, 1, 0);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(26, 116, 219, 255));
        gradient22.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient22.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush51(gradient22);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush51);
        QLinearGradient gradient23(0, 1, 1, 0);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(26, 116, 219, 255));
        gradient23.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient23.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush52(gradient23);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush52);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        butViewTrace->setPalette(palette20);
        butViewTrace->setFont(font11);
        butViewTrace->setFocusPolicy(Qt::NoFocus);
        butViewTrace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
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
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}"));
        singleCap_8 = new QLabel(grpClip);
        singleCap_8->setObjectName(QString::fromUtf8("singleCap_8"));
        singleCap_8->setGeometry(QRect(2, 110, 51, 30));
        singleCap_8->setFont(font6);
        singleCap_8->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));
        line_2 = new QFrame(grpClip);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(52, 118, 261, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(grpClip);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 30, 123, 25));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblClip = new QLabel(layoutWidget1);
        lblClip->setObjectName(QString::fromUtf8("lblClip"));
        lblClip->setFont(font7);
        lblClip->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_3->addWidget(lblClip, 0, 0, 1, 1);

        lblClip_2 = new QLabel(layoutWidget1);
        lblClip_2->setObjectName(QString::fromUtf8("lblClip_2"));
        lblClip_2->setFont(font7);
        lblClip_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_3->addWidget(lblClip_2, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(grpClip);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 136, 147, 117));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblClip_5 = new QLabel(layoutWidget2);
        lblClip_5->setObjectName(QString::fromUtf8("lblClip_5"));
        lblClip_5->setFont(font10);
        lblClip_5->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout->addWidget(lblClip_5, 0, 0, 1, 1);

        lblClip_3 = new QLabel(layoutWidget2);
        lblClip_3->setObjectName(QString::fromUtf8("lblClip_3"));
        lblClip_3->setFont(font10);
        lblClip_3->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout->addWidget(lblClip_3, 1, 0, 1, 1);

        lblClip_8 = new QLabel(layoutWidget2);
        lblClip_8->setObjectName(QString::fromUtf8("lblClip_8"));
        lblClip_8->setFont(font10);
        lblClip_8->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout->addWidget(lblClip_8, 2, 0, 1, 1);

        lblClip_6 = new QLabel(layoutWidget2);
        lblClip_6->setObjectName(QString::fromUtf8("lblClip_6"));
        lblClip_6->setFont(font10);
        lblClip_6->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout->addWidget(lblClip_6, 3, 0, 1, 1);

        lblClip_4 = new QLabel(layoutWidget2);
        lblClip_4->setObjectName(QString::fromUtf8("lblClip_4"));
        lblClip_4->setFont(font10);
        lblClip_4->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout->addWidget(lblClip_4, 4, 0, 1, 1);

        layoutWidget3 = new QWidget(grpClip);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(158, 136, 141, 117));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lblRefereceType = new QLabel(layoutWidget3);
        lblRefereceType->setObjectName(QString::fromUtf8("lblRefereceType"));
        lblRefereceType->setFont(font11);
        lblRefereceType->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_2->addWidget(lblRefereceType, 0, 0, 1, 1);

        lblNC = new QLabel(layoutWidget3);
        lblNC->setObjectName(QString::fromUtf8("lblNC"));
        lblNC->setFont(font11);
        lblNC->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_2->addWidget(lblNC, 1, 0, 1, 1);

        lblDriveSettings = new QLabel(layoutWidget3);
        lblDriveSettings->setObjectName(QString::fromUtf8("lblDriveSettings"));
        lblDriveSettings->setFont(font11);
        lblDriveSettings->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_2->addWidget(lblDriveSettings, 2, 0, 1, 1);

        lblComparisonMode = new QLabel(layoutWidget3);
        lblComparisonMode->setObjectName(QString::fromUtf8("lblComparisonMode"));
        lblComparisonMode->setFont(font11);
        lblComparisonMode->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_2->addWidget(lblComparisonMode, 3, 0, 1, 1);

        lblTestStatus = new QLabel(layoutWidget3);
        lblTestStatus->setObjectName(QString::fromUtf8("lblTestStatus"));
        lblTestStatus->setFont(font11);
        lblTestStatus->setStyleSheet(QString::fromUtf8("QLabel {color:white;border: rgba(0,0,0,0);}"));

        gridLayout_2->addWidget(lblTestStatus, 4, 0, 1, 1);

        frontPanel = new QFrame(centralWidget);
        frontPanel->setObjectName(QString::fromUtf8("frontPanel"));
        frontPanel->setGeometry(QRect(10, 434, 692, 160));
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
        label_4w->setFont(font6);
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
        label_2w->setFont(font6);
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
        label_Amp->setFont(font6);
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
        QFont font13;
        font13.setFamily(QString::fromUtf8("DejaVu Sans"));
        font13.setBold(true);
        font13.setWeight(75);
        label_27->setFont(font13);
        label_27->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_27->setAlignment(Qt::AlignCenter);
        label_Amp_2 = new QLabel(frame);
        label_Amp_2->setObjectName(QString::fromUtf8("label_Amp_2"));
        label_Amp_2->setGeometry(QRect(176, 60, 50, 17));
        label_Amp_2->setFont(font6);
        label_Amp_2->setStyleSheet(QString::fromUtf8("color:black;"));
        DMMI_P12_2 = new QFrame(frame);
        DMMI_P12_2->setObjectName(QString::fromUtf8("DMMI_P12_2"));
        DMMI_P12_2->setGeometry(QRect(178, 16, 44, 50));
        DMMI_P12_2->setStyleSheet(QString::fromUtf8("border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/fuse.png);"));
        DMMI_P12_2->setFrameShape(QFrame::StyledPanel);
        DMMI_P12_2->setFrameShadow(QFrame::Raised);
        label_Amp_5 = new QLabel(frame);
        label_Amp_5->setObjectName(QString::fromUtf8("label_Amp_5"));
        label_Amp_5->setGeometry(QRect(129, 60, 35, 17));
        label_Amp_5->setFont(font6);
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
        label_28->setFont(font6);
        label_28->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(23, 59, 38, 17));
        label_29->setFont(font6);
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
        label_30->setFont(font13);
        label_30->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_30->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(frame_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(238, 59, 43, 17));
        label_37->setFont(font6);
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
        label_53->setFont(font6);
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
        label_31->setFont(font13);
        label_31->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_31->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(140, 119, 60, 17));
        label_33->setFont(font6);
        label_33->setStyleSheet(QString::fromUtf8("color:black;"));
        vi2 = new QFrame(frame_3);
        vi2->setObjectName(QString::fromUtf8("vi2"));
        vi2->setGeometry(QRect(110, 20, 41, 41));
        vi2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        vi2->setFrameShape(QFrame::StyledPanel);
        vi2->setFrameShadow(QFrame::Raised);
        label_55 = new QLabel(frame_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(0, 59, 84, 17));
        label_55->setFont(font6);
        label_55->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_58 = new QLabel(frame_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(80, 59, 100, 17));
        label_58->setFont(font6);
        label_58->setStyleSheet(QString::fromUtf8("color:gray;"));
        vi1 = new QFrame(frame_3);
        vi1->setObjectName(QString::fromUtf8("vi1"));
        vi1->setGeometry(QRect(24, 20, 41, 41));
        vi1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        vi1->setFrameShape(QFrame::StyledPanel);
        vi1->setFrameShadow(QFrame::Raised);
        label_59 = new QLabel(frame_3);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(190, 58, 90, 17));
        label_59->setFont(font6);
        label_59->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_21 = new QFrame(frame_3);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(193, 27, 80, 26));
        frame_21->setFont(font);
        frame_21->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
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
        label_32->setFont(font6);
        label_32->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_34 = new QLabel(frame_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(23, 59, 38, 17));
        label_34->setFont(font6);
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
        label_35->setFont(font13);
        label_35->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_35->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(frame_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(237, 59, 43, 17));
        label_38->setFont(font6);
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
        label_54->setFont(font6);
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
        label_56->setFont(font6);
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
        label_36->setFont(font13);
        label_36->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_36->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(frame_7);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(3, 79, 34, 16));
        label_57->setFont(font13);
        label_57->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_57->setAlignment(Qt::AlignCenter);
        debugPanel = new QFrame(centralWidget);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(10, 434, 692, 160));
        debugPanel->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        debugPanel->setFrameShape(QFrame::StyledPanel);
        debugPanel->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(debugPanel);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 10, 211, 111));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_41 = new QLabel(frame_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(7, 3, 200, 16));
        label_41->setFont(font13);
        label_41->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_41->setAlignment(Qt::AlignCenter);
        yAxisBox = new QDoubleSpinBox(frame_5);
        yAxisBox->setObjectName(QString::fromUtf8("yAxisBox"));
        yAxisBox->setGeometry(QRect(90, 63, 111, 41));
        yAxisBox->setFont(font4);
        yAxisBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
"QDoubleSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        yAxisBox->setDecimals(1);
        yAxisBox->setMinimum(-99);
        yAxisBox->setSingleStep(0.1);
        xAxis = new QLabel(frame_5);
        xAxis->setObjectName(QString::fromUtf8("xAxis"));
        xAxis->setGeometry(QRect(10, 33, 81, 23));
        xAxis->setFont(font7);
        xAxis->setStyleSheet(QString::fromUtf8("QLabel {color:black;border: rgba(0,0,0,0);}"));
        YAxis = new QLabel(frame_5);
        YAxis->setObjectName(QString::fromUtf8("YAxis"));
        YAxis->setGeometry(QRect(10, 74, 70, 23));
        YAxis->setFont(font7);
        YAxis->setStyleSheet(QString::fromUtf8("QLabel {color:black;border: rgba(0,0,0,0);}"));
        xAxisBox = new QDoubleSpinBox(frame_5);
        xAxisBox->setObjectName(QString::fromUtf8("xAxisBox"));
        xAxisBox->setGeometry(QRect(90, 23, 111, 41));
        xAxisBox->setFont(font4);
        xAxisBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
"QDoubleSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        xAxisBox->setDecimals(1);
        xAxisBox->setMinimum(-99);
        xAxisBox->setSingleStep(0.1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        deleteBox->setTitle(QString());
        deleteButton->setText(QString());
        ExitBox->setTitle(QString());
        exit->setText(QString());
        PCBox->setTitle(QString());
        butProClip->setText(QString());
        singleCap_7->setText(QApplication::translate("MainWindow", "Probe/Clip", 0, QApplication::UnicodeUTF8));
        storeBox->setTitle(QString());
        storeButton->setText(QString());
        CalibBox->setTitle(QString());
        ohmMeter_3->setText(QString());
        calibButton->setText(QString());
        startBox->setTitle(QString());
        startButton->setText(QString());
        butUP->setText(QString());
        butDown->setText(QString());
        lblFrequency->setText(QApplication::translate("MainWindow", "2KHz", 0, QApplication::UnicodeUTF8));
        lblImpedance->setText(QApplication::translate("MainWindow", "2K", 0, QApplication::UnicodeUTF8));
        lblVoltage->setText(QApplication::translate("MainWindow", "1.5V", 0, QApplication::UnicodeUTF8));
        lblnxtImpedance->setText(QApplication::translate("MainWindow", "5K", 0, QApplication::UnicodeUTF8));
        lblPrevFrequency->setText(QApplication::translate("MainWindow", "1KHz", 0, QApplication::UnicodeUTF8));
        lblPrevVoltage->setText(QApplication::translate("MainWindow", "0.2V", 0, QApplication::UnicodeUTF8));
        lblnxtVoltage->setText(QApplication::translate("MainWindow", "3.5V", 0, QApplication::UnicodeUTF8));
        lblPrevImpedance->setText(QApplication::translate("MainWindow", "1K", 0, QApplication::UnicodeUTF8));
        lblnxtFrequecy->setText(QApplication::translate("MainWindow", "5KHz", 0, QApplication::UnicodeUTF8));
        tblImpedance->setText(QString());
        tblFrequency->setText(QString());
        grpProbes->setTitle(QApplication::translate("MainWindow", "PROBE", 0, QApplication::UnicodeUTF8));
        butAM->setText(QString());
        singleCap_2->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        singleCap_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblProbeType->setText(QApplication::translate("MainWindow", "SINGLE", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "ProbeSelection", 0, QApplication::UnicodeUTF8));
        butProbe1->setText(QString());
        butProbe2->setText(QString());
        butExternal->setText(QString());
        lblProbe1->setText(QApplication::translate("MainWindow", "Probe 1", 0, QApplication::UnicodeUTF8));
        lblProbe2->setText(QApplication::translate("MainWindow", "Probe 2", 0, QApplication::UnicodeUTF8));
        lblExternal->setText(QApplication::translate("MainWindow", "EXT-MUX", 0, QApplication::UnicodeUTF8));
        lblExternal_2->setText(QApplication::translate("MainWindow", "EXT-CH", 0, QApplication::UnicodeUTF8));
        butExternal_2->setText(QString());
        grpError->setTitle(QString());
        redPallete->setText(QString());
        errPallete->setText(QString());
        lblClip_7->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Comparison:</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblProbeComparison_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        grpEmbedded->setTitle(QApplication::translate("MainWindow", "EMBEDDED KEY MAP", 0, QApplication::UnicodeUTF8));
        lblLeft->setText(QApplication::translate("MainWindow", "RUN/STOP", 0, QApplication::UnicodeUTF8));
        lblMiddle->setText(QApplication::translate("MainWindow", "STORE", 0, QApplication::UnicodeUTF8));
        lblRight->setText(QApplication::translate("MainWindow", "DELETE", 0, QApplication::UnicodeUTF8));
        butL->setText(QString());
        butM->setText(QString());
        butR->setText(QString());
        tblVoltage->setText(QString());
        tblVI->setText(QApplication::translate("MainWindow", "VI", 0, QApplication::UnicodeUTF8));
        tblVT->setText(QApplication::translate("MainWindow", "VT", 0, QApplication::UnicodeUTF8));
        grpClip->setTitle(QApplication::translate("MainWindow", "CLIP", 0, QApplication::UnicodeUTF8));
        butClip->setText(QString());
        butLearn->setText(QApplication::translate("MainWindow", "Learn", 0, QApplication::UnicodeUTF8));
        butVerify->setText(QApplication::translate("MainWindow", "Verify", 0, QApplication::UnicodeUTF8));
        butViewTrace->setText(QApplication::translate("MainWindow", "View\n"
"Trace", 0, QApplication::UnicodeUTF8));
        singleCap_8->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblClip->setText(QApplication::translate("MainWindow", "14 PINS", 0, QApplication::UnicodeUTF8));
        lblClip_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">CLIP</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblClip_5->setText(QApplication::translate("MainWindow", "Reference Type:", 0, QApplication::UnicodeUTF8));
        lblClip_3->setText(QApplication::translate("MainWindow", "Combinations:", 0, QApplication::UnicodeUTF8));
        lblClip_8->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Drive Settings:</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblClip_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Comparison:</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblClip_4->setText(QApplication::translate("MainWindow", "RunMode:", 0, QApplication::UnicodeUTF8));
        lblRefereceType->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblNC->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblDriveSettings->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblComparisonMode->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        lblTestStatus->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_4w->setText(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        label_2w->setText(QApplication::translate("MainWindow", "V", 0, QApplication::UnicodeUTF8));
        label_Amp->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "DIGITAL MULTI METER", 0, QApplication::UnicodeUTF8));
        label_Amp_2->setText(QApplication::translate("MainWindow", "FUSE", 0, QApplication::UnicodeUTF8));
        label_Amp_5->setText(QApplication::translate("MainWindow", "mA", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "CH2", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "CH1", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "DSO / AWG", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "AWG", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("MainWindow", "EXT", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "QSM-VI/ICM/SHORT LOCATOR", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "GUARD", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("MainWindow", "VI1/SL/ICM", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("MainWindow", "VI2/EXT MUX", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("MainWindow", "GUARDING", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "AH3", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindow", "AH1", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindow", "AH EXTERNAL CHANNEL", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindow", "AH0", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("MainWindow", "AH2", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("MainWindow", "GUARD", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindow", "REF", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("MainWindow", "GND", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindow", "Adjust X-Y Axis of Graph", 0, QApplication::UnicodeUTF8));
        xAxis->setText(QApplication::translate("MainWindow", "X-AXIS :", 0, QApplication::UnicodeUTF8));
        YAxis->setText(QApplication::translate("MainWindow", "Y-AXIS :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
