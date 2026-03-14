
 #include <cstddef>
#include <list>
 #include <iostream>
#include <system_error>
#include <type_traits>
#include <cmath>
#include <iomanip>
#include <limits>


class boo
{
  public:

  void  func(void)
  {
    std::cout << "hello world" << std::endl ;
  }
};

int main ()
{
  float a = 42.02;
  std::cout << "helllo" <<  a << std::endl;
}