/****************************************************************************
** Meta object code from reading C++ file 'portabletester.h'
**
** Created: Mon Jul 7 12:57:55 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../portabletester.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portabletester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmaxPushButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   15,   15,   15, 0x0a,
      37,   15,   15,   15, 0x0a,
      46,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QmaxPushButton[] = {
    "QmaxPushButton\0\0CClicked(int)\0pass()\0"
    "shrink()\0expand()\0"
};

const QMetaObject QmaxPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QmaxPushButton,
      qt_meta_data_QmaxPushButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmaxPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmaxPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmaxPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmaxPushButton))
        return static_cast<void*>(const_cast< QmaxPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QmaxPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: pass(); break;
        case 2: shrink(); break;
        case 3: expand(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QmaxPushButton::CClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PortableTester[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      35,   15,   15,   15, 0x0a,
      63,   15,   15,   15, 0x0a,
      90,   15,   15,   15, 0x0a,
     101,   15,   15,   15, 0x0a,
     116,   15,   15,   15, 0x0a,
     125,   15,   15,   15, 0x0a,
     139,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PortableTester[] = {
    "PortableTester\0\0buttonPressed(int)\0"
    "on_shutDownButton_clicked()\0"
    "on_testjigButton_clicked()\0poweroff()\0"
    "houseKeeping()\0UnHide()\0checkButton()\0"
    "idleScreen()\0"
};

const QMetaObject PortableTester::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PortableTester,
      qt_meta_data_PortableTester, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortableTester::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortableTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortableTester::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortableTester))
        return static_cast<void*>(const_cast< PortableTester*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PortableTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_shutDownButton_clicked(); break;
        case 2: on_testjigButton_clicked(); break;
        case 3: poweroff(); break;
        case 4: houseKeeping(); break;
        case 5: UnHide(); break;
        case 6: checkButton(); break;
        case 7: idleScreen(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
