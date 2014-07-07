/****************************************************************************
** Meta object code from reading C++ file 'qvcursor.h'
**
** Created: Sat Jan 19 10:09:00 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qvcursor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvcursor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QVCursor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      72,    9,    9,    9, 0x0a,
      94,    9,    9,    9, 0x0a,
     111,    9,    9,    9, 0x0a,
     128,    9,    9,    9, 0x0a,
     146,    9,    9,    9, 0x0a,
     166,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QVCursor[] = {
    "QVCursor\0\0valueChanged(double)\0"
    "setColorBg(QColor)\0setColorScale(QColor)\0"
    "setColorValue(QColor)\0setValueDim(int)\0"
    "setScaleDim(int)\0setPrecValue(int)\0"
    "setMinValue(double)\0setMaxValue(double)\0"
};

const QMetaObject QVCursor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QVCursor,
      qt_meta_data_QVCursor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVCursor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVCursor))
        return static_cast<void*>(const_cast< QVCursor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QVCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: setColorBg((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: setColorScale((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: setColorValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: setValueDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setScaleDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setPrecValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QVCursor::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
