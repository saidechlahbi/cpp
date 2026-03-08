#ifndef Span_hpp
#define Span_hpp

#include <exception>
#include <iostream> 
#include <vector>
#include <exception>
class Span
{
    private:
        unsigned int _n;
        std::vector<int> _numbers;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        class spanFullException: public std::exception
        {
            const char *what() const throw();
        };

        class NoSpanException: public std::exception
        {
            const char *what() const throw();
        };

        void addNumber(int num);

        long shortestSpan() const;
        long longestSpan() const;
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif /*Span_hpp*/