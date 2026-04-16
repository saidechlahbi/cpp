#include "BitcoinExchange.hpp"
#include <cstddef>

/*orthodox canonical form*/
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

/*********************** parce the csv file ***********************/

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

/*********************** parce the input file ***********************/

void _trimWhitespace(std::string& str) const
{
    int first = str.find_first_not_of(" \n\r\t");
    if (first == std::string::npos)
    {
        str.clear();
        return;
    }
    int second = str.find_last_not_of(" \n\r\t");
    str = str.substr(first, second + 1)
}

bool _check_header(std::string &line)
{
    size_t position  = line.find("|");
    if (std::string::npos == position)
        return false;
    std::string first = line.substr(0, position);
    std::string second =  line.substr(position, position + 1);
    std::string third =  line.substr(position + 1, line.size());

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
    file.close();
}

void BitcoinExchange::processInput(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if(!file.is_open())
    {
        throw std::runtime_error("error: could not open file " + filename);
    }
    std::string buffer;
    std::getline(file, buffer);
    while (std::getline(file, buffer))
    {

    }
    
}