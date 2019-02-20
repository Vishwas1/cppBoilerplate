

case "${skip_submodules}" in
    0|no|false|"")
        git submodule update --init
        git submodule foreach '
            echo "Executing submodule : " $path " ********"
            autogen=$(find . -name autogen.sh)
            if [ -x "$autogen" ]; then
                cd $(dirname "$autogen")
                echo $path
                ./autogen.sh
                ./configure
                make
            fi
            '
    ;;
esac

# # submodules
# git submodule init
# git submodule update

# autoconf
aclocal
autoconf
touch README INSTALL NEWS AUTHORS ChangeLog
automake --add-missing

