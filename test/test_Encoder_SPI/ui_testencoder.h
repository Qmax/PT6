/********************************************************************************
** Form generated from reading UI file 'testencoder.ui'
**
** Created: Fri Jun 20 13:33:41 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTENCODER_H
#define UI_TESTENCODER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestEncoder
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dataHex;
    QLineEdit *dataDec;
    QLineEdit *swStatus;
    QPushButton *stop;
    QPushButton *pushButton;
    QPushButton *exit;
    QLabel *label_3;
    QPushButton *status;
    QDial *dial;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QGroupBox *gridGroupBox_2;
    QLabel *lblAddr;
    QLabel *lblData;
    QLineEdit *leAddr;
    QLineEdit *leData;
    QPushButton *pbAddr;
    QPushButton *pbData;

    void setupUi(QMainWindow *TestEncoder)
    {
        if (TestEncoder->objectName().isEmpty())
            TestEncoder->setObjectName(QString::fromUtf8("TestEncoder"));
        TestEncoder->resize(485, 326);
        TestEncoder->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:black;\n"
"font:16px bold;\n"
"}\n"
"QGroupBox{\n"
"color:black;\n"
"font:16px bold;\n"
"}\n"
"QLineEdit{\n"
"color:black;\n"
"font:16px bold;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: beige\n"
"}\n"
"QPushButton {\n"
"    max-height: 2.5em;\n"
"    font: 16px bold;\n"
"    margin: 0 1px 0 1px;\n"
"    color: white;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #2198c0, stop: 1 #0d5ca6);\n"
"    border-style: outset;\n"
"    border-radius: 20px;\n"
"    border-width: 1px;\n"
"    border-color: #0c457e;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #0d5ca6, stop: 1 #2198c0);\n"
"}"));
        centralWidget = new QWidget(TestEncoder);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 450, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        dataHex = new QLineEdit(gridLayoutWidget);
        dataHex->setObjectName(QString::fromUtf8("dataHex"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dataHex->sizePolicy().hasHeightForWidth());
        dataHex->setSizePolicy(sizePolicy1);
        dataHex->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(dataHex, 1, 0, 1, 1);

        dataDec = new QLineEdit(gridLayoutWidget);
        dataDec->setObjectName(QString::fromUtf8("dataDec"));
        sizePolicy1.setHeightForWidth(dataDec->sizePolicy().hasHeightForWidth());
        dataDec->setSizePolicy(sizePolicy1);
        dataDec->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(dataDec, 1, 1, 1, 1);

        swStatus = new QLineEdit(gridLayoutWidget);
        swStatus->setObjectName(QString::fromUtf8("swStatus"));
        sizePolicy1.setHeightForWidth(swStatus->sizePolicy().hasHeightForWidth());
        swStatus->setSizePolicy(sizePolicy1);
        swStatus->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(swStatus, 1, 2, 1, 1);

        stop = new QPushButton(gridLayoutWidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stop->sizePolicy().hasHeightForWidth());
        stop->setSizePolicy(sizePolicy2);
        stop->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(stop, 2, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        exit = new QPushButton(gridLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        sizePolicy2.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy2);
        exit->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(exit, 2, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        status = new QPushButton(centralWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(460, 300, 21, 21));
        status->setFocusPolicy(Qt::NoFocus);
        status->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius:9px;"));
        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(344, 198, 111, 101));
        dial->setMinimum(0);
        dial->setMaximum(128);
        dial->setPageStep(1);
        dial->setOrientation(Qt::Horizontal);
        dial->setWrapping(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 290, 16, 16));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(379, 191, 41, 16));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(440, 240, 41, 16));
        label_6->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 240, 41, 16));
        label_9->setAlignment(Qt::AlignCenter);
        gridGroupBox_2 = new QGroupBox(centralWidget);
        gridGroupBox_2->setObjectName(QString::fromUtf8("gridGroupBox_2"));
        gridGroupBox_2->setGeometry(QRect(20, 190, 300, 110));
        lblAddr = new QLabel(gridGroupBox_2);
        lblAddr->setObjectName(QString::fromUtf8("lblAddr"));
        lblAddr->setGeometry(QRect(12, 31, 84, 19));
        lblData = new QLabel(gridGroupBox_2);
        lblData->setObjectName(QString::fromUtf8("lblData"));
        lblData->setGeometry(QRect(12, 70, 83, 19));
        leAddr = new QLineEdit(gridGroupBox_2);
        leAddr->setObjectName(QString::fromUtf8("leAddr"));
        leAddr->setGeometry(QRect(101, 31, 80, 25));
        leData = new QLineEdit(gridGroupBox_2);
        leData->setObjectName(QString::fromUtf8("leData"));
        leData->setGeometry(QRect(101, 70, 80, 25));
        pbAddr = new QPushButton(gridGroupBox_2);
        pbAddr->setObjectName(QString::fromUtf8("pbAddr"));
        pbAddr->setGeometry(QRect(191, 31, 96, 21));
        pbData = new QPushButton(gridGroupBox_2);
        pbData->setObjectName(QString::fromUtf8("pbData"));
        pbData->setGeometry(QRect(191, 70, 94, 21));
        TestEncoder->setCentralWidget(centralWidget);

        retranslateUi(TestEncoder);

        QMetaObject::connectSlotsByName(TestEncoder);
    } // setupUi

    void retranslateUi(QMainWindow *TestEncoder)
    {
        TestEncoder->setWindowTitle(QApplication::translate("TestEncoder", "TestEncoder", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TestEncoder", "Encoder Value \n"
" HEX", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TestEncoder", "Encoder Value \n"
" DEC", 0, QApplication::UnicodeUTF8));
        stop->setText(QApplication::translate("TestEncoder", "STOP", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TestEncoder", "START", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("TestEncoder", "EXIT", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TestEncoder", "Switch Status", 0, QApplication::UnicodeUTF8));
        status->setText(QString());
        label_4->setText(QApplication::translate("TestEncoder", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TestEncoder", "128", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TestEncoder", "192", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TestEncoder", "64", 0, QApplication::UnicodeUTF8));
        gridGroupBox_2->setTitle(QApplication::translate("TestEncoder", "Backpanel Read/Write", 0, QApplication::UnicodeUTF8));
        lblAddr->setText(QApplication::translate("TestEncoder", "Address  :", 0, QApplication::UnicodeUTF8));
        lblData->setText(QApplication::translate("TestEncoder", "Data        :", 0, QApplication::UnicodeUTF8));
        pbAddr->setText(QApplication::translate("TestEncoder", "     Write     ", 0, QApplication::UnicodeUTF8));
        pbData->setText(QApplication::translate("TestEncoder", "     Read     ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestEncoder: public Ui_TestEncoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTENCODER_H
