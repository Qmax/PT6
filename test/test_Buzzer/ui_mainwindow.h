/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jul 28 13:32:24 2014
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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QSpinBox *spinBox_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QLabel *label_15;
    QLineEdit *lineEdit_7;
    QLabel *label_16;
    QLineEdit *lineEdit_8;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QLabel *label_18;
    QLineEdit *lineEdit_10;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QLabel *label_20;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(179, 179, 179, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgba(179,179,179,255);\n"
"\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 760, 560));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     background-color: light gray;\n"
"     border: 2px solid black;\n"
"     border-radius: 10px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
"     font:bold 18px;\n"
"	color:white;\n"
" }\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 border: 2px solid black;\n"
" }\n"
"QLineEdit{border:1px solid white;}\n"
"\n"
"QSpinBox{border:1px solid white;}\n"
"QSpinBox::up-button {     width: 50px;  }\n"
" QSpinBox::down-button {     width: 50px; }"));
        groupBox->setFlat(false);
        spinBox_3 = new QSpinBox(groupBox);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(120, 500, 81, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        spinBox_3->setFont(font1);
        spinBox_3->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(4);
        spinBox_3->setSingleStep(1);
        spinBox_3->setValue(4);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 500, 84, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 80px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 250, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 514, 70, 17));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 270, 260, 17));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 70, 110, 20));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(260, 110, 110, 70));
        spinBox_2->setFont(font1);
        spinBox_2->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_2->setMaximum(1);
        spinBox_2->setValue(1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 70, 100, 20));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(450, 70, 100, 20));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        spinBox_4 = new QSpinBox(groupBox);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(450, 110, 110, 70));
        spinBox_4->setFont(font1);
        spinBox_4->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_4->setMaximum(100);
        spinBox_4->setValue(50);
        spinBox_5 = new QSpinBox(groupBox);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(450, 350, 110, 70));
        spinBox_5->setFont(font1);
        spinBox_5->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_5->setMaximum(100);
        spinBox_5->setValue(50);
        spinBox_6 = new QSpinBox(groupBox);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(260, 350, 110, 70));
        spinBox_6->setFont(font1);
        spinBox_6->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_6->setMaximum(1);
        spinBox_6->setValue(1);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 310, 100, 20));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(450, 310, 100, 20));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 310, 110, 20));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("QLabel::Enabled{\n"
"color:white;\n"
"}\n"
"QLabel::Disabled{\n"
"color:black;\n"
"}"));
        spinBox_7 = new QSpinBox(groupBox);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(60, 350, 120, 70));
        spinBox_7->setFont(font1);
        spinBox_7->setStyleSheet(QString::fromUtf8("QSpinBox::up-button {\n"
"     width: 50px; \n"
" }\n"
" QSpinBox::down-button {\n"
"     width: 50px;\n"
" }"));
        spinBox_7->setMaximum(10000);
        spinBox_7->setSingleStep(1);
        spinBox_7->setValue(1000);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 117, 50, 17));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(640, 110, 100, 29));
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(640, 150, 100, 29));
        lineEdit_2->setFont(font4);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(590, 157, 50, 17));
        label_11->setFont(font4);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(640, 190, 100, 29));
        lineEdit_3->setFont(font4);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 197, 50, 30));
        label_12->setFont(font4);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(640, 430, 100, 29));
        lineEdit_4->setFont(font4);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(590, 437, 50, 30));
        label_13->setFont(font4);
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(640, 390, 100, 29));
        lineEdit_5->setFont(font4);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(600, 360, 50, 17));
        label_14->setFont(font4);
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(640, 353, 100, 29));
        lineEdit_6->setFont(font4);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(590, 397, 50, 17));
        label_15->setFont(font4);
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 220, 80, 29));
        lineEdit_7->setFont(font4);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 227, 40, 17));
        label_16->setFont(font4);
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(290, 220, 80, 29));
        lineEdit_8->setFont(font4);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(260, 227, 30, 17));
        label_17->setFont(font4);
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(480, 220, 80, 29));
        lineEdit_9->setFont(font4);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(450, 226, 30, 17));
        label_18->setFont(font4);
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(480, 450, 80, 29));
        lineEdit_10->setFont(font4);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(60, 457, 50, 17));
        label_19->setFont(font4);
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(290, 450, 80, 29));
        lineEdit_11->setFont(font4);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(260, 457, 30, 20));
        label_20->setFont(font4);
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(100, 450, 80, 29));
        lineEdit_12->setFont(font4);
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(450, 456, 30, 17));
        label_21->setFont(font4);
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(70, 110, 120, 70));
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{border:1px solid white;}\n"
"QDoubleSpinBox::up-button {     width: 50px;  }\n"
" QDoubleSpinBox::down-button {     width: 50px; }"));
        doubleSpinBox->setSingleStep(0.1);
        doubleSpinBox->setValue(20);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Buzzer Control", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Buzzer Control", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "on/off", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Buzzer Modulation", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Volume", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Buzzer Tone", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Frequency", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "PWMFlag", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Percentage", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "PWMFlag", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Percentage", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Frequency", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Time:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Period:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Duty\n"
"Cycle:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Duty\n"
"Cycle:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Time:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Period:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "0x4", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "0x6", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "0x8", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "0xA", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "0xC", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "0xE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
