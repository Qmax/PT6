/****************************************************************************
** Meta object code from reading C++ file 'ptpsoctestjiginterface2.h'
**
** Created: Mon Jul 7 11:59:57 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ptpsoctestjiginterface2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptpsoctestjiginterface2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PTPSoCTestJigInterface2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      57,   51,   24,   24, 0x08,
      97,   24,   24,   24, 0x08,
     114,   24,   24,   24, 0x08,
     127,   24,   24,   24, 0x08,
     139,   24,   24,   24, 0x08,
     152,   24,   24,   24, 0x08,
     165,   24,   24,   24, 0x08,
     179,   24,   24,   24, 0x08,
     193,   24,   24,   24, 0x08,
     206,   24,   24,   24, 0x08,
     221,   24,   24,   24, 0x08,
     241,   24,   24,   24, 0x08,
     256,   24,   24,   24, 0x08,
     279,   24,   24,   24, 0x08,
     296,   24,   24,   24, 0x08,
     309,   24,   24,   24, 0x08,
     321,   24,   24,   24, 0x08,
     333,   24,   24,   24, 0x08,
     346,   24,   24,   24, 0x08,
     365,   24,   24,   24, 0x08,
     384,   24,   24,   24, 0x08,
     407,   24,   24,   24, 0x08,
     425,   24,   24,   24, 0x08,
     451,   24,   24,   24, 0x08,
     472,   24,   24,   24, 0x08,
     493,   24,   24,   24, 0x08,
     508,   24,   24,   24, 0x08,
     527,   24,   24,   24, 0x08,
     545,   24,   24,   24, 0x08,
     564,   24,   24,   24, 0x08,
     578,   24,   24,   24, 0x08,
     600,   24,   24,   24, 0x08,
     616,   24,   24,   24, 0x08,
     635,   24,   24,   24, 0x08,
     656,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PTPSoCTestJigInterface2[] = {
    "PTPSoCTestJigInterface2\0\0"
    "on_switchSRCIMP_clicked()\0index\0"
    "on_comboBox_10_currentIndexChanged(int)\0"
    "EnDisSRCIM(bool)\0TestButton()\0SwitchMux()\0"
    "ReadCodeID()\0ReadRelays()\0ResetRelays()\0"
    "SendCommand()\0Multimeter()\0Oscilloscope()\0"
    "FunctionGenerator()\0ShortLocator()\0"
    "InCircuitMeasurement()\0VoltageCurrent()\0"
    "Voltage(int)\0R2Wire(int)\0R4Wire(int)\0"
    "Current(int)\0Oscilloscope1(int)\0"
    "Oscilloscope2(int)\0FunctionGenerater(int)\0"
    "ShortLocater(int)\0InCircuitMeasureMent(int)\0"
    "VoltageCurrent1(int)\0VoltageCurrent2(int)\0"
    "MuxInputs(int)\0callMuxTestInput()\0"
    "callMuxRefInput()\0callCommandInput()\0"
    "EmbeddedKey()\0CommandSelection(int)\0"
    "psocError(bool)\0receiveValue(uint)\0"
    "receiveValue(double)\0receiveValue(QString)\0"
};

const QMetaObject PTPSoCTestJigInterface2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PTPSoCTestJigInterface2,
      qt_meta_data_PTPSoCTestJigInterface2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PTPSoCTestJigInterface2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PTPSoCTestJigInterface2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PTPSoCTestJigInterface2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PTPSoCTestJigInterface2))
        return static_cast<void*>(const_cast< PTPSoCTestJigInterface2*>(this));
    return QWidget::qt_metacast(_clname);
}

int PTPSoCTestJigInterface2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_switchSRCIMP_clicked(); break;
        case 1: on_comboBox_10_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: EnDisSRCIM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: TestButton(); break;
        case 4: SwitchMux(); break;
        case 5: ReadCodeID(); break;
        case 6: ReadRelays(); break;
        case 7: ResetRelays(); break;
        case 8: SendCommand(); break;
        case 9: Multimeter(); break;
        case 10: Oscilloscope(); break;
        case 11: FunctionGenerator(); break;
        case 12: ShortLocator(); break;
        case 13: InCircuitMeasurement(); break;
        case 14: VoltageCurrent(); break;
        case 15: Voltage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: R2Wire((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: R4Wire((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: Current((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: Oscilloscope1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: Oscilloscope2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: FunctionGenerater((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: ShortLocater((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: InCircuitMeasureMent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: VoltageCurrent1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: VoltageCurrent2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: MuxInputs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: callMuxTestInput(); break;
        case 28: callMuxRefInput(); break;
        case 29: callCommandInput(); break;
        case 30: EmbeddedKey(); break;
        case 31: CommandSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: psocError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 34: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
