/********************************************************************************
** Form generated from reading UI file 'dmm.ui'
**
** Created: Mon Jul 7 11:51:27 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMM_H
#define UI_DMM_H

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
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_DMM
{
public:
    QFrame *inputPanel;
    QPushButton *r4w;
    QPushButton *iac;
    QPushButton *vdc;
    QPushButton *idc;
    QPushButton *manual;
    QPushButton *r2w;
    QPushButton *Auto;
    QPushButton *vac;
    QPushButton *hold;
    QPushButton *Null;
    QFrame *rangeFrame;
    QPushButton *leftArrow;
    QLabel *label_5;
    QFrame *line;
    QFrame *line_7;
    QLabel *label_6;
    QPushButton *rightArrow;
    QFrame *line_4;
    QFrame *line_6;
    QLabel *label_4;
    QFrame *line_8;
    QFrame *line_9;
    QLabel *label_8;
    QLabel *label_18;
    QFrame *frame_5;
    QFrame *frame_6;
    QPushButton *Diode;
    QPushButton *Continuity;
    QFrame *displayPanel;
    QTextEdit *textEdit_4;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_5;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_6;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *holdLabel;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QFrame *frontPanel;
    QFrame *plottingWindow;
    QCustomPlot *customPlot;
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
    QFrame *frame_3;
    QLabel *label_31;
    QLabel *label_33;
    QFrame *vi2;
    QLabel *label_55;
    QLabel *label_58;
    QFrame *vi1;
    QLabel *label_59;
    QFrame *frame_21;
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
    QGroupBox *voltBox;
    QPushButton *voltMeter;
    QFrame *selectFrame;
    QGroupBox *AmpBox;
    QPushButton *ampMeter;
    QGroupBox *OhmBox;
    QPushButton *ohmMeter;
    QGroupBox *ExitBox;
    QPushButton *exit;
    QGroupBox *OhmBox_2;
    QPushButton *ohmMeter_2;
    QGroupBox *OhmBox_3;
    QPushButton *ohmMeter_3;
    QGroupBox *debugPanel;
    QPushButton *pushButton_16;
    QPushButton *pushButton_14;
    QPushButton *pushButton;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
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

    void setupUi(QWidget *DMM)
    {
        if (DMM->objectName().isEmpty())
            DMM->setObjectName(QString::fromUtf8("DMM"));
        DMM->resize(800, 600);
        DMM->setMinimumSize(QSize(800, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(88, 88, 89, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(132, 132, 134, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(110, 110, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(44, 44, 44, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(58, 58, 59, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        DMM->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        DMM->setFont(font);
        DMM->setAutoFillBackground(true);
        DMM->setStyleSheet(QString::fromUtf8(""));
        inputPanel = new QFrame(DMM);
        inputPanel->setObjectName(QString::fromUtf8("inputPanel"));
        inputPanel->setGeometry(QRect(10, 200, 693, 230));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        inputPanel->setFont(font1);
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
        r4w = new QPushButton(inputPanel);
        r4w->setObjectName(QString::fromUtf8("r4w"));
        r4w->setGeometry(QRect(226, 46, 64, 64));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        r4w->setFont(font2);
        r4w->setFocusPolicy(Qt::NoFocus);
        r4w->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        r4w->setIconSize(QSize(64, 64));
        iac = new QPushButton(inputPanel);
        iac->setObjectName(QString::fromUtf8("iac"));
        iac->setGeometry(QRect(138, 46, 64, 64));
        iac->setFont(font2);
        iac->setFocusPolicy(Qt::NoFocus);
        iac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        iac->setIconSize(QSize(64, 64));
        vdc = new QPushButton(inputPanel);
        vdc->setObjectName(QString::fromUtf8("vdc"));
        vdc->setGeometry(QRect(226, 46, 64, 64));
        vdc->setFont(font2);
        vdc->setFocusPolicy(Qt::NoFocus);
        vdc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        vdc->setIconSize(QSize(64, 64));
        idc = new QPushButton(inputPanel);
        idc->setObjectName(QString::fromUtf8("idc"));
        idc->setGeometry(QRect(226, 46, 64, 64));
        idc->setFont(font2);
        idc->setFocusPolicy(Qt::NoFocus);
        idc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        idc->setIconSize(QSize(64, 64));
        manual = new QPushButton(inputPanel);
        manual->setObjectName(QString::fromUtf8("manual"));
        manual->setGeometry(QRect(314, 46, 64, 64));
        manual->setFont(font2);
        manual->setFocusPolicy(Qt::NoFocus);
        manual->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        manual->setIconSize(QSize(64, 64));
        r2w = new QPushButton(inputPanel);
        r2w->setObjectName(QString::fromUtf8("r2w"));
        r2w->setGeometry(QRect(138, 46, 64, 64));
        r2w->setFont(font2);
        r2w->setFocusPolicy(Qt::NoFocus);
        r2w->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        r2w->setIconSize(QSize(64, 64));
        Auto = new QPushButton(inputPanel);
        Auto->setObjectName(QString::fromUtf8("Auto"));
        Auto->setGeometry(QRect(314, 46, 64, 64));
        Auto->setFont(font2);
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
        vac = new QPushButton(inputPanel);
        vac->setObjectName(QString::fromUtf8("vac"));
        vac->setGeometry(QRect(138, 46, 64, 64));
        vac->setFont(font2);
        vac->setFocusPolicy(Qt::NoFocus);
        vac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        vac->setIconSize(QSize(64, 64));
        hold = new QPushButton(inputPanel);
        hold->setObjectName(QString::fromUtf8("hold"));
        hold->setGeometry(QRect(402, 46, 64, 64));
        hold->setFont(font2);
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
        Null = new QPushButton(inputPanel);
        Null->setObjectName(QString::fromUtf8("Null"));
        Null->setGeometry(QRect(490, 46, 64, 64));
        Null->setFont(font2);
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
        rangeFrame = new QFrame(inputPanel);
        rangeFrame->setObjectName(QString::fromUtf8("rangeFrame"));
        rangeFrame->setEnabled(true);
        rangeFrame->setGeometry(QRect(100, 140, 480, 75));
        rangeFrame->setFont(font1);
        rangeFrame->setStyleSheet(QString::fromUtf8("color:gray;"));
        rangeFrame->setFrameShape(QFrame::StyledPanel);
        rangeFrame->setFrameShadow(QFrame::Raised);
        leftArrow = new QPushButton(rangeFrame);
        leftArrow->setObjectName(QString::fromUtf8("leftArrow"));
        leftArrow->setGeometry(QRect(10, 10, 50, 60));
        leftArrow->setFocusPolicy(Qt::NoFocus);
        leftArrow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/prev-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftArrow->setIcon(icon);
        leftArrow->setIconSize(QSize(50, 60));
        label_5 = new QLabel(rangeFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(177, 19, 121, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("12"));
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_5->setFont(font3);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QString::fromUtf8("font:24px bold;\n"
"color:white;"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignCenter);
        line = new QFrame(rangeFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(94, 59, 292, 10));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(rangeFrame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(170, 18, 10, 40));
        line_7->setStyleSheet(QString::fromUtf8(""));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(rangeFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(false);
        label_6->setGeometry(QRect(87, 30, 91, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setWeight(50);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color:#cccccc;"));
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);
        rightArrow = new QPushButton(rangeFrame);
        rightArrow->setObjectName(QString::fromUtf8("rightArrow"));
        rightArrow->setGeometry(QRect(420, 9, 50, 60));
        rightArrow->setFocusPolicy(Qt::NoFocus);
        rightArrow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid rgba(0,0,0,0);\n"
"         border-radius: 25px;\n"
"         background-color: rgba(0,0,0,0);\n"
"     }\n"
"\n"
"  "));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/next-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightArrow->setIcon(icon1);
        rightArrow->setIconSize(QSize(50, 60));
        line_4 = new QFrame(rangeFrame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(93, 12, 295, 10));
        line_4->setStyleSheet(QString::fromUtf8(""));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(rangeFrame);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(302, 18, 10, 40));
        line_6->setStyleSheet(QString::fromUtf8(""));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(rangeFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(297, 29, 91, 20));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color:#cccccc;"));
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);
        line_8 = new QFrame(rangeFrame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(90, 20, 10, 40));
        line_8->setStyleSheet(QString::fromUtf8(""));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(rangeFrame);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(380, 20, 10, 40));
        line_9->setStyleSheet(QString::fromUtf8(""));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        leftArrow->raise();
        label_5->raise();
        line_7->raise();
        label_6->raise();
        rightArrow->raise();
        line_6->raise();
        label_4->raise();
        line_8->raise();
        line_9->raise();
        line->raise();
        line_4->raise();
        label_8 = new QLabel(inputPanel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 13, 110, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setBold(true);
        font5.setWeight(75);
        label_8->setFont(font5);
        label_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);\n"
""));
        label_8->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(inputPanel);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(290, 122, 100, 20));
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #3a5976, stop: 1 #000000);"));
        label_18->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(inputPanel);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(30, 20, 630, 110));
        frame_5->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-radius:10px;\n"
"background-color:rgba(0,0,0,0);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(inputPanel);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setEnabled(false);
        frame_6->setGeometry(QRect(30, 129, 630, 92));
        frame_6->setFont(font1);
        frame_6->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-radius:10px;\n"
"background-color:rgba(0,0,0,0);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        Diode = new QPushButton(inputPanel);
        Diode->setObjectName(QString::fromUtf8("Diode"));
        Diode->setGeometry(QRect(226, 46, 64, 64));
        Diode->setFont(font2);
        Diode->setFocusPolicy(Qt::NoFocus);
        Diode->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:white;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"font:bold;\n"
"}"));
        Diode->setIconSize(QSize(64, 64));
        Continuity = new QPushButton(inputPanel);
        Continuity->setObjectName(QString::fromUtf8("Continuity"));
        Continuity->setGeometry(QRect(138, 46, 64, 64));
        Continuity->setFont(font2);
        Continuity->setFocusPolicy(Qt::NoFocus);
        Continuity->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Continuity->setIconSize(QSize(64, 64));
        frame_5->raise();
        manual->raise();
        Auto->raise();
        idc->raise();
        frame_6->raise();
        r4w->raise();
        iac->raise();
        vdc->raise();
        r2w->raise();
        vac->raise();
        hold->raise();
        Null->raise();
        rangeFrame->raise();
        label_8->raise();
        label_18->raise();
        Diode->raise();
        Continuity->raise();
        displayPanel = new QFrame(DMM);
        displayPanel->setObjectName(QString::fromUtf8("displayPanel"));
        displayPanel->setGeometry(QRect(10, 33, 693, 171));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        displayPanel->setFont(font6);
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
        textEdit_4 = new QTextEdit(displayPanel);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(61, 10, 451, 131));
        QPalette palette1;
        QBrush brush8(QColor(255, 255, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        textEdit_4->setPalette(palette1);
        textEdit_4->setFrameShape(QFrame::NoFrame);
        textEdit_4->setFrameShadow(QFrame::Plain);
        textEdit_4->setCursorWidth(0);
        label_7 = new QLabel(displayPanel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(67, 20, 57, 15));
        QPalette palette2;
        QBrush brush9(QColor(251, 236, 93, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_7->setPalette(palette2);
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans"));
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        label = new QLabel(displayPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(138, 113, 61, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(255, 255, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush10);
        label->setPalette(palette3);
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        label_2 = new QLabel(displayPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(66, 113, 81, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_2->setPalette(palette4);
        label_2->setFont(font7);
        label_2->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        textEdit_5 = new QTextEdit(displayPanel);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(63, 50, 120, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        textEdit_5->setPalette(palette5);
        QFont font8;
        font8.setFamily(QString::fromUtf8("DejaVu Sans"));
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        textEdit_5->setFont(font8);
        textEdit_5->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        textEdit_5->setFrameShape(QFrame::NoFrame);
        textEdit_5->setFrameShadow(QFrame::Plain);
        textEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5->setCursorWidth(0);
        label_3 = new QLabel(displayPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(610, 10, 33, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_3->setPalette(palette6);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8(""));
        textEdit_3 = new QTextEdit(displayPanel);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(491, 10, 152, 131));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        textEdit_3->setPalette(palette7);
        textEdit_3->setFrameShape(QFrame::NoFrame);
        textEdit_3->setFrameShadow(QFrame::Plain);
        textEdit_3->setCursorWidth(0);
        textEdit_6 = new QTextEdit(displayPanel);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(141, 10, 291, 121));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        textEdit_6->setPalette(palette8);
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans"));
        font9.setPointSize(72);
        textEdit_6->setFont(font9);
        textEdit_6->setLayoutDirection(Qt::RightToLeft);
        textEdit_6->setFrameShape(QFrame::NoFrame);
        textEdit_6->setFrameShadow(QFrame::Plain);
        textEdit_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_6->setTextInteractionFlags(Qt::NoTextInteraction);
        label_11 = new QLabel(displayPanel);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(71, 80, 57, 15));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_11->setPalette(palette9);
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setWeight(75);
        label_11->setFont(font10);
        label_12 = new QLabel(displayPanel);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(591, 120, 51, 21));
        lineEdit_3 = new QLineEdit(displayPanel);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(141, 11, 331, 121));
        QPalette palette10;
        QBrush brush11(QColor(249, 255, 153, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        lineEdit_3->setPalette(palette10);
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Sans"));
        font11.setPointSize(72);
        font11.setStyleStrategy(QFont::PreferAntialias);
        lineEdit_3->setFont(font11);
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setFocusPolicy(Qt::NoFocus);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#f9ff99;"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setEchoMode(QLineEdit::Normal);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(displayPanel);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(490, 25, 130, 90));
        QFont font12;
        font12.setFamily(QString::fromUtf8("DejaVu Sans"));
        font12.setPointSize(55);
        lineEdit_4->setFont(font12);
        lineEdit_4->setFocusPolicy(Qt::NoFocus);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setEchoMode(QLineEdit::Normal);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);
        holdLabel = new QLabel(displayPanel);
        holdLabel->setObjectName(QString::fromUtf8("holdLabel"));
        holdLabel->setGeometry(QRect(598, 10, 42, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        holdLabel->setPalette(palette11);
        holdLabel->setFont(font5);
        holdLabel->setAutoFillBackground(false);
        holdLabel->setStyleSheet(QString::fromUtf8("color:#fbec5d;"));
        holdLabel->setAlignment(Qt::AlignCenter);
        textEdit_4->raise();
        label_7->raise();
        label_2->raise();
        textEdit_3->raise();
        textEdit_6->raise();
        label_11->raise();
        label->raise();
        lineEdit_4->raise();
        holdLabel->raise();
        label_3->raise();
        lineEdit_3->raise();
        textEdit_5->raise();
        label_12->raise();
        textEdit = new QTextEdit(DMM);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(910, 350, 21, 21));
        textEdit->setSizeIncrement(QSize(0, 0));
        QFont font13;
        font13.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font13.setPointSize(40);
        font13.setBold(false);
        font13.setItalic(false);
        font13.setWeight(50);
        textEdit->setFont(font13);
        textEdit->setLayoutDirection(Qt::RightToLeft);
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setCursorWidth(0);
        lineEdit = new QLineEdit(DMM);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(932, 160, 41, 21));
        frontPanel = new QFrame(DMM);
        frontPanel->setObjectName(QString::fromUtf8("frontPanel"));
        frontPanel->setGeometry(QRect(4, 434, 701, 160));
        frontPanel->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        frontPanel->setFrameShape(QFrame::StyledPanel);
        frontPanel->setFrameShadow(QFrame::Raised);
        plottingWindow = new QFrame(frontPanel);
        plottingWindow->setObjectName(QString::fromUtf8("plottingWindow"));
        plottingWindow->setGeometry(QRect(800, 0, 701, 160));
        plottingWindow->setStyleSheet(QString::fromUtf8("QFrame{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
"QLabel{border:1px solid rgba(0,0,0,0);}\n"
""));
        plottingWindow->setFrameShape(QFrame::StyledPanel);
        plottingWindow->setFrameShadow(QFrame::Raised);
        customPlot = new QCustomPlot(plottingWindow);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(6, 10, 690, 147));
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
        QFont font14;
        font14.setFamily(QString::fromUtf8("DejaVu Sans"));
        font14.setPointSize(11);
        font14.setBold(false);
        font14.setWeight(50);
        label_28->setFont(font14);
        label_28->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(23, 59, 38, 17));
        label_29->setFont(font14);
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
        label_30->setFont(font5);
        label_30->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_30->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(frame_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(238, 59, 43, 17));
        label_37->setFont(font14);
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
        label_53->setFont(font14);
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
        label_32->setFont(font14);
        label_32->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_34 = new QLabel(frame_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(23, 59, 38, 17));
        label_34->setFont(font14);
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
        label_35->setFont(font5);
        label_35->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_35->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(frame_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(237, 59, 43, 17));
        label_38->setFont(font14);
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
        label_54->setFont(font14);
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
        label_56->setFont(font14);
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
        frame_23->setGeometry(QRect(8, 8, 10, 10));
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
        label_36->setGeometry(QRect(3, 5, 34, 16));
        label_36->setFont(font5);
        label_36->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_36->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(frame_7);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(3, 79, 34, 16));
        label_57->setFont(font5);
        label_57->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_57->setAlignment(Qt::AlignCenter);
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
        label_31->setFont(font5);
        label_31->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_31->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(frame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(140, 119, 60, 17));
        label_33->setFont(font14);
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
        label_55->setFont(font14);
        label_55->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_58 = new QLabel(frame_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(80, 59, 100, 17));
        label_58->setFont(font14);
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
        label_59->setFont(font14);
        label_59->setStyleSheet(QString::fromUtf8("color:gray;"));
        frame_21 = new QFrame(frame_3);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(193, 27, 80, 26));
        frame_21->setFont(font1);
        frame_21->setStyleSheet(QString::fromUtf8(" border:1px solid gray;\n"
" border-top-right-radius: 8px;\n"
" border-top-left-radius: 8px;\n"
" border-bottom-right-radius: 15px;\n"
" border-bottom-left-radius: 15px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
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
        label_4w->setFont(font14);
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
        label_2w->setFont(font14);
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
        label_Amp->setFont(font14);
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
        label_27->setFont(font5);
        label_27->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border:1px solid black;\n"
"border-radius:8px;"));
        label_27->setAlignment(Qt::AlignCenter);
        label_Amp_2 = new QLabel(frame);
        label_Amp_2->setObjectName(QString::fromUtf8("label_Amp_2"));
        label_Amp_2->setGeometry(QRect(176, 60, 50, 17));
        label_Amp_2->setFont(font14);
        label_Amp_2->setStyleSheet(QString::fromUtf8("color:black;"));
        DMMI_P12_2 = new QFrame(frame);
        DMMI_P12_2->setObjectName(QString::fromUtf8("DMMI_P12_2"));
        DMMI_P12_2->setGeometry(QRect(178, 16, 44, 50));
        DMMI_P12_2->setStyleSheet(QString::fromUtf8("border:1px solid rgba(0,0,0,0);\n"
"image: url(:/new/prefix1/fuse.png);"));
        DMMI_P12_2->setFrameShape(QFrame::StyledPanel);
        DMMI_P12_2->setFrameShadow(QFrame::Raised);
        label_Amp_5 = new QLabel(frame);
        label_Amp_5->setObjectName(QString::fromUtf8("label_Amp_5"));
        label_Amp_5->setGeometry(QRect(129, 60, 35, 17));
        label_Amp_5->setFont(font14);
        label_Amp_5->setStyleSheet(QString::fromUtf8("color:gray;"));
        voltBox = new QGroupBox(DMM);
        voltBox->setObjectName(QString::fromUtf8("voltBox"));
        voltBox->setGeometry(QRect(710, 32, 80, 90));
        voltBox->setFont(font1);
        voltBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        voltMeter = new QPushButton(voltBox);
        voltMeter->setObjectName(QString::fromUtf8("voltMeter"));
        voltMeter->setGeometry(QRect(8, 18, 64, 64));
        voltMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/voltmeter.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        voltMeter->setIcon(icon2);
        voltMeter->setIconSize(QSize(55, 55));
        selectFrame = new QFrame(DMM);
        selectFrame->setObjectName(QString::fromUtf8("selectFrame"));
        selectFrame->setGeometry(QRect(701, 50, 10, 60));
        selectFrame->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);*/\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3a5976, stop: 1 #000000);\n"
"border-top:1px solid white;\n"
"border-bottom:1px solid white;"));
        selectFrame->setFrameShape(QFrame::Box);
        selectFrame->setFrameShadow(QFrame::Raised);
        AmpBox = new QGroupBox(DMM);
        AmpBox->setObjectName(QString::fromUtf8("AmpBox"));
        AmpBox->setGeometry(QRect(710, 121, 80, 90));
        AmpBox->setFont(font1);
        AmpBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:1px solid white; background-color: #dadbde;border-radius:10px;border-bottom:1px qlineargradient(x1: 0, y1: 0,stop: 0 #f6f7fa, stop: 1 #dadbde);border-bottom-right-radius: 0px;\n"
" border-bottom-left-radius: 0px;\n"
"border-top:1px solid gray; border-top-right-radius: 0px;\n"
" border-top-left-radius: 0px;\n"
"}\n"
""));
        ampMeter = new QPushButton(AmpBox);
        ampMeter->setObjectName(QString::fromUtf8("ampMeter"));
        ampMeter->setGeometry(QRect(8, 17, 64, 64));
        ampMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Ammeter.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ampMeter->setIcon(icon3);
        ampMeter->setIconSize(QSize(55, 55));
        OhmBox = new QGroupBox(DMM);
        OhmBox->setObjectName(QString::fromUtf8("OhmBox"));
        OhmBox->setGeometry(QRect(710, 211, 80, 90));
        OhmBox->setFont(font1);
        OhmBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter = new QPushButton(OhmBox);
        ohmMeter->setObjectName(QString::fromUtf8("ohmMeter"));
        ohmMeter->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Ohmmeter.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ohmMeter->setIcon(icon4);
        ohmMeter->setIconSize(QSize(55, 55));
        ExitBox = new QGroupBox(DMM);
        ExitBox->setObjectName(QString::fromUtf8("ExitBox"));
        ExitBox->setGeometry(QRect(710, 480, 80, 112));
        ExitBox->setFont(font1);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/logout-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon5);
        exit->setIconSize(QSize(70, 70));
        OhmBox_2 = new QGroupBox(DMM);
        OhmBox_2->setObjectName(QString::fromUtf8("OhmBox_2"));
        OhmBox_2->setGeometry(QRect(710, 300, 80, 90));
        OhmBox_2->setFont(font1);
        OhmBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter_2 = new QPushButton(OhmBox_2);
        ohmMeter_2->setObjectName(QString::fromUtf8("ohmMeter_2"));
        ohmMeter_2->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_2->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        ohmMeter_2->setIcon(icon6);
        ohmMeter_2->setIconSize(QSize(85, 85));
        OhmBox_3 = new QGroupBox(DMM);
        OhmBox_3->setObjectName(QString::fromUtf8("OhmBox_3"));
        OhmBox_3->setGeometry(QRect(710, 390, 80, 90));
        OhmBox_3->setFont(font1);
        OhmBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        ohmMeter_3 = new QPushButton(OhmBox_3);
        ohmMeter_3->setObjectName(QString::fromUtf8("ohmMeter_3"));
        ohmMeter_3->setGeometry(QRect(8, 15, 64, 64));
        ohmMeter_3->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        ohmMeter_3->setIconSize(QSize(55, 55));
        debugPanel = new QGroupBox(DMM);
        debugPanel->setObjectName(QString::fromUtf8("debugPanel"));
        debugPanel->setGeometry(QRect(4, 434, 701, 160));
        QFont font15;
        font15.setBold(true);
        font15.setWeight(75);
        debugPanel->setFont(font15);
        debugPanel->setStyleSheet(QString::fromUtf8("QGroupBox{border:1px solid black; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ffffff, stop: 1 #dadbff);border-radius:10px;}\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 border: 2px solid black;\n"
" }"));
        pushButton_16 = new QPushButton(debugPanel);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(250, 40, 50, 50));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Letter-R-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon7);
        pushButton_16->setIconSize(QSize(48, 48));
        pushButton_14 = new QPushButton(debugPanel);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(90, 40, 50, 50));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Letter-C-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon8);
        pushButton_14->setIconSize(QSize(48, 48));
        pushButton = new QPushButton(debugPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 40, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Control-Panel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon9);
        pushButton->setIconSize(QSize(48, 48));
        pushButton_13 = new QPushButton(debugPanel);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(170, 40, 50, 50));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Letter-G-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon10);
        pushButton_13->setIconSize(QSize(48, 48));
        pushButton_15 = new QPushButton(debugPanel);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 40, 50, 50));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {border: 1px solid #8f8f91; border-radius: 8px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde); color:blue;}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Letter-A-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon11);
        pushButton_15->setIconSize(QSize(48, 48));
        calibrateDisplay = new QCheckBox(debugPanel);
        calibrateDisplay->setObjectName(QString::fromUtf8("calibrateDisplay"));
        calibrateDisplay->setGeometry(QRect(410, 50, 170, 31));
        QFont font16;
        font16.setBold(false);
        font16.setItalic(false);
        font16.setWeight(50);
        calibrateDisplay->setFont(font16);
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
        haadcFrame->setFont(font1);
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
        label_22->setGeometry(QRect(10, 120, 110, 17));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(debugPanel);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(270, 120, 120, 30));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        adcRawData = new QLineEdit(debugPanel);
        adcRawData->setObjectName(QString::fromUtf8("adcRawData"));
        adcRawData->setGeometry(QRect(120, 114, 140, 29));
        adcRawData->setFont(font5);
        adcRawData->setAlignment(Qt::AlignCenter);
        adcConvData = new QLineEdit(debugPanel);
        adcConvData->setObjectName(QString::fromUtf8("adcConvData"));
        adcConvData->setGeometry(QRect(390, 118, 210, 29));
        adcConvData->setFont(font5);
        adcConvData->setAlignment(Qt::AlignCenter);
        displayInput = new QLineEdit(debugPanel);
        displayInput->setObjectName(QString::fromUtf8("displayInput"));
        displayInput->setGeometry(QRect(390, 84, 210, 29));
        displayInput->setFont(font5);
        displayInput->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(debugPanel);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(270, 87, 120, 30));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(debugPanel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 10, 191, 27));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:black;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: orange;\n"
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
        debugPanel->raise();
        frontPanel->raise();
        AmpBox->raise();
        OhmBox->raise();
        ExitBox->raise();
        voltBox->raise();
        inputPanel->raise();
        displayPanel->raise();
        textEdit->raise();
        lineEdit->raise();
        selectFrame->raise();
        OhmBox_2->raise();
        OhmBox_3->raise();

        retranslateUi(DMM);

        QMetaObject::connectSlotsByName(DMM);
    } // setupUi

    void retranslateUi(QWidget *DMM)
    {
        DMM->setWindowTitle(QApplication::translate("DMM", "Form", 0, QApplication::UnicodeUTF8));
        r4w->setText(QApplication::translate("DMM", "Beep", 0, QApplication::UnicodeUTF8));
        iac->setText(QApplication::translate("DMM", "AC", 0, QApplication::UnicodeUTF8));
        vdc->setText(QApplication::translate("DMM", "DC", 0, QApplication::UnicodeUTF8));
        idc->setText(QApplication::translate("DMM", "DC", 0, QApplication::UnicodeUTF8));
        manual->setText(QApplication::translate("DMM", "Manual", 0, QApplication::UnicodeUTF8));
        r2w->setText(QApplication::translate("DMM", "R", 0, QApplication::UnicodeUTF8));
        Auto->setText(QApplication::translate("DMM", "AUTO", 0, QApplication::UnicodeUTF8));
        vac->setText(QApplication::translate("DMM", "AC", 0, QApplication::UnicodeUTF8));
        hold->setText(QApplication::translate("DMM", "HOLD", 0, QApplication::UnicodeUTF8));
        Null->setText(QApplication::translate("DMM", "REL", 0, QApplication::UnicodeUTF8));
        leftArrow->setText(QString());
        label_5->setText(QApplication::translate("DMM", "1000V", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DMM", "200V", 0, QApplication::UnicodeUTF8));
        rightArrow->setText(QString());
        label_4->setText(QApplication::translate("DMM", "1000V", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DMM", "FUNCTIONS", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("DMM", "RANGES", 0, QApplication::UnicodeUTF8));
        Diode->setText(QApplication::translate("DMM", "DIODE", 0, QApplication::UnicodeUTF8));
        Continuity->setText(QApplication::translate("DMM", "CONT", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DMM", "AUTO", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("DMM", "Range :", 0, QApplication::UnicodeUTF8));
        textEdit_5->setHtml(QApplication::translate("DMM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:16pt; font-weight:600; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt; color:#ffff7f;\">DC</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DMM", ")))))", 0, QApplication::UnicodeUTF8));
        textEdit_6->setHtml(QApplication::translate("DMM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:72pt; font-weight:200; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:400;\">0</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt; font-weight:400;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_12->setText(QString());
        lineEdit_4->setText(QString());
        holdLabel->setText(QApplication::translate("DMM", "HOLD", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("DMM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans Mono'; font-size:40pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:48pt; color:#000000;\">0</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("DMM", "CH2", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("DMM", "CH1", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("DMM", "DSO / AWG", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("DMM", "AWG", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("DMM", "EXT", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("DMM", "AH3", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("DMM", "AH1", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("DMM", "AH EXTERNAL CHANNEL", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("DMM", "AH0", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("DMM", "AH2", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("DMM", "GUARD", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("DMM", "REF", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("DMM", "GND", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("DMM", "QSM-VI/ICM/SHORT LOCATOR", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("DMM", "GUARD", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("DMM", "VI1/SL/ICM", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("DMM", "VI2/EXT MUX", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("DMM", "GUARDING", 0, QApplication::UnicodeUTF8));
        label_4w->setText(QApplication::translate("DMM", "A", 0, QApplication::UnicodeUTF8));
        label_2w->setText(QApplication::translate("DMM", "V", 0, QApplication::UnicodeUTF8));
        label_Amp->setText(QApplication::translate("DMM", "C", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("DMM", "DIGITAL MULTI METER", 0, QApplication::UnicodeUTF8));
        label_Amp_2->setText(QApplication::translate("DMM", "FUSE", 0, QApplication::UnicodeUTF8));
        label_Amp_5->setText(QApplication::translate("DMM", "mA", 0, QApplication::UnicodeUTF8));
        voltBox->setTitle(QString());
        voltMeter->setText(QString());
        AmpBox->setTitle(QString());
        ampMeter->setText(QString());
        OhmBox->setTitle(QString());
        ohmMeter->setText(QString());
        ExitBox->setTitle(QString());
        exit->setText(QString());
        OhmBox_2->setTitle(QString());
        ohmMeter_2->setText(QString());
        OhmBox_3->setTitle(QString());
        ohmMeter_3->setText(QString());
        debugPanel->setTitle(QApplication::translate("DMM", "DEBUG PANEL", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QString());
        pushButton_14->setText(QString());
        pushButton->setText(QString());
        pushButton_13->setText(QString());
        pushButton_15->setText(QString());
        calibrateDisplay->setText(QApplication::translate("DMM", "Screen Calibration", 0, QApplication::UnicodeUTF8));
        haadcFrame->setTitle(QString());
        haadcClose->setText(QApplication::translate("DMM", "&Close", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("DMM", "ADC Raw Data :", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("DMM", "ADC Converted\n"
"Data :", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DMM", "Display Input : ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DMM", "Enable Disable ENPKH", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DMM: public Ui_DMM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMM_H
