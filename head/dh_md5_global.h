#ifndef DH_MD5_GLOBAL_H
#define DH_MD5_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DH_MD5_LIBRARY)
#  define DH_MD5SHARED_EXPORT Q_DECL_EXPORT
#else
#  define DH_MD5SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DH_MD5_GLOBAL_H
