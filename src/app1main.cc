#include <cstdlib>
#include <iostream>
#include <helloworld.h>
using namespace std;

int main(int argc, char const *argv[])
{
    message m;
    cout << "This is app1 \n";
    string message = "From app1";
    m.printMessage(message);
    return 0;
}