/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Mon Jul 28 13:27:30 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      56,    7,    7,    7, 0x08,
      83,    7,    7,    7, 0x08,
     102,    7,    7,    7, 0x08,
     123,    7,    7,    7, 0x08,
     145,    7,    7,    7, 0x08,
     165,    7,    7,    7, 0x08,
     184,    7,    7,    7, 0x08,
     208,    7,    7,    7, 0x08,
     231,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0on_pushButton_clicked()\0"
    "on_butReceive_clicked()\0"
    "on_butDSOReceive_clicked()\0"
    "receiveValue(uint)\0receiveValue(double)\0"
    "receiveValue(QString)\0callstAddressEdit()\0"
    "callAddrCoutEdit()\0callstReceAddressEdit()\0"
    "callReceAddrCoutEdit()\0callR1Count()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_butReceive_clicked(); break;
        case 2: on_butDSOReceive_clicked(); break;
        case 3: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: callstAddressEdit(); break;
        case 7: callAddrCoutEdit(); break;
        case 8: callstReceAddressEdit(); break;
        case 9: callReceAddrCoutEdit(); break;
        case 10: callR1Count(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
