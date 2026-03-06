#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _size(n)
{
    if (_size > 0)
        _array = new T[_size]; // default-initialized
}

template <typename T>
Array<T>::Array(Array const& other) : _array(NULL), _size(other._size)
{
    if (_size > 0)
    {
        _array = new T[_size];
        for (size_t i = 0; i < _size; ++i)
            _array[i] = other._array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(Array const& other)
{
    if (this == &other)
        return *this;

    delete[] _array;
    _array = NULL;
    _size = other._size;

    if (_size > 0)
    {
        _array = new T[_size];
        for (size_t i = 0; i < _size; ++i)
            _array[i] = other._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
size_t Array<T>::size() const
{
    return _size;
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
    if (i >= _size)
        throw OutOfBounds();
    return _array[i];
}

template <typename T>
T const& Array<T>::operator[](size_t i) const
{
    if (i >= _size)
        throw OutOfBounds();
    return _array[i];
}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
    return "Array: index out of bounds";
}

#endif