bin_PROGRAMS =

if BUILD_APP1
  bin_PROGRAMS += app1
endif

# sets the compiler flags.
AM_CXXFLAGS = $(INTI_CFLAGS)

AM_CPPFLAGS = $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(BOOST_LDFLAGS)
 
# specifies the source files used to build the helloworld target
# Note that the SOURCES variable for a target is prefixed by the name of the target, in this case helloworld.
app1_SOURCES = app1main.cc 

# app1_CPPFLAGS= -I../include
app1_CPPFLAGS = -I$(top_srcdir)/lib/helloworld/src

# specifies the libraries that must be passed to the linker to build the target.
app1_LDADD = $(libhelloworld_LIBS) $(INTLLIBS) $(BOOST_LIBS)
