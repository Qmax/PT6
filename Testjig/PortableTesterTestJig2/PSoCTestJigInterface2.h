#ifndef PSOCINTERFACE_H
#define PSOCINTERFACE_H
#include <QObject>
#include <QWidget>
class IPSOCTestJigInterface2
{
public:
    virtual void setPSOC(QWidget* parent)=0;
    virtual void closePSOC()=0;
    virtual void HardwareInitializtaion()=0;
};

Q_DECLARE_INTERFACE(IPSOCTestJigInterface2,"pt.PSOCTestJigInterface2/1.0.0.1");
#endif // PSOCINTERFACE_H