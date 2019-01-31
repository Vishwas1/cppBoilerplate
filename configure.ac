#an input file to autoconf that provides the macro invocations and shell code fragments autoconf uses to build a configure script.
# AC_INIT([Bitcoin Core],m4_join([.], _CLIENT_VERSION_MAJOR, _CLIENT_VERSION_MINOR, _CLIENT_VERSION_REVISION, m4_if(_CLIENT_VERSION_BUILD, [0], [], _CLIENT_VERSION_BUILD))m4_if(_CLIENT_VERSION_RC, [0], [], [rc]_CLIENT_VERSION_RC),[https://github.com/bitcoin/bitcoin/issues],[bitcoin],[https://bitcoincore.org/])
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

AC_SUBST(APP1_NAME)

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT


