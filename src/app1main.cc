// system_clock::now
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

#include <cstdlib>
#include <helloworld.h>
#include <rpc/server.h>
// #include <rpc/rawtransaction.h>


using namespace std;

int main ()
{
  
  VishwasTestMethod();
  // PrintExceptionContinue(NULL, "messae");
  // SendRawTransactionZagg("hex");
  return 0; 

  message m;
  cout << "This is app1 \n";
  string message = "From app1";
  m.printMessage(message);


  using namespace std::chrono;

  duration<int,std::ratio<60*60*24> > one_day (1);

  system_clock::time_point today = system_clock::now();
  system_clock::time_point tomorrow = today + one_day;

  time_t tt;

  tt = system_clock::to_time_t ( today );
  std::cout << "today is: " << ctime(&tt);

  tt = system_clock::to_time_t ( tomorrow );
  std::cout << "tomorrow will be: " << ctime(&tt);
  

  return 0;
}