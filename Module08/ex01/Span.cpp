#include "Span.hpp"

Span::Span(){_n = 0;}

Span::Span(unsigned int n):_n(n) {}

Span::Span(const Span& other):_n(other._n), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _n = other._n;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span(){}

const char *Span::spanFullException::what() const throw()
{
    return "the span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "no span exception";
}

void Span::addNumber(int num)
{
    if (_numbers.size() == _n)
        throw spanFullException();
    else
        _numbers.push_back(num);
}

long Span::shortestSpan() const
{
    if (_numbers.size() == 0 || _numbers.size() == 1)
        throw NoSpanException();
    long shortestSpan = 2147483648;
    long var = 0;

    for (size_t  i = 0; i < _numbers.size() - 1; i++)
    {
        if (_numbers[i] < _numbers[i + 1])
            var = _numbers[i + 1] - _numbers[i];
        else
            var = _numbers[i] - _numbers[i + 1];
        if (var <= shortestSpan)
            shortestSpan = var;
    }
    return shortestSpan;
}

long Span::longestSpan() const
{
    if (_numbers.size() == 0 || _numbers.size() == 1)
        throw NoSpanException();
    long longestSpan = 0;
    long var = 0;
    for (size_t  i = 0; i < _numbers.size() - 1; i++)
    {
        if (_numbers[i] < _numbers[i + 1])
            var = _numbers[i + 1] - _numbers[i];
        else
            var = _numbers[i] - _numbers[i + 1];
        if (var >= longestSpan)
            longestSpan = var;
    }
    return longestSpan;
}


void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_numbers.size() + std::distance(begin, end) > _n)
            throw spanFullException();
        _numbers.insert(_numbers.end(), begin, end);
}
