#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>
#include <cstdlib>

class BitcoinExchange
{
        std::map<std::string, double> _database;
        void _parceAndFill(const std::string &line);
        bool _check_header(std::string &line);

        bool isValidDate(const std::string& date) const;
        bool isValidValue(const std::string& valueStr, double& value) const;
        void _trimWhitespace(std::string& str) const;
    public:
        /*orthodoxe canonical form*/
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        void loadDatabase(const std::string &filename);
        void processInput(const std::string &filename);
        // class CantOpenException: public std::exception
        // {
        //     const char *what() const throw();
        // };
};

#endif /*BITCOINEXCHANGE_HPP*/