#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cstdlib>
template <typename T>
class Array
{
    private:
        T *_array;
        size_t _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
        size_t size() const;

        T& operator[](size_t i);
        T const& operator[](size_t i) const;
        class OutOfBounds: public std::exception{
            public:
                const char *what() const throw();
        };
};
#include "Array.tpp"
#endif /*ARRAY_HPP*/