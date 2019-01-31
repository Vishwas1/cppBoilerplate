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















