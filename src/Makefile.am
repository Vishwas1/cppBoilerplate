bin_PROGRAMS =

if BUILD_APP1
  bin_PROGRAMS += app1
endif

# sets the compiler flags.
AM_CXXFLAGS = $(INTI_CFLAGS)



# specifies the source files used to build the helloworld target
# Note that the SOURCES variable for a target is prefixed by the name of the target, in this case helloworld.
app1_SOURCES = app1main.cc 

# app1_CPPFLAGS= -I../include
app1_CPPFLAGS = -I$(top_srcdir)/lib/helloworld/src

# specifies the libraries that must be passed to the linker to build the target.
# app1_LDADD = $(INTI_LIBS) "../lib/helloworld/src/libhelloworld.a"

app1_LDADD = ../lib/helloworld/src/libhelloworld.a $(INTLLIBS)

# bin_PROGRAMS=helloworld
# helloworld_SOURCES=main.cpp
# helloworld_CXXFLAGS= -I../include ## add path to headerfiles
# helloworld_LDADD=../lib/libhw.a ## link with static library
  