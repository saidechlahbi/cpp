
 #include <cstddef>
#include <list>
 #include <iostream>
#include <system_error>
#include <type_traits>
#include <cmath>
#include <iomanip>
#include <limits>


class Data
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
  std::cout <<   a << std::endl;
    std::cout <<   static_cast<int>(a) << std::endl;
      std::cout <<  reinterpret_cast<long>(a) << std::endl;


}