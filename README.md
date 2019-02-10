## Overview

Obtaining software directly from the source code is a common procedure on Unix computers, and generally involves the following three steps:

- Configuring the `Makefile` : [`./configure`]
- Compiling the code : [`make`]  
- Installing the executable : [`make install`]

The challenge of cross-platform is simplified by using GNU's [AutoTools](https://en.wikipedia.org/wiki/GNU_Build_System)

> **AutoTool** : The GNU Build System, also known as the Autotools, is a suite of programming tools designed to assist in making source code packages portable to many Unix-like systems. Autotools consists of the GNU utility programs [Autoconf](https://en.wikipedia.org/wiki/Autoconf), [Automake](https://en.wikipedia.org/wiki/Automake), and Libtool.

## Configuration Files

- Makefile.am
- configure.ac
- Makefile.in 
- Makefile

## How do they work?

```
 configure.ac        Makefile.am
      |                  |
 [Autoconf]           [Automake]   
      |                  |
configure script     Makefile.in
      \                  /
       \________________/
               |
         config.status
               |
           Makefile
               |
            [make]
               |
         (Executable)
       
```
- [Source](https://en.wikipedia.org/wiki/GNU_Build_System#/media/File:Autoconf-automake-process.svg)

- **Autoconf** generates a `configure` script based on the contents of a `configure.ac `file which characterizes a particular body of source code. 
- The `configure` script, when run, scans the build environment and generates a subordinate `config.status` script which, in turn, converts other input files and most commonly `Makefile.in` into output files (`Makefile`)
- **Automake** helps to create portable Makefiles, which are in turn processed with the `make` utility.
- It takes its input as `Makefile.am` (programmer-defined file : so that they can write the make commands in developer friendly manner), and turns it into `Makefile.in`.
-  Finally the `make` program uses `Makefile` to generate executable programs from source code.

## Implementation

- Create `configure.ac` file
- Create `Makefile.am` file
- run command `aclocal`
    -  first we need to generate `m4` environment for `autotools` to use
- run command `autoconf`
    -  this command will generate `configure` script.
- run command `automake --add-missing`
    -  this command will generate `Makefile.in` file.
- The end user doesn’t need to see our autotools setup, so we can distribute the `configure` script and `Makefile.in` without all of the files we used to generate them.
- run command `./configure` : to Generate Makefile from `Makefile.in`
- run command `make distcheck` : Use Makefile to build and test a tarball to distribute

So on Maintainer's system:

```
aclocal # Set up an m4 environment
autoconf # Generate configure from configure.ac
automake --add-missing # Generate Makefile.in from Makefile.am
./configure # Generate Makefile from Makefile.in
make distcheck # Use Makefile to build and test a tarball to distribute
```

On the user's system:

```
./configure # Generate Makefile from Makefile.in
make # Use Makefile to build the program
make install # Use Makefile to install the program

```

## Git Submodule 

### Initialize Submodule

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

### Generating lib

- `cd lib/helloworld`
- `./autogen.sh`
- `./configure`
- `make`


http://inti.sourceforge.net/tutorial/libinti/autotoolsproject.html

 - static vs dynamic library.
 - static vs dynamic linking.


### Using BOOST library in project

- The Boost C++ Libraries are a collection of modern libraries based on the C++ standard.
- 

## references

- [Build system](https://en.wikipedia.org/wiki/GNU_Build_System)
- [Makefile.in vs Makefile.am](https://stackoverflow.com/questions/2531827/what-are-makefile-am-and-makefile-in)
- [Magic behind configure, make, make install](https://robots.thoughtbot.com/the-magic-behind-configure-make-make-install)













