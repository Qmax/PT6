# -------------------------------------------------
# Project created by QtCreator 2012-03-04T23:24:55
# -------------------------------------------------
QT += core \
    gui
TARGET = ArbitaryWaveGen
TEMPLATE = lib
CONFIG += plugin
SOURCES += IAWGUIInterface2.cpp \
    qcustomplot.cpp \
    main.cpp \
    mainwindow.cpp
HEADERS += InterfacePTLibrary.h \
    PTEventInterfaces.h \
    PTSPIMemoryInterface.h \
    IAWGUIInterface2.h \
    AWGUIInterface2.h \
    qcustomplot.h \
    mainwindow.h
FORMS += mainwindow.ui
DESTDIR = /exports/nfsroot-ccwmx51js/home
RESOURCES = ArbitaryWaveGen.qrc
