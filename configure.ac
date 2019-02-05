AC_INIT([app1], [0.1.0])
AC_CONFIG_SRCDIR([src/app1main.cc])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([build-aux/m4])

AM_INIT_AUTOMAKE
AC_PROG_CXX

APP1_NAME=app1



define(MINIMUM_REQUIRED_BOOST, 1.47.0)

AX_BOOST_BASE([MINIMUM_REQUIRED_BOOST])
AX_BOOST_SYSTEM
AX_BOOST_FILESYSTEM
AX_BOOST_THREAD
AX_BOOST_CHRONO

BOOST_LIBS="$BOOST_LDFLAGS $BOOST_SYSTEM_LIB $BOOST_FILESYSTEM_LIB $BOOST_THREAD_LIB $BOOST_CHRONO_LIB"

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
# bitcoin_util_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_util.a'
libbitcoin_server_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_server.a'
# libbitcoin_consensus_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_consensus.a'
# libbitcoin_cli_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_cli.a'
# libbitcoin_common_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_common.a'
# libbitcoin_all_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_all.a'
# libbitcoin_CFLAGS='-isystem $(top_builddir)/lib/bitcoin/src/'
# libunivalue_CFLAGS='-isystem $(top_builddir)/lib/bitcoin/src/univalue/include'

AC_SUBST(APP1_NAME)
AC_SUBST(libhelloworld_LIBS)
# AC_SUBST(bitcoin_util_LIBS)
# AC_SUBST(libbitcoin_consensus_LIBS)
# AC_SUBST(libbitcoin_cli_LIBS)
# AC_SUBST(libbitcoin_common_LIBS)
# AC_SUBST(libbitcoin_all_LIBS)
AC_SUBST(libbitcoin_server_LIBS)


# AC_SUBST(libbitcoin_CFLAGS)

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT


