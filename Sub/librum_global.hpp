#include <QtCore/QtGlobal>

#if defined(MYSHAREDLIB_LIBRARY)
#  define LIBRUM_EXPORT Q_DECL_EXPORT
#else
#  define LIBRUM_EXPORT Q_DECL_IMPORT
#endif
