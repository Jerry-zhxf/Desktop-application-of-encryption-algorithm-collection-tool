#ifndef LFSR_JK_GLOBAL_H
#define LFSR_JK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LFSR_JK_LIBRARY)
#  define LFSR_JKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LFSR_JKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LFSR_JK_GLOBAL_H
