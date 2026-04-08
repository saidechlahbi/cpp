#include "BitcoinExchange.hpp"
#include <cstddef>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other):_database(other._database){} 

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){
    if (this != &other)
    {
        _database = other._database;

    }
    return *this;
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::_parceAndFill(const std::string &line)
{
    size_t first  = line.find(",");
    if (first == std::string::npos)
        return;
    std::string date;
    std::string value;
    date = line.substr(0, first);
    value = line.substr(first + 1, line.size());
    _database[date] = std::strtod(value.c_str(), NULL);
}

void BitcoinExchange::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());

    if (!file.is_open())
    {
        throw std::runtime_error("Error: could not open file " + filename);
    }
    std::string buffer;
    std::getline(file, buffer); //skip the first sentence
    while (std::getline(file, buffer))
        _parceAndFill(buffer);
    // std::map<std::string, double>::iterator it;
    // for (it = _database.begin(); it != _database.end(); it++)
    //     std::cout << it->first << "   " << it->second << std::endl;
    file.close();
}
// const char *BitcoinExchange::CantOpenException::what() const throw()
// {
//     return "Error: Could not open the file.";
// }

void BitcoinExchange::processInput(const std::string &filename)
{
    
}