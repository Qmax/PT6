/****************************************************************************
** Meta object code from reading C++ file 'ptpsoctestjiginterface.h'
**
** Created: Mon Jul 28 13:29:19 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ptpsoctestjiginterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptpsoctestjiginterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PTPSoCTestJigInterface[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      50,   23,   23,   23, 0x08,
      80,   74,   23,   23, 0x08,
     120,   23,   23,   23, 0x08,
     146,   23,   23,   23, 0x08,
     172,   23,   23,   23, 0x08,
     198,   23,   23,   23, 0x08,
     224,   23,   23,   23, 0x08,
     250,   23,   23,   23, 0x08,
     276,   23,   23,   23, 0x08,
     300,   23,   23,   23, 0x08,
     326,   23,   23,   23, 0x08,
     339,   23,   23,   23, 0x08,
     351,   23,   23,   23, 0x08,
     364,   23,   23,   23, 0x08,
     377,   23,   23,   23, 0x08,
     391,   23,   23,   23, 0x08,
     405,   23,   23,   23, 0x08,
     418,   23,   23,   23, 0x08,
     433,   23,   23,   23, 0x08,
     453,   23,   23,   23, 0x08,
     468,   23,   23,   23, 0x08,
     491,   23,   23,   23, 0x08,
     508,   23,   23,   23, 0x08,
     521,   23,   23,   23, 0x08,
     533,   23,   23,   23, 0x08,
     545,   23,   23,   23, 0x08,
     558,   23,   23,   23, 0x08,
     577,   23,   23,   23, 0x08,
     596,   23,   23,   23, 0x08,
     619,   23,   23,   23, 0x08,
     637,   23,   23,   23, 0x08,
     663,   23,   23,   23, 0x08,
     684,   23,   23,   23, 0x08,
     705,   23,   23,   23, 0x08,
     720,   23,   23,   23, 0x08,
     739,   23,   23,   23, 0x08,
     757,   23,   23,   23, 0x08,
     776,   23,   23,   23, 0x08,
     790,   23,   23,   23, 0x08,
     804,   23,   23,   23, 0x08,
     818,   23,   23,   23, 0x08,
     832,   23,   23,   23, 0x08,
     846,   23,   23,   23, 0x08,
     868,   23,   23,   23, 0x08,
     884,   23,   23,   23, 0x08,
     903,   23,   23,   23, 0x08,
     924,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PTPSoCTestJigInterface[] = {
    "PTPSoCTestJigInterface\0\0"
    "on_pushButton_7_clicked()\0"
    "on_topRelay24_clicked()\0index\0"
    "on_comboBox_13_currentIndexChanged(int)\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_5_clicked()\0TestButton()\0"
    "SwitchMux()\0ReadCodeID()\0ReadRelays()\0"
    "ResetRelays()\0SendCommand()\0Multimeter()\0"
    "Oscilloscope()\0FunctionGenerator()\0"
    "ShortLocator()\0InCircuitMeasurement()\0"
    "VoltageCurrent()\0Voltage(int)\0R2Wire(int)\0"
    "R4Wire(int)\0Current(int)\0Oscilloscope1(int)\0"
    "Oscilloscope2(int)\0FunctionGenerater(int)\0"
    "ShortLocater(int)\0InCircuitMeasureMent(int)\0"
    "VoltageCurrent1(int)\0VoltageCurrent2(int)\0"
    "MuxInputs(int)\0callMuxTestInput()\0"
    "callMuxRefInput()\0callCommandInput()\0"
    "callAppAddr()\0callAppData()\0callBckAddr()\0"
    "callBckData()\0EmbeddedKey()\0"
    "CommandSelection(int)\0psocError(bool)\0"
    "receiveValue(uint)\0receiveValue(double)\0"
    "receiveValue(QString)\0"
};

const QMetaObject PTPSoCTestJigInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PTPSoCTestJigInterface,
      qt_meta_data_PTPSoCTestJigInterface, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PTPSoCTestJigInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PTPSoCTestJigInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PTPSoCTestJigInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PTPSoCTestJigInterface))
        return static_cast<void*>(const_cast< PTPSoCTestJigInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int PTPSoCTestJigInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_7_clicked(); break;
        case 1: on_topRelay24_clicked(); break;
        case 2: on_comboBox_13_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_pushButton_6_clicked(); break;
        case 4: on_pushButton_4_clicked(); break;
        case 5: on_pushButton_3_clicked(); break;
        case 6: on_pushButton_8_clicked(); break;
        case 7: on_pushButton_9_clicked(); break;
        case 8: on_pushButton_2_clicked(); break;
        case 9: on_pushButton_clicked(); break;
        case 10: on_pushButton_5_clicked(); break;
        case 11: TestButton(); break;
        case 12: SwitchMux(); break;
        case 13: ReadCodeID(); break;
        case 14: ReadRelays(); break;
        case 15: ResetRelays(); break;
        case 16: SendCommand(); break;
        case 17: Multimeter(); break;
        case 18: Oscilloscope(); break;
        case 19: FunctionGenerator(); break;
        case 20: ShortLocator(); break;
        case 21: InCircuitMeasurement(); break;
        case 22: VoltageCurrent(); break;
        case 23: Voltage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: R2Wire((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: R4Wire((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: Current((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: Oscilloscope1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: Oscilloscope2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: FunctionGenerater((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: ShortLocater((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: InCircuitMeasureMent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: VoltageCurrent1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: VoltageCurrent2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: MuxInputs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: callMuxTestInput(); break;
        case 36: callMuxRefInput(); break;
        case 37: callCommandInput(); break;
        case 38: callAppAddr(); break;
        case 39: callAppData(); break;
        case 40: callBckAddr(); break;
        case 41: callBckData(); break;
        case 42: EmbeddedKey(); break;
        case 43: CommandSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: psocError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 48;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
