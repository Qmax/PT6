#include "displayinfo.h"
#include "ui_displayinfo.h"

DisplayInfo::DisplayInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayInfo)
{
    ui->setupUi(this);
}

DisplayInfo::~DisplayInfo()
{
    delete ui;
}

void DisplayInfo::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
