/********************************************************************************
** Form generated from reading UI file 'multipletraces.ui'
**
** Created: Thu Jul 31 19:29:54 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLETRACES_H
#define UI_MULTIPLETRACES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultipleTracesClass
{
public:
    QWidget *centralwidget;
    QPushButton *objClose;
    QPushButton *butPrev;
    QPushButton *butNext;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPinComb;
    QLabel *lblCombinations;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblPinComb_2;
    QLabel *lblCurrenttoTotal;
    QSplitter *butSplitter;
    QPushButton *butPass;
    QPushButton *butFail;
    QPushButton *butALL;

    void setupUi(QMainWindow *MultipleTracesClass)
    {
        if (MultipleTracesClass->objectName().isEmpty())
            MultipleTracesClass->setObjectName(QString::fromUtf8("MultipleTracesClass"));
        MultipleTracesClass->setWindowModality(Qt::WindowModal);
        MultipleTracesClass->resize(578, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MultipleTracesClass->sizePolicy().hasHeightForWidth());
        MultipleTracesClass->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(108, 108, 107, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(162, 162, 161, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(135, 135, 134, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(54, 54, 53, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(72, 72, 71, 255));
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
        MultipleTracesClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        MultipleTracesClass->setWindowIcon(icon);
        centralwidget = new QWidget(MultipleTracesClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        objClose = new QPushButton(centralwidget);
        objClose->setObjectName(QString::fromUtf8("objClose"));
        objClose->setGeometry(QRect(480, 390, 84, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        objClose->setFont(font);
        objClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid #8f8f91;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"min-width: 80px;\n"
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
"}"));
        butPrev = new QPushButton(centralwidget);
        butPrev->setObjectName(QString::fromUtf8("butPrev"));
        butPrev->setGeometry(QRect(300, 390, 84, 51));
        butPrev->setFont(font);
        butPrev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid #8f8f91;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"min-width: 80px;\n"
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
"}"));
        butNext = new QPushButton(centralwidget);
        butNext->setObjectName(QString::fromUtf8("butNext"));
        butNext->setGeometry(QRect(390, 390, 84, 51));
        butNext->setFont(font);
        butNext->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid #8f8f91;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"min-width: 80px;\n"
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
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 363, 251, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblPinComb = new QLabel(layoutWidget);
        lblPinComb->setObjectName(QString::fromUtf8("lblPinComb"));
        QPalette palette1;
        QBrush brush8(QColor(0, 170, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        lblPinComb->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        lblPinComb->setFont(font1);

        horizontalLayout->addWidget(lblPinComb);

        lblCombinations = new QLabel(layoutWidget);
        lblCombinations->setObjectName(QString::fromUtf8("lblCombinations"));
        QPalette palette2;
        QBrush brush9(QColor(255, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        QBrush brush10(QColor(85, 255, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        lblCombinations->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        lblCombinations->setFont(font2);

        horizontalLayout->addWidget(lblCombinations);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 400, 249, 45));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblPinComb_2 = new QLabel(layoutWidget1);
        lblPinComb_2->setObjectName(QString::fromUtf8("lblPinComb_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush10);
        QBrush brush11(QColor(85, 170, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblPinComb_2->setPalette(palette3);
        lblPinComb_2->setFont(font1);

        horizontalLayout_2->addWidget(lblPinComb_2);

        lblCurrenttoTotal = new QLabel(layoutWidget1);
        lblCurrenttoTotal->setObjectName(QString::fromUtf8("lblCurrenttoTotal"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblCurrenttoTotal->setPalette(palette4);
        lblCurrenttoTotal->setFont(font2);

        horizontalLayout_2->addWidget(lblCurrenttoTotal);

        butSplitter = new QSplitter(centralwidget);
        butSplitter->setObjectName(QString::fromUtf8("butSplitter"));
        butSplitter->setGeometry(QRect(484, 70, 81, 211));
        butSplitter->setOrientation(Qt::Vertical);
        butPass = new QPushButton(butSplitter);
        butPass->setObjectName(QString::fromUtf8("butPass"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient(0, 1, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(26, 116, 219, 255));
        gradient.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush12(gradient);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient1(0, 1, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(26, 116, 219, 255));
        gradient1.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush13(gradient1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush13);
        QLinearGradient gradient2(0, 1, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(26, 116, 219, 255));
        gradient2.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush14(gradient2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient3(0, 1, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(26, 116, 219, 255));
        gradient3.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush15(gradient3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient4(0, 1, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(26, 116, 219, 255));
        gradient4.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush16(gradient4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        QLinearGradient gradient5(0, 1, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(26, 116, 219, 255));
        gradient5.setColorAt(0.6, QColor(82, 147, 222, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush17(gradient5);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        QBrush brush18(QColor(211, 211, 211, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        QBrush brush19(QColor(128, 128, 128, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        butPass->setPalette(palette5);
        butPass->setFont(font);
        butPass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:black;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));
        butSplitter->addWidget(butPass);
        butFail = new QPushButton(butSplitter);
        butFail->setObjectName(QString::fromUtf8("butFail"));
        butFail->setFont(font);
        butFail->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:black;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));
        butSplitter->addWidget(butFail);
        butALL = new QPushButton(butSplitter);
        butALL->setObjectName(QString::fromUtf8("butALL"));
        butALL->setFont(font);
        butALL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:black;\n"
"border: 1px solid #2D5059;\n"
"border-radius: 20px;\n"
"background-color: qlineargradient(x1: 0, y1: 1, x2: 1, y2: 0,\n"
"stop: 0 #1A74DB, stop: 0.6 #5293DE, stop:1 #FFFFFF);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"color:lightgrey;\n"
"background-color:grey\n"
"}\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));
        butSplitter->addWidget(butALL);
        MultipleTracesClass->setCentralWidget(centralwidget);

        retranslateUi(MultipleTracesClass);

        QMetaObject::connectSlotsByName(MultipleTracesClass);
    } // setupUi

    void retranslateUi(QMainWindow *MultipleTracesClass)
    {
        MultipleTracesClass->setWindowTitle(QApplication::translate("MultipleTracesClass", "MultipleTraces", 0, QApplication::UnicodeUTF8));
        objClose->setText(QApplication::translate("MultipleTracesClass", "Close", 0, QApplication::UnicodeUTF8));
        butPrev->setText(QApplication::translate("MultipleTracesClass", "Prev", 0, QApplication::UnicodeUTF8));
        butNext->setText(QApplication::translate("MultipleTracesClass", "Next", 0, QApplication::UnicodeUTF8));
        lblPinComb->setText(QApplication::translate("MultipleTracesClass", "No of Combinations:", 0, QApplication::UnicodeUTF8));
        lblCombinations->setText(QString());
        lblPinComb_2->setText(QApplication::translate("MultipleTracesClass", "Combinations:", 0, QApplication::UnicodeUTF8));
        lblCurrenttoTotal->setText(QString());
        butPass->setText(QApplication::translate("MultipleTracesClass", "Pass", 0, QApplication::UnicodeUTF8));
        butFail->setText(QApplication::translate("MultipleTracesClass", "Fail", 0, QApplication::UnicodeUTF8));
        butALL->setText(QApplication::translate("MultipleTracesClass", "All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MultipleTracesClass: public Ui_MultipleTracesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLETRACES_H
