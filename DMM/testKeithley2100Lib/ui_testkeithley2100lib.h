/********************************************************************************
** Form generated from reading UI file 'testkeithley2100lib.ui'
**
** Created: Fri Jun 20 13:32:55 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTKEITHLEY2100LIB_H
#define UI_TESTKEITHLEY2100LIB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testKeithley2100LibClass
{
public:
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *testKeithley2100LibClass)
    {
        if (testKeithley2100LibClass->objectName().isEmpty())
            testKeithley2100LibClass->setObjectName(QString::fromUtf8("testKeithley2100LibClass"));
        testKeithley2100LibClass->resize(268, 300);
        lineEdit = new QLineEdit(testKeithley2100LibClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 20, 241, 41));
        horizontalLayoutWidget = new QWidget(testKeithley2100LibClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 221, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_2 = new QComboBox(horizontalLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox_2);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(testKeithley2100LibClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 91, 27));
        pushButton_2 = new QPushButton(testKeithley2100LibClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 200, 91, 27));

        retranslateUi(testKeithley2100LibClass);

        QMetaObject::connectSlotsByName(testKeithley2100LibClass);
    } // setupUi

    void retranslateUi(QWidget *testKeithley2100LibClass)
    {
        testKeithley2100LibClass->setWindowTitle(QApplication::translate("testKeithley2100LibClass", "testKeithley2100Lib", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("testKeithley2100LibClass", "Select..", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "Resistance", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "DCVoltage", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "DCCurrent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "ACVoltage", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "ACCurrent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "Diode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testKeithley2100LibClass", "Continuity", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("testKeithley2100LibClass", "Start", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("testKeithley2100LibClass", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testKeithley2100LibClass: public Ui_testKeithley2100LibClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTKEITHLEY2100LIB_H
