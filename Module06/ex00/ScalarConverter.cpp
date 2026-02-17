#include "ScalarConverter.hpp"


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
    if (input == "-inff")
    if (input == "+inff")
    if (input == "-inf")
    if (input == "+inf")
    if (input == "nan")
}