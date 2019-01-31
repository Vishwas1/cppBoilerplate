# submodules
git submodule init
git submodule update

# autoconf
aclocal
autoconf
touch README INSTALL NEWS AUTHORS ChangeLog
automake --add-missing

# autoreconf -vfi 


# git submodule foreach '
#     autogen=$(find . -name autogen.sh)
#     if [ -x "$autogen" ]; then
#         cd $(dirname "$autogen")
#             ./autogen.sh
#             ./configure CXXFLAGS="--param ggc-min-expand=1 --param ggc-min-heapsize=32768" --disable-zmq --disable-wallet --without-gui --without-miniupnpc
#             make -j 8
#     fi
# '
