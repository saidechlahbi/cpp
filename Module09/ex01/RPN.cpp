#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other) {
    *this = other;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        this->_stack = other._stack;
    }
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(char c) const {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::performOperation(char op) {
    if (_stack.size() < 2) {
        throw std::runtime_error("Error");
    }

    int right = _stack.top();
    _stack.pop();
    int left = _stack.top();
    _stack.pop();

    if (op == '+') _stack.push(left + right);
    else if (op == '-') _stack.push(left - right);
    else if (op == '*') _stack.push(left * right);
    else if (op == '/') {
        if (right == 0)
            throw std::runtime_error("Error");
        _stack.push(left / right);
    }
}

void RPN::calculate(const std::string& expression) {
    for (size_t i = 0; i < expression.length(); ++i) {
        char c = expression[i];

        if (c == ' ') {
            continue; // Skip spaces
        }
        else if (isdigit(c)) {
            // According to subject, numbers are strictly less than 10 (0-9)
            _stack.push(c - '0');
        }
        else if (isOperator(c)) {
            try {
                performOperation(c);
            } catch (const std::exception& e) {
                std::cout << e.what() << std::endl;
                return;
            }
        }
        else {
            // Invalid character
            std::cout << "Error" << std::endl;
            return;
        }
    }

    // At the end, there should be exactly one element in the stack (the result)
    if (_stack.size() == 1) {
        std::cout << _stack.top() << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
}