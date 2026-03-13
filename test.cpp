
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
//   void (boo::*fff)(void);
//   fff = &boo::func;
//   boo a;
//   a.func();
// //  ( a.*fff)();
// char *s = NULL;
// long a = strtod("-inff", &s);
// std::cout << std::numeric_limits<int>::max()  <<  std::endl;
double aa = 110.4;
std::cout  << std::setprecision(4) << static_cast<float>(aa) << std::endl;

}