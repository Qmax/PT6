/****************************************************************************
** Meta object code from reading C++ file 'ad5318.h'
**
** Created: Wed Jul 9 12:50:58 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ad5318.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ad5318.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AD5318[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      58,    7,    7,    7, 0x08,
      82,    7,    7,    7, 0x08,
     105,    7,    7,    7, 0x08,
     127,    7,    7,    7, 0x08,
     153,    7,    7,    7, 0x08,
     179,    7,    7,    7, 0x08,
     207,    7,    7,    7, 0x08,
     228,    7,    7,    7, 0x08,
     249,    7,    7,    7, 0x08,
     270,    7,    7,    7, 0x08,
     291,    7,    7,    7, 0x08,
     312,    7,    7,    7, 0x08,
     333,    7,    7,    7, 0x08,
     354,    7,    7,    7, 0x08,
     375,    7,    7,    7, 0x08,
     401,    7,    7,    7, 0x08,
     424,    7,    7,    7, 0x08,
     446,    7,    7,    7, 0x08,
     467,    7,    7,    7, 0x08,
     491,    7,    7,    7, 0x08,
     516,    7,    7,    7, 0x08,
     540,    7,    7,    7, 0x08,
     561,    7,    7,    7, 0x08,
     582,    7,    7,    7, 0x08,
     600,    7,    7,    7, 0x08,
     615,    7,    7,    7, 0x08,
     636,    7,    7,    7, 0x08,
     656,    7,    7,    7, 0x08,
     680,    7,    7,    7, 0x08,
     690,    7,    7,    7, 0x08,
     716,    7,    7,    7, 0x08,
     736,    7,    7,    7, 0x08,
     756,    7,    7,    7, 0x08,
     779,    7,    7,    7, 0x08,
     801,    7,    7,    7, 0x08,
     823,    7,    7,    7, 0x08,
     846,    7,    7,    7, 0x08,
     869,    7,    7,    7, 0x08,
     892,    7,    7,    7, 0x08,
     916,    7,    7,    7, 0x08,
     942,    7,    7,    7, 0x08,
     973,    7,    7,    7, 0x08,
     995,    7,    7,    7, 0x08,
    1030, 1023,    7,    7, 0x08,
    1049,    7,    7,    7, 0x08,
    1070,    7,    7,    7, 0x08,
    1092,    7,    7,    7, 0x08,
    1112,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AD5318[] = {
    "AD5318\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_butLMH6518_clicked()\0on_Reference_clicked()\0"
    "on_Receiver_clicked()\0on_DriveVoltage_clicked()\0"
    "on_DriveCurrent_clicked()\0"
    "on_butFileManager_clicked()\0"
    "on_chkDACH_clicked()\0on_chkDACG_clicked()\0"
    "on_chkDACF_clicked()\0on_chkDACE_clicked()\0"
    "on_chkDACD_clicked()\0on_chkDACC_clicked()\0"
    "on_chkDACB_clicked()\0on_chkDACA_clicked()\0"
    "on_butUpdateDAC_clicked()\0"
    "on_butRstDAC_clicked()\0on_butWrite_clicked()\0"
    "on_butRead_clicked()\0on_butDriveDC_clicked()\0"
    "on_butStartADC_clicked()\0"
    "on_butStopADC_clicked()\0on_chkADC1_clicked()\0"
    "on_chkADC2_clicked()\0callAddressEdit()\0"
    "callDataEdit()\0callDACVoltageEdit()\0"
    "callDCVoltageEdit()\0callAD5293VoltageEdit()\0"
    "readADC()\0switchRLY(unsigned short)\0"
    "on_chkP1V_clicked()\0on_chkP2V_clicked()\0"
    "on_chkPseudo_clicked()\0on_butGain1_clicked()\0"
    "on_butGain8_clicked()\0on_butGain16_clicked()\0"
    "on_butGain32_clicked()\0on_butGain64_clicked()\0"
    "on_butGain128_clicked()\0"
    "on_butSwitchRly_clicked()\0"
    "on_butCheckDriveDone_clicked()\0"
    "on_butStart_clicked()\0on_butAD5293Drive_clicked()\0"
    "pValue\0receiveValue(uint)\0"
    "receiveValue(double)\0receiveValue(QString)\0"
    "switchDACVoltages()\0switchRelays()\0"
};

const QMetaObject AD5318::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AD5318,
      qt_meta_data_AD5318, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AD5318::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AD5318::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AD5318::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AD5318))
        return static_cast<void*>(const_cast< AD5318*>(this));
    return QWidget::qt_metacast(_clname);
}

int AD5318::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_butLMH6518_clicked(); break;
        case 3: on_Reference_clicked(); break;
        case 4: on_Receiver_clicked(); break;
        case 5: on_DriveVoltage_clicked(); break;
        case 6: on_DriveCurrent_clicked(); break;
        case 7: on_butFileManager_clicked(); break;
        case 8: on_chkDACH_clicked(); break;
        case 9: on_chkDACG_clicked(); break;
        case 10: on_chkDACF_clicked(); break;
        case 11: on_chkDACE_clicked(); break;
        case 12: on_chkDACD_clicked(); break;
        case 13: on_chkDACC_clicked(); break;
        case 14: on_chkDACB_clicked(); break;
        case 15: on_chkDACA_clicked(); break;
        case 16: on_butUpdateDAC_clicked(); break;
        case 17: on_butRstDAC_clicked(); break;
        case 18: on_butWrite_clicked(); break;
        case 19: on_butRead_clicked(); break;
        case 20: on_butDriveDC_clicked(); break;
        case 21: on_butStartADC_clicked(); break;
        case 22: on_butStopADC_clicked(); break;
        case 23: on_chkADC1_clicked(); break;
        case 24: on_chkADC2_clicked(); break;
        case 25: callAddressEdit(); break;
        case 26: callDataEdit(); break;
        case 27: callDACVoltageEdit(); break;
        case 28: callDCVoltageEdit(); break;
        case 29: callAD5293VoltageEdit(); break;
        case 30: readADC(); break;
        case 31: switchRLY((*reinterpret_cast< unsigned short(*)>(_a[1]))); break;
        case 32: on_chkP1V_clicked(); break;
        case 33: on_chkP2V_clicked(); break;
        case 34: on_chkPseudo_clicked(); break;
        case 35: on_butGain1_clicked(); break;
        case 36: on_butGain8_clicked(); break;
        case 37: on_butGain16_clicked(); break;
        case 38: on_butGain32_clicked(); break;
        case 39: on_butGain64_clicked(); break;
        case 40: on_butGain128_clicked(); break;
        case 41: on_butSwitchRly_clicked(); break;
        case 42: on_butCheckDriveDone_clicked(); break;
        case 43: on_butStart_clicked(); break;
        case 44: on_butAD5293Drive_clicked(); break;
        case 45: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: switchDACVoltages(); break;
        case 49: switchRelays(); break;
        default: ;
        }
        _id -= 50;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
