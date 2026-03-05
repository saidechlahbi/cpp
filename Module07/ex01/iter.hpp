#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <class T, class F>
void iter(T *array, const size_t length, void (*fun) (F) )
{
    if (!array || !fun)
        return ;
    for (size_t i = 0; i < length; i++)
        fun(array[i]);
}

// template <class T>
// void iter(T const* array, size_t length, void (*f)(T const))
// {
//     if (!array || !f)
//         return;
//     for (size_t i = 0; i < length; ++i)
//         f(array[i]);
// }

#endif /*ITER_HPP*/