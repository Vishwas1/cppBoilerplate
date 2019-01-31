## Git Submodule 

To add a submodule 

`git submodule add -f -b master git@github.com:Vishwas1/democpplib.git lib/helloworld`

First, we need to initialize the submodule(s). We can do that with the following command:

`git submodule init`

Then we need to run the update in order to pull down the files.

`git submodule update`

To remove a submodule?

- Remove the submodule’s entry in the .gitmodules file.
- Remove the submodule’s entry in the .git/config
- Remove the path created for the submodule by using the command below.

`git rm --cached lib/helloworld`

To get the HEAD of each submodule

`git submodule foreach 'echo $path `git rev-parse HEAD`'`






















```
aclocal
autoconf
touch README INSTALL NEWS AUTHORS ChangeLog
automake --add-missing

OR

./autogen.sh
./configure --with-app1=yes --with-app2=yes
make -j 8
make install

```

## Submodules

### Implementing submodule



### Using submodules with main project

In authogen.sh we will add this :

`git submodule foreach`

-------------

test/src/Makefile.am

```

if BUILD_APP2
  bin_PROGRAMS += app2
endif

```

```
app2_SOURCES = app2main.cc helloworld.cc helloworld.h

app2_LDADD = $(INTI_LIBS)

```

--------
test/Makefile.am

```
APP2_BIN=$(top_builddir)/src/$(APP2_NAME)$(EXEEXT)

```

```
$(APP2_BIN): FORCE
	$(MAKE) -C src $(@F)
```
---- 

test/configure.ac

```
AC_INIT([app1], [0.1.0], [app2], [0.1.0])
```

```
APP2_NAME=app2
```

```
AC_ARG_WITH([app2],
  [AS_HELP_STRING([--with-app2],
  [build_app2 app2 (default=yes)])],
  [build_app2=$withval],
  [build_app2=yes])
```

```
AC_MSG_CHECKING([whether to build app2])
AM_CONDITIONAL([BUILD_APP2], [test x$build_app2 = xyes])
AC_MSG_RESULT($build_app2)
```


```
AC_SUBST(APP2_NAME)

```