## STEP1 : 

- Add m4 dir (I copied build-aux/m4 from bitcoin)

## STEP2 : In configure file

```

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([build-aux/m4])

define(MINIMUM_REQUIRED_BOOST, 1.47.0)

AX_BOOST_BASE([MINIMUM_REQUIRED_BOOST])
AX_BOOST_SYSTEM
AX_BOOST_FILESYSTEM
AX_BOOST_THREAD
AX_BOOST_CHRONO

BOOST_LIBS="$BOOST_LDFLAGS $BOOST_SYSTEM_LIB $BOOST_FILESYSTEM_LIB $BOOST_THREAD_LIB $BOOST_CHRONO_LIB"

```

## STEP3 : In Makefile

```
ACLOCAL_AMFLAGS = -I build-aux/m4

```

## STEP4 : In src/Makefile

```
AM_CPPFLAGS = $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(BOOST_LDFLAGS)

prog_LDADD = $(BOOST_LIBS)

```

## Reference 

http://www.quantprogrammer.com/adding-boost-to-your-autotools-project/