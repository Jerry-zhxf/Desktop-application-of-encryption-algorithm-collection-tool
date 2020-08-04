#ifndef PLUS_GLOBAL_H
#define PLUS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLUS_LIBRARY)
#  define PLUSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PLUSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PLUS_GLOBAL_H
