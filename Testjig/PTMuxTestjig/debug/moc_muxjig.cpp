/****************************************************************************
** Meta object code from reading C++ file 'muxjig.h'
**
** Created: Wed Jul 9 11:23:17 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../muxjig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'muxjig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MuxJig[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      58,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     109,    7,    7,    7, 0x08,
     133,    7,    7,    7, 0x08,
     158,    7,    7,    7, 0x08,
     179,    7,    7,    7, 0x08,
     198,    7,    7,    7, 0x08,
     224,    7,    7,    7, 0x08,
     248,    7,    7,    7, 0x08,
     271,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MuxJig[] = {
    "MuxJig\0\0on_readCodeId_clicked()\0"
    "on_switchExtMux_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_resetBothCh_clicked()\0"
    "on_resetRefCh_clicked()\0"
    "on_resetTestCh_clicked()\0on_reset_2_clicked()\0"
    "on_reset_clicked()\0on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0switchTestChannel(int)\0"
    "switchRefChannel(int)\0"
};

const QMetaObject MuxJig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MuxJig,
      qt_meta_data_MuxJig, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MuxJig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MuxJig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MuxJig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MuxJig))
        return static_cast<void*>(const_cast< MuxJig*>(this));
    return QWidget::qt_metacast(_clname);
}

int MuxJig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_readCodeId_clicked(); break;
        case 1: on_switchExtMux_clicked(); break;
        case 2: on_pushButton_5_clicked(); break;
        case 3: on_resetBothCh_clicked(); break;
        case 4: on_resetRefCh_clicked(); break;
        case 5: on_resetTestCh_clicked(); break;
        case 6: on_reset_2_clicked(); break;
        case 7: on_reset_clicked(); break;
        case 8: on_pushButton_2_clicked(); break;
        case 9: on_pushButton_clicked(); break;
        case 10: switchTestChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: switchRefChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_customRadioButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_customRadioButton[] = {
    "customRadioButton\0\0customClicked(int)\0"
    "pass()\0"
};

const QMetaObject customRadioButton::staticMetaObject = {
    { &QRadioButton::staticMetaObject, qt_meta_stringdata_customRadioButton,
      qt_meta_data_customRadioButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &customRadioButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *customRadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *customRadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_customRadioButton))
        return static_cast<void*>(const_cast< customRadioButton*>(this));
    return QRadioButton::qt_metacast(_clname);
}

int customRadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: customClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: pass(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void customRadioButton::customClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
