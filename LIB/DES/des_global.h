#ifndef DES_GLOBAL_H
#define DES_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DES_LIBRARY)
#  define DESSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DESSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DES_GLOBAL_H
