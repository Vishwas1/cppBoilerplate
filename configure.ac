#Process any command-line arguments and perform initialization and verification.
#The arguments of AC_INIT must be static
#format: AC_INIT(package, version, bug-report-address )
AC_INIT([app1], [0.1.0])

#unique-file-in-source-dir is some file that is in the package’s source directory;
#configure checks for this file’s existence to make sure that the directory that it is
#told contains the source code in fact does.
AC_CONFIG_SRCDIR([src/app1main.cc])

#Runs many macros required for proper operation of the generated Makefiles.
AM_INIT_AUTOMAKE

#This is required if any C++ source is included
AC_PROG_CXX

APP1_NAME=app1

#If the user gave configure the option ‘--with-package ’ or ‘--without-package ’,
#run shell commands action-if-given. If neither option was given, run shell commands
#action-if-not-given.
AC_ARG_WITH([app1],
  [AS_HELP_STRING([--with-app1],
  [build_app1 app1 (default=yes)])],
  [build_app1=$withval],
  [build_app1=yes])

#does the job of echo - printing on the console
#Notify the user that configure is checking for a particular feature.This macro
#prints a message that starts with ‘checking ’ and ends with ‘...’ and no newline.
AC_MSG_CHECKING([whether to build app1])

AM_CONDITIONAL([BUILD_APP1], [test x$build_app1 = xyes])
#Notify the user of the results of a check.
AC_MSG_RESULT($build_app1)

# libraries
libhelloworld_LIBS='$(top_builddir)/lib/helloworld/src/libhelloworld.a'

#To make configure substitute a particular variable into the output files, the macro AC_SUBST
#must be called with that variable name as an argument.
AC_SUBST(APP1_NAME)
AC_SUBST(libhelloworld_LIBS)

#configure should output the Makefile for each directory
AC_CONFIG_FILES([Makefile src/Makefile])

#Every Autoconf script, e.g., ‘configure.ac’, should finish by calling AC_OUTPUT
#generates and runs ‘config.status’,which in turn creates the makefiles
#and any other files resulting from configuration.
AC_OUTPUT


