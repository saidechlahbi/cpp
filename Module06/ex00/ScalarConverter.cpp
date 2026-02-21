#include "ScalarConverter.hpp"
#include <cmath>

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}
ScalarConverter::~ScalarConverter(){}


void ScalarConverter::convert(std::string input)
{
    char *iterater;
    iterater = NULL;
    double value = strtod(input, &iterater);
    if (iterater[0] == '\0' || (iterater[0] == 'f' && iterater[1] == '\0'))
    {
        if ( value <= 31  ||  value >= 127)
            std::cout << "char: Non displayable" << std::endl;
        else if (std::isinf(value) || std::isnan(value))
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(value) << std::endl;

        if (std::isinf(value) || std::isnan(value))
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        
        std::cout << "float: " << static_cast<float>(value) << 'f' << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    else
    {
        std::cout << "invalid input!" << std::endl;
    }

}