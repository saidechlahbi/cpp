#include "easyfind.hpp"

int main()
{
  std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    std::list<int> lst;
    lst.push_back(2);
    lst.push_back(5);
    lst.push_back(6);

    try {
        easyfind(vec, 6);
        easyfind(lst, 5);
        easyfind(vec, 42);
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}