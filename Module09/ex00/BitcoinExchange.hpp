#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
class BitcoinExchange
{
    private:
        std::map<std::string, double> _database;
        bool isValidDate(const std::string& date) const;
        bool isValidValue(const std::string& valueStr, double& value) const;
        void trimWhitespace(std::string& str) const;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        void loadDatabase(const std::string& filename);
        void processInput(const std::string& filename) const;
};

#endif /*BITCOINEXCHANGE_HPP*/