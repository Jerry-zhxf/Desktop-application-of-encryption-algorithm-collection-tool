#ifndef RC4_GLOBAL_H
#define RC4_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RC4_LIBRARY)
#  define RC4SHARED_EXPORT Q_DECL_EXPORT
#else
#  define RC4SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RC4_GLOBAL_H
