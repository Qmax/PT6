/****************************************************************************
** Meta object code from reading C++ file 'shortlocater.h'
**
** Created: Thu Jul 31 19:36:11 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shortlocater.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortlocater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShortLocater[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      24,   13,   13,   13, 0x0a,
      47,   39,   13,   13, 0x08,
      80,   13,   13,   13, 0x08,
     102,   13,   13,   13, 0x08,
     124,   13,   13,   13, 0x08,
     150,   13,   13,   13, 0x08,
     169,   13,   13,   13, 0x08,
     193,   13,   13,   13, 0x08,
     217,   13,   13,   13, 0x08,
     235,   13,   13,   13, 0x08,
     258,   13,   13,   13, 0x08,
     276,   13,   13,   13, 0x08,
     296,   13,   13,   13, 0x08,
     314,   13,   13,   13, 0x08,
     334,   13,   13,   13, 0x08,
     352,   13,   13,   13, 0x08,
     375,   13,   13,   13, 0x08,
     395,   13,   13,   13, 0x08,
     416,   13,   13,   13, 0x08,
     442,   13,   13,   13, 0x08,
     466,   13,   13,   13, 0x08,
     492,   13,   13,   13, 0x08,
     518,   13,   13,   13, 0x08,
     542,   13,   13,   13, 0x08,
     554,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShortLocater[] = {
    "ShortLocater\0\0Measure()\0Configure(int)\0"
    "checked\0on_openShortEnable_clicked(bool)\0"
    "on_External_clicked()\0on_Internal_clicked()\0"
    "on_pushButton_2_clicked()\0on_HAADC_clicked()\0"
    "on_haadcClose_clicked()\0on_pushButton_clicked()\0"
    "on_hold_clicked()\0on_microOhms_clicked()\0"
    "on_Null_clicked()\0on_offset_clicked()\0"
    "on_Auto_clicked()\0on_buzzer_clicked()\0"
    "on_exit_clicked()\0on_r200mEBut_clicked()\0"
    "on_r2EBut_clicked()\0on_r200But_clicked()\0"
    "on_ShortCalib_2_clicked()\0"
    "on_ShortCalib_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_printImage_clicked()\0startStop()\0"
    "Exit()\0"
};

const QMetaObject ShortLocater::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShortLocater,
      qt_meta_data_ShortLocater, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortLocater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortLocater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortLocater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortLocater))
        return static_cast<void*>(const_cast< ShortLocater*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShortLocater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Measure(); break;
        case 1: Configure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_openShortEnable_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_External_clicked(); break;
        case 4: on_Internal_clicked(); break;
        case 5: on_pushButton_2_clicked(); break;
        case 6: on_HAADC_clicked(); break;
        case 7: on_haadcClose_clicked(); break;
        case 8: on_pushButton_clicked(); break;
        case 9: on_hold_clicked(); break;
        case 10: on_microOhms_clicked(); break;
        case 11: on_Null_clicked(); break;
        case 12: on_offset_clicked(); break;
        case 13: on_Auto_clicked(); break;
        case 14: on_buzzer_clicked(); break;
        case 15: on_exit_clicked(); break;
        case 16: on_r200mEBut_clicked(); break;
        case 17: on_r2EBut_clicked(); break;
        case 18: on_r200But_clicked(); break;
        case 19: on_ShortCalib_2_clicked(); break;
        case 20: on_ShortCalib_clicked(); break;
        case 21: on_pushButton_5_clicked(); break;
        case 22: on_pushButton_3_clicked(); break;
        case 23: on_printImage_clicked(); break;
        case 24: startStop(); break;
        case 25: Exit(); break;
        default: ;
        }
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
