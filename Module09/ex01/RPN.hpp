#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>

class RPN {
private:
    std::stack<int> _stack;

    bool isOperator(char c) const;
    void performOperation(char op);

public:
    // Orthodox Canonical Form
    RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();

    void calculate(const std::string& expression);
};

#endif /*RPN_HPP*/