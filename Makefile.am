# an input file to automake that specifies a projects build requirements
# : what needs to be built, and where it goes when installed.


#The SUBDIRS variable is used to list the subdirectories that must be built. 
AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I build-aux/m4
SUBDIRS = src

APP1_BIN=$(top_builddir)/src/$(APP1_NAME)$(EXEEXT)

$(APP1_BIN): FORCE
	$(MAKE) -C src $(@F)

