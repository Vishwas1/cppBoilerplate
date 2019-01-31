#include "helloworld.h"
#include <cstdlib>
#include <iostream>
#include <rawtransaction.h>

using namespace std;

int main(int argc, char const *argv[])
{
    message m;
    cout << "This is app1 \n";
    m.printMessage();
    std::string resp = sendrawtransactionzagg("hell");
    cout << resp;
    return 0;
}