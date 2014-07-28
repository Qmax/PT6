/****************************************************************************
** Meta object code from reading C++ file 'appcardrelayread.h'
**
** Created: Mon Jul 28 13:26:25 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appcardrelayread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcardrelayread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppCardRelayRead[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   17,   17,   17, 0x08,
      63,   17,   17,   17, 0x08,
      84,   17,   17,   17, 0x08,
     106,   17,   17,   17, 0x08,
     124,   17,   17,   17, 0x08,
     139,   17,   17,   17, 0x08,
     165,   17,   17,   17, 0x08,
     187,   17,   17,   17, 0x08,
     208,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AppCardRelayRead[] = {
    "AppCardRelayRead\0\0,\0bitSelected(bool,short)\0"
    "receiveValue(uint)\0receiveValue(double)\0"
    "receiveValue(QString)\0callAddressEdit()\0"
    "callDataEdit()\0on_butReadRelay_clicked()\0"
    "on_butWrite_clicked()\0on_butREAD_clicked()\0"
    "changeColor(bool,short)\0"
};

const QMetaObject AppCardRelayRead::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AppCardRelayRead,
      qt_meta_data_AppCardRelayRead, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppCardRelayRead::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppCardRelayRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppCardRelayRead::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppCardRelayRead))
        return static_cast<void*>(const_cast< AppCardRelayRead*>(this));
    return QWidget::qt_metacast(_clname);
}

int AppCardRelayRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: bitSelected((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 1: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: callAddressEdit(); break;
        case 5: callDataEdit(); break;
        case 6: on_butReadRelay_clicked(); break;
        case 7: on_butWrite_clicked(); break;
        case 8: on_butREAD_clicked(); break;
        case 9: changeColor((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AppCardRelayRead::bitSelected(bool _t1, short _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
