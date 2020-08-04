#ifndef RSA_GLOBAL_H
#define RSA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RSA_LIBRARY)
#  define RSASHARED_EXPORT Q_DECL_EXPORT
#else
#  define RSASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RSA_GLOBAL_H
