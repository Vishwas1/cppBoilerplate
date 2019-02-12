AC_INIT([app1], [0.1.0])
AC_CONFIG_SRCDIR([src/app1main.cc])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([build-aux/m4])

AM_INIT_AUTOMAKE
AC_PROG_CXX

APP1_NAME=app1



# define(MINIMUM_REQUIRED_BOOST, 1.47.0)

# AX_BOOST_BASE([MINIMUM_REQUIRED_BOOST])
# AX_BOOST_SYSTEM
# AX_BOOST_FILESYSTEM
# AX_BOOST_THREAD
# AX_BOOST_CHRONO

# BOOST_LIBS="$BOOST_LDFLAGS $BOOST_SYSTEM_LIB $BOOST_FILESYSTEM_LIB $BOOST_THREAD_LIB $BOOST_CHRONO_LIB"

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
bitcoin_util_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_util.a'
libbitcoin_server_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_server.a'
libbitcoin_consensus_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_consensus.a'
libbitcoin_cli_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_cli.a'
libbitcoin_common_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_common.a'
libbitcoin_all_LIBS='$(top_builddir)/lib/bitcoin/src/libbitcoin_all.a'
# libbitcoin_univalue_LIBS='$(top_builddir)/lib/bitcoin/src/univalue/libunivalue.la'
libbitcoin_univalue_LIBS='$(top_builddir)/lib/bitcoin/src/univalue/.libs/libunivalue.a'

libbitcoin_univalue_LIBS1='$(top_builddir)/lib/bitcoin/src/crypto/libbitcoin_crypto_base.a'
libbitcoin_univalue_LIBS2='$(top_builddir)/lib/bitcoin/src/crypto/libbitcoin_crypto_sse41.a'
libbitcoin_univalue_LIBS3='$(top_builddir)/lib/bitcoin/src/crypto/libbitcoin_crypto_avx2.a'
libbitcoin_univalue_LIBS4='$(top_builddir)/lib/bitcoin/src/crypto/libbitcoin_crypto_shani.a'
libbitcoin_univalue_LIBS5='$(top_builddir)/lib/bitcoin/src/leveldb/libleveldb.a'
libbitcoin_univalue_LIBS6='$(top_builddir)/lib/bitcoin/src/leveldb/libleveldb_sse42.a'
libbitcoin_univalue_LIBS7='$(top_builddir)/lib/bitcoin/src/leveldb/libmemenv.a'
# libbitcoin_univalue_LIBS8='$(top_builddir)/lib/bitcoin/src/secp256k1/libsecp256k1.la'
libbitcoin_univalue_LIBS8='$(top_builddir)/lib/bitcoin/src/secp256k1/.libs/libsecp256k1.a'


libbitcoin_CFLAGS='-isystem $(top_builddir)/lib/bitcoin/src/'
libunivalue_CFLAGS='-isystem $(top_builddir)/lib/bitcoin/src/univalue/include'


AC_SUBST(APP1_NAME)
AC_SUBST(libhelloworld_LIBS)
AC_SUBST(bitcoin_util_LIBS)
AC_SUBST(libbitcoin_consensus_LIBS)
AC_SUBST(libbitcoin_cli_LIBS)
AC_SUBST(libbitcoin_common_LIBS)
AC_SUBST(libbitcoin_all_LIBS)
AC_SUBST(libbitcoin_server_LIBS)
AC_SUBST(libbitcoin_univalue_LIBS)

AC_SUBST(libbitcoin_univalue_LIBS1)
AC_SUBST(libbitcoin_univalue_LIBS2)
AC_SUBST(libbitcoin_univalue_LIBS3)
AC_SUBST(libbitcoin_univalue_LIBS4)
AC_SUBST(libbitcoin_univalue_LIBS5)
AC_SUBST(libbitcoin_univalue_LIBS6)
AC_SUBST(libbitcoin_univalue_LIBS7)
AC_SUBST(libbitcoin_univalue_LIBS8)



AC_SUBST(libbitcoin_CFLAGS)

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT


