/****************************************************************************
** Meta object code from reading C++ file 'ad9102ui.h'
**
** Created: Tue Jan 7 17:54:50 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ad9102ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ad9102ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AD9102UI[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      62,    9,    9,    9, 0x08,
      86,    9,    9,    9, 0x08,
     111,    9,    9,    9, 0x08,
     135,    9,    9,    9, 0x08,
     162,    9,    9,    9, 0x08,
     187,    9,    9,    9, 0x08,
     213,    9,    9,    9, 0x08,
     238,    9,    9,    9, 0x08,
     267,  261,    9,    9, 0x08,
     304,    9,    9,    9, 0x08,
     330,    9,    9,    9, 0x08,
     354,    9,    9,    9, 0x08,
     376,    9,    9,    9, 0x08,
     397,    9,    9,    9, 0x08,
     422,    9,    9,    9, 0x08,
     446,    9,    9,    9, 0x08,
     468,    9,    9,    9, 0x08,
     489,    9,    9,    9, 0x08,
     508,    9,    9,    9, 0x08,
     529,    9,    9,    9, 0x08,
     551,    9,    9,    9, 0x08,
     569,    9,    9,    9, 0x08,
     584,    9,    9,    9, 0x08,
     605,    9,    9,    9, 0x08,
     623,    9,    9,    9, 0x08,
     635,    9,    9,    9, 0x08,
     653,    9,    9,    9, 0x08,
     668,    9,    9,    9, 0x08,
     691,    9,    9,    9, 0x08,
     707,    9,    9,    9, 0x08,
     723,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AD9102UI[] = {
    "AD9102UI\0\0on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pb_TestRead_clicked()\0"
    "on_pb_TestRUN_clicked()\0"
    "on_pb_SRAMUpdate_clicked()\0"
    "on_pb_SRAMLoad_clicked()\0"
    "on_pb_SRAMWrite_clicked()\0"
    "on_pb_SRAMRead_clicked()\0"
    "on_pb_Update_clicked()\0index\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pb_TestWrite_clicked()\0"
    "on_pb_Trigger_clicked()\0on_pb_Reset_clicked()\0"
    "on_pb_Test_clicked()\0on_pb_AppWrite_clicked()\0"
    "on_pb_AppRead_clicked()\0on_pb_Write_clicked()\0"
    "on_pb_Read_clicked()\0receiveValue(uint)\0"
    "receiveValue(double)\0receiveValue(QString)\0"
    "callAddressEdit()\0callDataEdit()\0"
    "callAppAddressEdit()\0callAppDataEdit()\0"
    "callDelay()\0callSRAMAddress()\0"
    "callSRAMData()\0callSRAMStartAddress()\0"
    "callSRAMCount()\0callFrequency()\0"
    "callPhase()\0"
};

const QMetaObject AD9102UI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AD9102UI,
      qt_meta_data_AD9102UI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AD9102UI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AD9102UI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AD9102UI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AD9102UI))
        return static_cast<void*>(const_cast< AD9102UI*>(this));
    return QWidget::qt_metacast(_clname);
}

int AD9102UI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_3_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_pushButton_clicked(); break;
        case 3: on_pb_TestRead_clicked(); break;
        case 4: on_pb_TestRUN_clicked(); break;
        case 5: on_pb_SRAMUpdate_clicked(); break;
        case 6: on_pb_SRAMLoad_clicked(); break;
        case 7: on_pb_SRAMWrite_clicked(); break;
        case 8: on_pb_SRAMRead_clicked(); break;
        case 9: on_pb_Update_clicked(); break;
        case 10: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_pb_TestWrite_clicked(); break;
        case 12: on_pb_Trigger_clicked(); break;
        case 13: on_pb_Reset_clicked(); break;
        case 14: on_pb_Test_clicked(); break;
        case 15: on_pb_AppWrite_clicked(); break;
        case 16: on_pb_AppRead_clicked(); break;
        case 17: on_pb_Write_clicked(); break;
        case 18: on_pb_Read_clicked(); break;
        case 19: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 20: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: callAddressEdit(); break;
        case 23: callDataEdit(); break;
        case 24: callAppAddressEdit(); break;
        case 25: callAppDataEdit(); break;
        case 26: callDelay(); break;
        case 27: callSRAMAddress(); break;
        case 28: callSRAMData(); break;
        case 29: callSRAMStartAddress(); break;
        case 30: callSRAMCount(); break;
        case 31: callFrequency(); break;
        case 32: callPhase(); break;
        default: ;
        }
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
