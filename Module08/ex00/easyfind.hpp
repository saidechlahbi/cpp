#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <vector>
#include <list>

#include <iostream>
#include <exception>
#include <algorithm>
class notfound: public std::exception{
    const char* what() const throw()
    {
        return "occurrence not found";
    }
};

template <typename T>
void easyfind(T &container, int data)
{
    typename T::iterator it = std::find(container.begin(), container.end(), data);
    if (it == container.end())
        throw notfound();
    std::cout << "The occurrence is found " << std::endl;
}

#endif /*EASYFIND_HPP*/