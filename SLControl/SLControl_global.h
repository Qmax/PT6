#ifndef SLCONTROL_GLOBAL_H
#define SLCONTROL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SLCONTROL_LIBRARY)
#  define SLCONTROLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SLCONTROLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SLCONTROL_GLOBAL_H
