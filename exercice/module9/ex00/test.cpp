#include <iostream>

void sss(std::string &dd)
{
    dd[0] = 'a';
}

int main()
{
  

    std::string  dd = "sidssssssss";
    // sss(dd);
    std::cout << dd.substr(4, 4) << std::endl;
}