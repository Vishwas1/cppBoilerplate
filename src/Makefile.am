bin_PROGRAMS =

if BUILD_APP1
  bin_PROGRAMS += app1
endif

# sets the compiler flags.
AM_CPPFLAGS = $(INTI_CFLAGS)

AM_CPPFLAGS += $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(BOOST_LDFLAGS)

# specifies the source files used to build the helloworld target
# Note that the SOURCES variable for a libbitcoin_cli_LIBStarget is prefixed by the name of the target, in this case helloworld.
app1_SOURCES = app1main.cc 

# app1_CPPFLAGS= -I../include
app1_CPPFLAGS = -I$(top_srcdir)/lib/helloworld/src  -I$(top_srcdir)/lib/bitcoin/src -I$(top_srcdir)/lib/bitcoin/src/univalue/include 

# $(INTLLIBS)
app1_LDFLAGS = -pthread -fPIC -std=c++11
app1_LDADD =  $(libhelloworld_LIBS) $(libbitcoin_server_LIBS) $(libbitcoin_common_LIBS) $(bitcoin_util_LIBS) $(libbitcoin_consensus_LIBS) $(libbitcoin_univalue_LIBS) $(libbitcoin_univalue_LIBS1) $(libbitcoin_univalue_LIBS2) $(libbitcoin_univalue_LIBS3) $(libbitcoin_univalue_LIBS4) $(libbitcoin_univalue_LIBS4) $(libbitcoin_univalue_LIBS5) $(libbitcoin_univalue_LIBS6) $(libbitcoin_univalue_LIBS7)  $(libbitcoin_univalue_LIBS8)  -lboost_system -lboost_thread -lboost_chrono -lboost_filesystem -lcrypto -levent_pthreads -levent


