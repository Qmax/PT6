/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Aug 13 18:17:57 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmaxLineEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x05,
      41,   38,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QmaxLineEdit[] = {
    "QmaxLineEdit\0\0hasFocus\0focussed(bool)\0"
    "no\0focussed(int)\0"
};

const QMetaObject QmaxLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QmaxLineEdit,
      qt_meta_data_QmaxLineEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmaxLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmaxLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmaxLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmaxLineEdit))
        return static_cast<void*>(const_cast< QmaxLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QmaxLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focussed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: focussed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QmaxLineEdit::focussed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmaxLineEdit::focussed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QmaxLabel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QmaxLabel[] = {
    "QmaxLabel\0\0state\0setlabelFocus(bool)\0"
};

const QMetaObject QmaxLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QmaxLabel,
      qt_meta_data_QmaxLabel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmaxLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmaxLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmaxLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmaxLabel))
        return static_cast<void*>(const_cast< QmaxLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int QmaxLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setlabelFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MainWindow[] = {

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
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     170,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     227,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     271,   11,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     391,   11,   11,   11, 0x08,
     421,   11,   11,   11, 0x08,
     449,   11,   11,   11, 0x08,
     486,   11,   11,   11, 0x08,
     518,   11,   11,   11, 0x08,
     546,   11,   11,   11, 0x08,
     577,   11,   11,   11, 0x08,
     604,   11,   11,   11, 0x08,
     634,   11,   11,   11, 0x08,
     664,   11,   11,   11, 0x08,
     692,   11,   11,   11, 0x08,
     730,  718,   11,   11, 0x08,
     785,  775,   11,   11, 0x08,
     852,  840,   11,   11, 0x08,
     905,   11,   11,   11, 0x08,
     924,   11,   11,   11, 0x08,
     937,   11,   11,   11, 0x08,
     950,   11,   11,   11, 0x08,
     967,   11,   11,   11, 0x08,
     982,   11,   11,   11, 0x08,
     999,   11,   11,   11, 0x08,
    1018,   11,   11,   11, 0x08,
    1037,   11,   11,   11, 0x08,
    1053,   11,   11,   11, 0x08,
    1075,   11,   11,   11, 0x08,
    1097, 1093,   11,   11, 0x08,
    1124,   11,   11,   11, 0x08,
    1147, 1137,   11,   11, 0x08,
    1190, 1183,   11,   11, 0x08,
    1211, 1183,   11,   11, 0x08,
    1233, 1183,   11,   11, 0x08,
    1263, 1252,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_butAppBck_clicked()\0"
    "on_butRefresh_clicked()\0on_butStop_clicked()\0"
    "on_butStart_clicked()\0on_butZoomIn_clicked()\0"
    "on_butZoomOut_clicked()\0on_butExit_clicked()\0"
    "on_butRemoveAll_clicked()\0"
    "on_butRemoveSelected_clicked()\0"
    "on_butSine_clicked()\0on_butSquare_clicked()\0"
    "on_butTriangle_clicked()\0"
    "on_butSawtooth_clicked()\0on_butPulse_clicked()\0"
    "on_butRandom_clicked()\0on_butMergeAll_clicked()\0"
    "on_actionZoom_Out_triggered()\0"
    "on_actionZoomin_triggered()\0"
    "on_actionRemove_Selected_triggered()\0"
    "on_actionRemove_All_triggered()\0"
    "on_actionRandom_triggered()\0"
    "on_actionMerge_All_triggered()\0"
    "on_actionPulse_triggered()\0"
    "on_actionSAwtooth_triggered()\0"
    "on_actionTriangle_triggered()\0"
    "on_actionSquare_triggered()\0"
    "on_actionSine_triggered()\0event,title\0"
    "titleDoubleClick(QMouseEvent*,QCPPlotTitle*)\0"
    "axis,part\0"
    "axisLabelDoubleClick(QCPAxis*,QCPAxis::SelectablePart)\0"
    "legend,item\0"
    "legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*)\0"
    "selectionChanged()\0mousePress()\0"
    "mouseWheel()\0addRandomGraph()\0"
    "addSineGraph()\0addSquareGraph()\0"
    "addTriangleGraph()\0addSawtoothGraph()\0"
    "addPulseGraph()\0removeSelectedGraph()\0"
    "removeAllGraphs()\0pos\0contextMenuRequest(QPoint)\0"
    "moveLegend()\0plottable\0"
    "graphClicked(QCPAbstractPlottable*)\0"
    "pValue\0receiveValue(double)\0"
    "receiveValue(QString)\0receiveValue(uint)\0"
    "leFocussed\0callLineEditInput(int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_butAppBck_clicked(); break;
        case 1: on_butRefresh_clicked(); break;
        case 2: on_butStop_clicked(); break;
        case 3: on_butStart_clicked(); break;
        case 4: on_butZoomIn_clicked(); break;
        case 5: on_butZoomOut_clicked(); break;
        case 6: on_butExit_clicked(); break;
        case 7: on_butRemoveAll_clicked(); break;
        case 8: on_butRemoveSelected_clicked(); break;
        case 9: on_butSine_clicked(); break;
        case 10: on_butSquare_clicked(); break;
        case 11: on_butTriangle_clicked(); break;
        case 12: on_butSawtooth_clicked(); break;
        case 13: on_butPulse_clicked(); break;
        case 14: on_butRandom_clicked(); break;
        case 15: on_butMergeAll_clicked(); break;
        case 16: on_actionZoom_Out_triggered(); break;
        case 17: on_actionZoomin_triggered(); break;
        case 18: on_actionRemove_Selected_triggered(); break;
        case 19: on_actionRemove_All_triggered(); break;
        case 20: on_actionRandom_triggered(); break;
        case 21: on_actionMerge_All_triggered(); break;
        case 22: on_actionPulse_triggered(); break;
        case 23: on_actionSAwtooth_triggered(); break;
        case 24: on_actionTriangle_triggered(); break;
        case 25: on_actionSquare_triggered(); break;
        case 26: on_actionSine_triggered(); break;
        case 27: titleDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< QCPPlotTitle*(*)>(_a[2]))); break;
        case 28: axisLabelDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2]))); break;
        case 29: legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2]))); break;
        case 30: selectionChanged(); break;
        case 31: mousePress(); break;
        case 32: mouseWheel(); break;
        case 33: addRandomGraph(); break;
        case 34: addSineGraph(); break;
        case 35: addSquareGraph(); break;
        case 36: addTriangleGraph(); break;
        case 37: addSawtoothGraph(); break;
        case 38: addPulseGraph(); break;
        case 39: removeSelectedGraph(); break;
        case 40: removeAllGraphs(); break;
        case 41: contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 42: moveLegend(); break;
        case 43: graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1]))); break;
        case 44: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 45: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 47: callLineEditInput((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 48;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
