#include "Array.hpp"
#include <cstddef>

template <typename T>
Array<T>::Array(): _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n): _array(NULL), _size(n)
{
    if (_size > 0)
        _array = new T[_size]; // default-initialized
}
template <typename T>
Array<T>::Array(const Array &other):_array(NULL), _size(other._size)
{
    if (_size > 0)
    {
        _array = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
}

template <typename T>
Array<T> Array<T>::&operator=(const Array &other)
{
    if (this == &other)
        return *this;
        
    delete _array;
    _array = NULL;
    _size = other._size;
    if (_size > 0)
    {
        _array = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return  *this;
}

template <typename T>
Array<T>::~Array(){}

