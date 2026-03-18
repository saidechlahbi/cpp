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
    if (_numbers.size() < 2)
        throw NoSpanException();

    std::vector<int> tmp(_numbers);
    std::sort(tmp.begin(), tmp.end());

    long best = std::numeric_limits<long>::max();
    for (size_t i = 1; i < tmp.size(); ++i)
    {
        long diff = static_cast<long>(tmp[i]) - static_cast<long>(tmp[i - 1]);
        if (diff < best)
            best = diff;
    }
    return best;
}

long Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw NoSpanException();

    int minv = *std::min_element(_numbers.begin(), _numbers.end());
    int maxv = *std::max_element(_numbers.begin(), _numbers.end());

    return static_cast<long>(maxv) - static_cast<long>(minv);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_numbers.size() + std::distance(begin, end) > _n)
            throw spanFullException();
        _numbers.insert(_numbers.end(), begin, end);
}
