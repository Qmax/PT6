/********************************************************************************
** Form generated from reading UI file 'fg.ui'
**
** Created: Mon Jul 7 11:56:17 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FG_H
#define UI_FG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FG
{
public:
    QWidget *centralWidget;
    QGroupBox *ExitBox;
    QPushButton *exit;
    QGroupBox *tempBox;
    QPushButton *ohmMeter_3;
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
    QLabel *label_20;
    QLabel *label_Amp_2;
    QFrame *DMMI_P12_2;
    QFrame *frame_2;
    QLabel *label_10;
    QLabel *label_9;
    QFrame *dso1_outer;
    QFrame *dso1_inner;
    QFrame *dso_outer;
    QFrame *dso_inner;
    QLabel *label_19;
    QFrame *frame_3;
    QLabel *label_21;
    QFrame *frame_22;
    QFrame *frame_23;
    QFrame *frame_21;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_17;
    QFrame *frame_20;
    QLabel *label_15;
    QFrame *frame_4;
    QLabel *label_24;
    QFrame *frame_17;
    QFrame *frame_19;
    QLabel *label_13;
    QFrame *frame_7;
    QLabel *label_26;
    QFrame *frame_8;
    QFrame *frame_9;
    QLabel *label_2w_2;
    QLabel *label_2w_3;
    QFrame *selectFrame;
    QGroupBox *triangleBox;
    QPushButton *triangleBut;
    QGroupBox *sineBox;
    QPushButton *sineBut;
    QGroupBox *rampBox;
    QPushButton *rampBut;
    QGroupBox *squareBox;
    QPushButton *squareBut;
    QGroupBox *wavePanel;
    QGroupBox *parameterPanel;
    QFrame *frame_5;
    QPushButton *leftBut;
    QPushButton *upBut;
    QPushButton *rightBut;
    QPushButton *fineCoarse;
    QPushButton *downBut;
    QFrame *sidePanel;
    QGroupBox *sourceImpedance;
    QPushButton *RUNBut;
    QLabel *RUNCap;
    QLabel *hiZCap;
    QPushButton *hiZBut;
    QGroupBox *runMode;
    QLabel *continuousCap;
    QPushButton *singleBut;
    QPushButton *continuousBut;
    QLabel *singleCap;
    QLabel *burstCap;
    QPushButton *burstBut;
    QLabel *GateCap;
    QPushButton *GateBut;
    QLabel *ManCap;
    QPushButton *MANBut;
    QLabel *INTCap;
    QPushButton *INTBut;
    QLabel *EXTCap;
    QPushButton *EXTBut;
    QComboBox *modeBox;
    QLabel *label;
    QGroupBox *burstOptions;
    QGroupBox *debugPanel;
    QPushButton *calibrate;
    QPushButton *appBckPSoC;

    void setupUi(QMainWindow *FG)
    {
        if (FG->objectName().isEmpty())
            FG->setObjectName(QString::fromUtf8("FG"));
        FG->resize(800, 600);
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
        FG->setPalette(palette);
        centralWidget = new QWidget(FG);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ExitBox = new QGroupBox(centralWidget);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 480, 80, 112));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        ExitBox->setFont(font);
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
        exit->setFont(font);
        exit->setFocusPolicy(Qt::NoFocus);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0);color:blue;\n"
"	image: url(:/res/logout-icon.png);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logout-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        exit->setIconSize(QSize(70, 70));
        tempBox = new QGroupBox(centralWidget);
        tempBox->setObjectName(QString::fromUtf8("tempBox"));
        tempBox->setGeometry(QRect(710, 390, 80, 90));
        tempBox->setFont(font);
        tempBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter_3 = new QPushButton(tempBox);
        ohmMeter_3->setObjectName(QString::fromUtf8("ohmMeter_3"));
        ohmMeter_3->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_3->setFont(font);
        ohmMeter_3->setFocusPolicy(Qt::NoFocus);
        ohmMeter_3->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"	}"));
        ohmMeter_3->setIconSize(QSize(55, 55));
        frontPanel = new QFrame(centralWidget);
        frontPanel->setObjectName(QString::fromUtf8("frontPanel"));
        frontPanel->setGeometry(QRect(10, 434, 692, 160));
        frontPanel->setFont(font);
        frontPanel->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        frontPanel->setFrameShape(QFrame::StyledPanel);
        frontPanel->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frontPanel);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(105, 7, 230, 146));
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4w = new QLabel(frame);
        label_4w->setObjectName(QString::fromUtf8("label_4w"));
        label_4w->setGeometry(QRect(47, 130, 60, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_4w->setFont(font1);
        label_4w->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P2 = new QFrame(frame);
        DMM2W_P2->setObjectName(QString::fromUtf8("DMM2W_P2"));
        DMM2W_P2->setGeometry(QRect(100, 35, 31, 31));
        DMM2W_P2->setFont(font);
        DMM2W_P2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P2->setFrameShape(QFrame::StyledPanel);
        DMM2W_P2->setFrameShadow(QFrame::Raised);
        DMMI_P1 = new QFrame(frame);
        DMMI_P1->setObjectName(QString::fromUtf8("DMMI_P1"));
        DMMI_P1->setGeometry(QRect(180, 35, 31, 31));
        DMMI_P1->setFont(font);
        DMMI_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMMI_P1->setFrameShape(QFrame::StyledPanel);
        DMMI_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P12 = new QFrame(frame);
        DMM4W_P12->setObjectName(QString::fromUtf8("DMM4W_P12"));
        DMM4W_P12->setGeometry(QRect(25, 93, 41, 41));
        DMM4W_P12->setFont(font);
        DMM4W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P12->setFrameShape(QFrame::StyledPanel);
        DMM4W_P12->setFrameShadow(QFrame::Raised);
        DMM4W_P1 = new QFrame(frame);
        DMM4W_P1->setObjectName(QString::fromUtf8("DMM4W_P1"));
        DMM4W_P1->setGeometry(QRect(30, 98, 31, 31));
        DMM4W_P1->setFont(font);
        DMM4W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P1->setFrameShape(QFrame::StyledPanel);
        DMM4W_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P22 = new QFrame(frame);
        DMM4W_P22->setObjectName(QString::fromUtf8("DMM4W_P22"));
        DMM4W_P22->setGeometry(QRect(95, 93, 41, 41));
        DMM4W_P22->setFont(font);
        DMM4W_P22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P22->setFrameShape(QFrame::StyledPanel);
        DMM4W_P22->setFrameShadow(QFrame::Raised);
        DMMI_P12 = new QFrame(frame);
        DMMI_P12->setObjectName(QString::fromUtf8("DMMI_P12"));
        DMMI_P12->setGeometry(QRect(175, 30, 41, 41));
        DMMI_P12->setFont(font);
        DMMI_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMMI_P12->setFrameShape(QFrame::StyledPanel);
        DMMI_P12->setFrameShadow(QFrame::Raised);
        label_2w = new QLabel(frame);
        label_2w->setObjectName(QString::fromUtf8("label_2w"));
        label_2w->setGeometry(QRect(34, 71, 90, 17));
        label_2w->setFont(font1);
        label_2w->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_2w->setAlignment(Qt::AlignCenter);
        DMM2W_P22 = new QFrame(frame);
        DMM2W_P22->setObjectName(QString::fromUtf8("DMM2W_P22"));
        DMM2W_P22->setGeometry(QRect(95, 30, 41, 41));
        DMM2W_P22->setFont(font);
        DMM2W_P22->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P22->setFrameShape(QFrame::StyledPanel);
        DMM2W_P22->setFrameShadow(QFrame::Raised);
        DMM2W_P12 = new QFrame(frame);
        DMM2W_P12->setObjectName(QString::fromUtf8("DMM2W_P12"));
        DMM2W_P12->setGeometry(QRect(25, 30, 41, 41));
        DMM2W_P12->setFont(font);
        DMM2W_P12->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P12->setFrameShape(QFrame::StyledPanel);
        DMM2W_P12->setFrameShadow(QFrame::Raised);
        label_Amp = new QLabel(frame);
        label_Amp->setObjectName(QString::fromUtf8("label_Amp"));
        label_Amp->setGeometry(QRect(134, 71, 40, 17));
        label_Amp->setFont(font1);
        label_Amp->setStyleSheet(QString::fromUtf8("color:gray;"));
        DMM2W_P1 = new QFrame(frame);
        DMM2W_P1->setObjectName(QString::fromUtf8("DMM2W_P1"));
        DMM2W_P1->setGeometry(QRect(30, 35, 31, 31));
        DMM2W_P1->setFont(font);
        DMM2W_P1->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);\n"
""));
        DMM2W_P1->setFrameShape(QFrame::StyledPanel);
        DMM2W_P1->setFrameShadow(QFrame::Raised);
        DMM4W_P2 = new QFrame(frame);
        DMM4W_P2->setObjectName(QString::fromUtf8("DMM4W_P2"));
        DMM4W_P2->setGeometry(QRect(100, 98, 31, 31));
        DMM4W_P2->setFont(font);
        DMM4W_P2->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:15px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        DMM4W_P2->setFrameShape(QFrame::StyledPanel);
        DMM4W_P2->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(5, 3, 220, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setBold(true);
        font2.setWeight(75);
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_Amp_2 = new QLabel(frame);
        label_Amp_2->setObjectName(QString::fromUtf8("label_Amp_2"));
        label_Amp_2->setGeometry(QRect(173, 130, 50, 17));
        label_Amp_2->setFont(font1);
        label_Amp_2->setStyleSheet(QString::fromUtf8("color:black;"));
        DMMI_P12_2 = new QFrame(frame);
        DMMI_P12_2->setObjectName(QString::fromUtf8("DMMI_P12_2"));
        DMMI_P12_2->setGeometry(QRect(169, 80, 50, 50));
        DMMI_P12_2->setStyleSheet(QString::fromUtf8("border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/fuse.png);"));
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
        label_20->raise();
        label_Amp_2->raise();
        DMMI_P12_2->raise();
        DMM2W_P2->raise();
        DMMI_P1->raise();
        frame_2 = new QFrame(frontPanel);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 7, 92, 146));
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(25, 130, 38, 17));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(26, 72, 38, 17));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color:gray;"));
        dso1_outer = new QFrame(frame_2);
        dso1_outer->setObjectName(QString::fromUtf8("dso1_outer"));
        dso1_outer->setGeometry(QRect(25, 30, 41, 41));
        dso1_outer->setFont(font);
        dso1_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso1_outer->setFrameShape(QFrame::StyledPanel);
        dso1_outer->setFrameShadow(QFrame::Raised);
        dso1_inner = new QFrame(dso1_outer);
        dso1_inner->setObjectName(QString::fromUtf8("dso1_inner"));
        dso1_inner->setGeometry(QRect(15, 15, 10, 10));
        dso1_inner->setFont(font);
        dso1_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso1_inner->setFrameShape(QFrame::StyledPanel);
        dso1_inner->setFrameShadow(QFrame::Raised);
        dso_outer = new QFrame(frame_2);
        dso_outer->setObjectName(QString::fromUtf8("dso_outer"));
        dso_outer->setGeometry(QRect(25, 90, 41, 41));
        dso_outer->setFont(font);
        dso_outer->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/new/prefix1/Button-Blank-Gray-icon.png);"));
        dso_outer->setFrameShape(QFrame::StyledPanel);
        dso_outer->setFrameShadow(QFrame::Raised);
        dso_inner = new QFrame(dso_outer);
        dso_inner->setObjectName(QString::fromUtf8("dso_inner"));
        dso_inner->setGeometry(QRect(15, 15, 10, 10));
        dso_inner->setFont(font);
        dso_inner->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        dso_inner->setFrameShape(QFrame::StyledPanel);
        dso_inner->setFrameShadow(QFrame::Raised);
        label_19 = new QLabel(frame_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(6, 3, 80, 20));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_19->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(frontPanel);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(338, 7, 250, 146));
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_21 = new QLabel(frame_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(5, 3, 240, 20));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_21->setAlignment(Qt::AlignCenter);
        frame_22 = new QFrame(frame_3);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setGeometry(QRect(28, 38, 60, 15));
        frame_22->setFont(font);
        frame_22->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 5px;\n"
" border-top-left-radius: 5px;\n"
" border-bottom-right-radius: 5px;\n"
" border-bottom-left-radius: 5px;"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        frame_23 = new QFrame(frame_3);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setGeometry(QRect(30, 90, 60, 15));
        frame_23->setFont(font);
        frame_23->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 5px;\n"
" border-top-left-radius: 5px;\n"
" border-bottom-right-radius: 5px;\n"
" border-bottom-left-radius: 5px;"));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        frame_21 = new QFrame(frame_3);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(130, 90, 80, 26));
        frame_21->setFont(font);
        frame_21->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(22, 113, 87, 17));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(140, 120, 60, 17));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(42, 61, 30, 17));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_20 = new QFrame(frame_3);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setGeometry(QRect(120, 38, 100, 15));
        frame_20->setFont(font);
        frame_20->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 5px;\n"
" border-top-left-radius: 5px;\n"
" border-bottom-right-radius: 10px;\n"
" border-bottom-left-radius: 10px;"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(130, 60, 81, 17));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_4 = new QFrame(frontPanel);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(590, 7, 90, 85));
        frame_4->setFont(font);
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(6, 3, 80, 20));
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:10px;"));
        label_24->setAlignment(Qt::AlignCenter);
        frame_17 = new QFrame(frame_4);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(20, 27, 41, 41));
        frame_17->setFont(font);
        frame_17->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:20px;\n"
"image: url(:/res/BNC.png);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        frame_19 = new QFrame(frame_17);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(16, 15, 10, 10));
        frame_19->setFont(font);
        frame_19->setStyleSheet(QString::fromUtf8("border:1px solid gray;border-radius:4px;\n"
""));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(26, 68, 30, 17));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color:black;"));
        frame_7 = new QFrame(frontPanel);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(590, 96, 90, 57));
        frame_7->setFont(font);
        frame_7->setStyleSheet(QString::fromUtf8("QFrame{border:2px solid black; background-color: rgba(0,0,0,0);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
"\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_26 = new QLabel(frame_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(26, 71, 30, 17));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(24, 14, 10, 30));
        frame_8->setFont(font);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(51, 14, 10, 30));
        frame_9->setFont(font);
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_2w_2 = new QLabel(frame_7);
        label_2w_2->setObjectName(QString::fromUtf8("label_2w_2"));
        label_2w_2->setGeometry(QRect(19, 0, 50, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        label_2w_2->setFont(font3);
        label_2w_2->setAlignment(Qt::AlignCenter);
        label_2w_3 = new QLabel(frame_7);
        label_2w_3->setObjectName(QString::fromUtf8("label_2w_3"));
        label_2w_3->setGeometry(QRect(15, 43, 60, 16));
        label_2w_3->setFont(font3);
        label_2w_3->setAlignment(Qt::AlignCenter);
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
        triangleBox = new QGroupBox(centralWidget);
        triangleBox->setObjectName(QString::fromUtf8("triangleBox"));
        triangleBox->setGeometry(QRect(710, 300, 80, 90));
        triangleBox->setFont(font);
        triangleBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        triangleBut = new QPushButton(triangleBox);
        triangleBut->setObjectName(QString::fromUtf8("triangleBut"));
        triangleBut->setGeometry(QRect(8, 15, 64, 64));
        triangleBut->setFont(font);
        triangleBut->setFocusPolicy(Qt::NoFocus);
        triangleBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"	image: url(:/res/redTriangle.png);}"));
        triangleBut->setIconSize(QSize(55, 55));
        sineBox = new QGroupBox(centralWidget);
        sineBox->setObjectName(QString::fromUtf8("sineBox"));
        sineBox->setGeometry(QRect(710, 32, 80, 89));
        sineBox->setFont(font);
        sineBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        sineBut = new QPushButton(sineBox);
        sineBut->setObjectName(QString::fromUtf8("sineBut"));
        sineBut->setGeometry(QRect(8, 18, 64, 64));
        sineBut->setFont(font);
        sineBut->setFocusPolicy(Qt::NoFocus);
        sineBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);image: url(:/res/redSine.png);}\n"
"\n"
""));
        sineBut->setIconSize(QSize(55, 55));
        rampBox = new QGroupBox(centralWidget);
        rampBox->setObjectName(QString::fromUtf8("rampBox"));
        rampBox->setGeometry(QRect(710, 211, 80, 90));
        rampBox->setFont(font);
        rampBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        rampBut = new QPushButton(rampBox);
        rampBut->setObjectName(QString::fromUtf8("rampBut"));
        rampBut->setGeometry(QRect(8, 15, 64, 64));
        rampBut->setFont(font);
        rampBut->setFocusPolicy(Qt::NoFocus);
        rampBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);\n"
"image: url(:/res/redRamp.png);}\n"
"\n"
""));
        rampBut->setIconSize(QSize(55, 55));
        squareBox = new QGroupBox(centralWidget);
        squareBox->setObjectName(QString::fromUtf8("squareBox"));
        squareBox->setGeometry(QRect(710, 121, 80, 90));
        squareBox->setFont(font);
        squareBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        squareBut = new QPushButton(squareBox);
        squareBut->setObjectName(QString::fromUtf8("squareBut"));
        squareBut->setGeometry(QRect(8, 17, 64, 64));
        squareBut->setFont(font);
        squareBut->setFocusPolicy(Qt::NoFocus);
        squareBut->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid rgba(0,0,0,0); border-radius: 8px; background-color: rgba(0,0,0,0,);image: url(:/res/redSquare.png);}"));
        squareBut->setIconSize(QSize(55, 55));
        wavePanel = new QGroupBox(centralWidget);
        wavePanel->setObjectName(QString::fromUtf8("wavePanel"));
        wavePanel->setGeometry(QRect(10, 33, 440, 244));
        wavePanel->setFont(font);
        wavePanel->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
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
        parameterPanel = new QGroupBox(centralWidget);
        parameterPanel->setObjectName(QString::fromUtf8("parameterPanel"));
        parameterPanel->setGeometry(QRect(10, 280, 693, 151));
        parameterPanel->setFont(font);
        parameterPanel->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
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
        frame_5 = new QFrame(parameterPanel);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(550, 2, 140, 140));
        frame_5->setStyleSheet(QString::fromUtf8("border:0px solid black;\n"
"border-radius:65px;\n"
"background-color:rgba(0,0,0,0);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        leftBut = new QPushButton(frame_5);
        leftBut->setObjectName(QString::fromUtf8("leftBut"));
        leftBut->setGeometry(QRect(0, 25, 50, 90));
        leftBut->setFont(font);
        leftBut->setFocusPolicy(Qt::NoFocus);
        leftBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"/*image: url(:/res/left-icon.png);*/\n"
"image: url(:/res/leftButton.png);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/left-icon_pressed.png);\n"
"}\n"
"QPushButton::released{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/left-icon.png);\n"
"}\n"
""));
        upBut = new QPushButton(frame_5);
        upBut->setObjectName(QString::fromUtf8("upBut"));
        upBut->setGeometry(QRect(25, 0, 90, 50));
        upBut->setFont(font);
        upBut->setFocusPolicy(Qt::NoFocus);
        upBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"/*image: url(:/res/up-icon.png);*/\n"
"image: url(:/res/upButton.png);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/up-icon_released.png);\n"
"}\n"
"QPushButton::released{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/up-icon.png);\n"
"}\n"
""));
        rightBut = new QPushButton(frame_5);
        rightBut->setObjectName(QString::fromUtf8("rightBut"));
        rightBut->setGeometry(QRect(92, 25, 50, 90));
        rightBut->setFont(font);
        rightBut->setFocusPolicy(Qt::NoFocus);
        rightBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"/*image: url(:/res/right-icon.png);*/\n"
"image: url(:/res/rightButton.png);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/right-icon_preseed.png);\n"
"}\n"
"QPushButton::released{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/rightButton.png);\n"
"}\n"
""));
        fineCoarse = new QPushButton(frame_5);
        fineCoarse->setObjectName(QString::fromUtf8("fineCoarse"));
        fineCoarse->setGeometry(QRect(42, 40, 59, 60));
        fineCoarse->setFont(font);
        fineCoarse->setFocusPolicy(Qt::NoFocus);
        fineCoarse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"border-radius:28px;\n"
"image: url(:/res/coarse.png);\n"
"}"));
        downBut = new QPushButton(frame_5);
        downBut->setObjectName(QString::fromUtf8("downBut"));
        downBut->setGeometry(QRect(27, 92, 90, 50));
        downBut->setFont(font);
        downBut->setFocusPolicy(Qt::NoFocus);
        downBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"/*image: url(:/res/down-icon.png);*/\n"
"image: url(:/res/downButton.png);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/down-icon_pressed.png);\n"
"}\n"
"QPushButton::released{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/down-icon.png);\n"
"}\n"
""));
        sidePanel = new QFrame(centralWidget);
        sidePanel->setObjectName(QString::fromUtf8("sidePanel"));
        sidePanel->setGeometry(QRect(449, 32, 255, 246));
        sidePanel->setFont(font);
        sidePanel->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        sidePanel->setFrameShape(QFrame::StyledPanel);
        sidePanel->setFrameShadow(QFrame::Raised);
        sourceImpedance = new QGroupBox(sidePanel);
        sourceImpedance->setObjectName(QString::fromUtf8("sourceImpedance"));
        sourceImpedance->setGeometry(QRect(0, 190, 254, 55));
        sourceImpedance->setFont(font);
        sourceImpedance->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
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
        RUNBut = new QPushButton(sourceImpedance);
        RUNBut->setObjectName(QString::fromUtf8("RUNBut"));
        RUNBut->setGeometry(QRect(130, 0, 50, 50));
        RUNBut->setFont(font);
        RUNBut->setFocusPolicy(Qt::NoFocus);
        RUNBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"	image: url(:/res/knob_off.svg);\n"
"}\n"
""));
        RUNCap = new QLabel(sourceImpedance);
        RUNCap->setObjectName(QString::fromUtf8("RUNCap"));
        RUNCap->setGeometry(QRect(180, 8, 50, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        RUNCap->setFont(font4);
        RUNCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"/*color:#5293DE;*/\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        hiZCap = new QLabel(sourceImpedance);
        hiZCap->setObjectName(QString::fromUtf8("hiZCap"));
        hiZCap->setGeometry(QRect(70, 8, 50, 30));
        hiZCap->setFont(font4);
        hiZCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        hiZBut = new QPushButton(sourceImpedance);
        hiZBut->setObjectName(QString::fromUtf8("hiZBut"));
        hiZBut->setGeometry(QRect(20, 0, 50, 50));
        hiZBut->setFont(font);
        hiZBut->setFocusPolicy(Qt::NoFocus);
        hiZBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/pressed.svg);\n"
"}\n"
""));
        runMode = new QGroupBox(sidePanel);
        runMode->setObjectName(QString::fromUtf8("runMode"));
        runMode->setGeometry(QRect(0, 1, 254, 120));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setPointSize(10);
        runMode->setFont(font5);
        runMode->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        continuousCap = new QLabel(runMode);
        continuousCap->setObjectName(QString::fromUtf8("continuousCap"));
        continuousCap->setGeometry(QRect(60, 31, 99, 30));
        continuousCap->setFont(font4);
        continuousCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        singleBut = new QPushButton(runMode);
        singleBut->setObjectName(QString::fromUtf8("singleBut"));
        singleBut->setGeometry(QRect(10, 62, 40, 40));
        singleBut->setFont(font);
        singleBut->setFocusPolicy(Qt::NoFocus);
        singleBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"	image: url(:/res/knob_off.svg)\n"
"}\n"
""));
        continuousBut = new QPushButton(runMode);
        continuousBut->setObjectName(QString::fromUtf8("continuousBut"));
        continuousBut->setGeometry(QRect(10, 23, 40, 40));
        continuousBut->setFont(font);
        continuousBut->setFocusPolicy(Qt::NoFocus);
        continuousBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/knob_on.svg);\n"
"}\n"
""));
        singleCap = new QLabel(runMode);
        singleCap->setObjectName(QString::fromUtf8("singleCap"));
        singleCap->setGeometry(QRect(60, 66, 70, 30));
        singleCap->setFont(font4);
        singleCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"/*color:#5293DE;*/\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        burstCap = new QLabel(runMode);
        burstCap->setObjectName(QString::fromUtf8("burstCap"));
        burstCap->setGeometry(QRect(200, 68, 60, 30));
        burstCap->setFont(font4);
        burstCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"/*color:#5293DE;*/\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        burstBut = new QPushButton(runMode);
        burstBut->setObjectName(QString::fromUtf8("burstBut"));
        burstBut->setGeometry(QRect(150, 62, 40, 40));
        burstBut->setFont(font);
        burstBut->setFocusPolicy(Qt::NoFocus);
        burstBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"	image: url(:/res/knob_off.svg);\n"
"}\n"
""));
        GateCap = new QLabel(runMode);
        GateCap->setObjectName(QString::fromUtf8("GateCap"));
        GateCap->setGeometry(QRect(198, 29, 60, 30));
        GateCap->setFont(font4);
        GateCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"/*color:#5293DE;*/\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        GateBut = new QPushButton(runMode);
        GateBut->setObjectName(QString::fromUtf8("GateBut"));
        GateBut->setGeometry(QRect(149, 23, 40, 40));
        GateBut->setFont(font);
        GateBut->setFocusPolicy(Qt::NoFocus);
        GateBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/knob_off.svg);\n"
"}\n"
""));
        ManCap = new QLabel(runMode);
        ManCap->setObjectName(QString::fromUtf8("ManCap"));
        ManCap->setGeometry(QRect(42, 80, 50, 30));
        ManCap->setFont(font4);
        ManCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}"));
        MANBut = new QPushButton(runMode);
        MANBut->setObjectName(QString::fromUtf8("MANBut"));
        MANBut->setGeometry(QRect(10, 75, 40, 40));
        MANBut->setFont(font);
        MANBut->setFocusPolicy(Qt::NoFocus);
        MANBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/normal.svg);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/pressedRed.png);\n"
"}\n"
"QPushButton::released{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/pressed.svg);\n"
"}\n"
""));
        INTCap = new QLabel(runMode);
        INTCap->setObjectName(QString::fromUtf8("INTCap"));
        INTCap->setGeometry(QRect(124, 80, 50, 30));
        INTCap->setFont(font4);
        INTCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}"));
        INTBut = new QPushButton(runMode);
        INTBut->setObjectName(QString::fromUtf8("INTBut"));
        INTBut->setGeometry(QRect(90, 75, 40, 40));
        INTBut->setFont(font);
        INTBut->setFocusPolicy(Qt::NoFocus);
        INTBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/normal.svg);\n"
"}\n"
""));
        EXTCap = new QLabel(runMode);
        EXTCap->setObjectName(QString::fromUtf8("EXTCap"));
        EXTCap->setGeometry(QRect(197, 80, 50, 30));
        EXTCap->setFont(font4);
        EXTCap->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}"));
        EXTBut = new QPushButton(runMode);
        EXTBut->setObjectName(QString::fromUtf8("EXTBut"));
        EXTBut->setGeometry(QRect(164, 75, 40, 40));
        EXTBut->setFont(font);
        EXTBut->setFocusPolicy(Qt::NoFocus);
        EXTBut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"image: url(:/res/normal.svg);\n"
"}\n"
""));
        modeBox = new QComboBox(runMode);
        modeBox->setObjectName(QString::fromUtf8("modeBox"));
        modeBox->setGeometry(QRect(80, 34, 150, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("DejaVu Sans"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        font6.setStyleStrategy(QFont::PreferAntialias);
        modeBox->setFont(font6);
        modeBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid rgb(95, 95, 95);\n"
"    border-radius: 5px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"    color: rgb(220, 220, 220);\n"
"    margin: 0 0 0 0;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: rgba(80,80,80);\n"
"}\n"
"\n"
"QComboBox:!editable {\n"
"    background: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"								/*qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0 rgb(51, 51, 51), stop: 0.4 rgb(39, 39, 39),\n"
"                                  stop: 0.5 rgb(32,32,32), stop: 1.0 rgb(38,38,38));;*/\n"
"}\n"
"\n"
"QComboBox::drop-down:editable {\n"
"}\n"
"\n"
"QComboBox:!editable:on {\n"
"}\n"
"\n"
"QComboBox::drop-down:editable:on {\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color:qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #e59244, stop: 0.6 #"
                        "ffa500 , stop:1 #FFFFFF);\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 15px; \n"
"    right:3px;\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"	background-color:none;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/res/down.png);\n"
"    height: 20px;\n"
"	width:20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
""));
        label = new QLabel(runMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 70, 17));
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans"));
        font7.setPointSize(12);
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        burstOptions = new QGroupBox(sidePanel);
        burstOptions->setObjectName(QString::fromUtf8("burstOptions"));
        burstOptions->setGeometry(QRect(0, 121, 254, 70));
        burstOptions->setFont(font5);
        burstOptions->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"color:white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border:1px solid white;\n"
"border-bottom:0px solid white;\n"
"border-top:0px solid white;\n"
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
        debugPanel = new QGroupBox(centralWidget);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(10, 434, 692, 160));
        QFont font8;
        font8.setBold(true);
        font8.setWeight(75);
        debugPanel->setFont(font8);
        debugPanel->setStyleSheet(QString::fromUtf8("QGroupBox{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 border: 2px solid black;\n"
" }"));
        calibrate = new QPushButton(debugPanel);
        calibrate->setObjectName(QString::fromUtf8("calibrate"));
        calibrate->setGeometry(QRect(90, 40, 50, 50));
        calibrate->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/Letter-R-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        calibrate->setIcon(icon1);
        calibrate->setIconSize(QSize(48, 48));
        appBckPSoC = new QPushButton(debugPanel);
        appBckPSoC->setObjectName(QString::fromUtf8("appBckPSoC"));
        appBckPSoC->setGeometry(QRect(30, 40, 50, 50));
        appBckPSoC->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/Control-Panel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        appBckPSoC->setIcon(icon2);
        appBckPSoC->setIconSize(QSize(48, 48));
        FG->setCentralWidget(centralWidget);
        debugPanel->raise();
        ExitBox->raise();
        tempBox->raise();
        frontPanel->raise();
        triangleBox->raise();
        sineBox->raise();
        rampBox->raise();
        squareBox->raise();
        wavePanel->raise();
        parameterPanel->raise();
        sidePanel->raise();
        selectFrame->raise();

        retranslateUi(FG);

        QMetaObject::connectSlotsByName(FG);
    } // setupUi

    void retranslateUi(QMainWindow *FG)
    {
        FG->setWindowTitle(QApplication::translate("FG", "FG", 0, QApplication::UnicodeUTF8));
        ExitBox->setTitle(QString());
        exit->setText(QString());
        tempBox->setTitle(QString());
        ohmMeter_3->setText(QString());
        label_4w->setText(QApplication::translate("FG", "4 WIRE", 0, QApplication::UnicodeUTF8));
        label_2w->setText(QApplication::translate("FG", "VOLT", 0, QApplication::UnicodeUTF8));
        label_Amp->setText(QApplication::translate("FG", "AMP", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("FG", "DIGITAL MULTI METER", 0, QApplication::UnicodeUTF8));
        label_Amp_2->setText(QApplication::translate("FG", "FUSE", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FG", "CH2", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FG", "CH1", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("FG", "DSO", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("FG", "QSM-VI/ICM/SHORT LOCATOR", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("FG", "SL/ICM/VI2", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("FG", "GUARD", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("FG", "VI1", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("FG", "EXTERNAL", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("FG", "AWG", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("FG", "FG", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("FG", "FG", 0, QApplication::UnicodeUTF8));
        label_2w_2->setText(QApplication::translate("FG", "5V 1KHz", 0, QApplication::UnicodeUTF8));
        label_2w_3->setText(QApplication::translate("FG", "REF GND", 0, QApplication::UnicodeUTF8));
        triangleBox->setTitle(QString());
        triangleBut->setText(QString());
        sineBox->setTitle(QString());
        sineBut->setText(QString());
        rampBox->setTitle(QString());
        rampBut->setText(QString());
        squareBox->setTitle(QString());
        squareBut->setText(QString());
        leftBut->setText(QString());
        upBut->setText(QString());
        rightBut->setText(QString());
        fineCoarse->setText(QString());
        downBut->setText(QString());
        sourceImpedance->setTitle(QString());
        RUNBut->setText(QString());
        RUNCap->setText(QApplication::translate("FG", "OFF", 0, QApplication::UnicodeUTF8));
        hiZCap->setText(QApplication::translate("FG", "Hi-Z", 0, QApplication::UnicodeUTF8));
        hiZBut->setText(QString());
        runMode->setTitle(QApplication::translate("FG", "Run Mode", 0, QApplication::UnicodeUTF8));
        continuousCap->setText(QApplication::translate("FG", "Continuous", 0, QApplication::UnicodeUTF8));
        singleBut->setText(QString());
        continuousBut->setText(QString());
        singleCap->setText(QApplication::translate("FG", "Trigger", 0, QApplication::UnicodeUTF8));
        burstCap->setText(QApplication::translate("FG", "Burst", 0, QApplication::UnicodeUTF8));
        burstBut->setText(QString());
        GateCap->setText(QApplication::translate("FG", "Gate", 0, QApplication::UnicodeUTF8));
        GateBut->setText(QString());
        ManCap->setText(QApplication::translate("FG", "MAN", 0, QApplication::UnicodeUTF8));
        MANBut->setText(QString());
        INTCap->setText(QApplication::translate("FG", "INT", 0, QApplication::UnicodeUTF8));
        INTBut->setText(QString());
        EXTCap->setText(QApplication::translate("FG", "EXT", 0, QApplication::UnicodeUTF8));
        EXTBut->setText(QString());
        modeBox->clear();
        modeBox->insertItems(0, QStringList()
         << QApplication::translate("FG", "Continuous", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FG", "Trigger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FG", "Gate", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FG", "Burst", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("FG", "Mode :", 0, QApplication::UnicodeUTF8));
        burstOptions->setTitle(QApplication::translate("FG", "Burst Options", 0, QApplication::UnicodeUTF8));
        debugPanel->setTitle(QApplication::translate("FG", "DEBUG PANEL", 0, QApplication::UnicodeUTF8));
        calibrate->setText(QString());
        appBckPSoC->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FG: public Ui_FG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FG_H
