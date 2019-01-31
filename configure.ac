AC_INIT([app1], [0.1.0])
AC_CONFIG_SRCDIR([src/app1main.cc])
AM_INIT_AUTOMAKE
AC_PROG_CXX

APP1_NAME=app1

# AC_ARG_WITH (package, help-string, [action-if-given], [action-if-not-given])
AC_ARG_WITH([app1],
  [AS_HELP_STRING([--with-app1],
  [build_app1 app1 (default=yes)])],
  [build_app1=$withval],
  [build_app1=yes])

AC_MSG_CHECKING([whether to build app1])
AM_CONDITIONAL([BUILD_APP1], [test x$build_app1 = xyes])
AC_MSG_RESULT($build_app1)

libhelloworld_LIBS='$(top_builddir)/lib/helloworld/src/libhelloworld.a'

AC_SUBST(APP1_NAME)
AC_SUBST(libhelloworld_LIBS)

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT


