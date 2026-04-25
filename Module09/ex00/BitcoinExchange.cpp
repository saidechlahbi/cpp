#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->_database = other._database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::trimWhitespace(std::string& str) const {
    size_t first = str.find_first_not_of(" \t\r\n");
    if (first == std::string::npos) {
        str.clear();
        return;
    }
    size_t last = str.find_last_not_of(" \t\r\n");
    str = str.substr(first, last - first + 1);
}

bool BitcoinExchange::isValidDate(const std::string& date) const {
    // 1. Basic format check (YYYY-MM-DD)
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }
    
    for (size_t i = 0; i < 10; ++i) {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
            return false;
    }

    // 2. Extract values
    int year  = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day   = std::atoi(date.substr(8, 2).c_str());

    // 3. General range validation
    // Bitcoin began Jan 3, 2009. Adjust year < 2009 if your data starts later.
    if (year < 2000 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }
    
    // 4. Determine max days in the specific month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Handle Leap Year for February
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (isLeap) {
        daysInMonth[2] = 29;
    }

    // 5. Final validation against the month's limit
    if (day > daysInMonth[month]) {
        return false;
    }

    return true;
}

bool BitcoinExchange::isValidValue(const std::string& valueStr, double& value) const {
    char* end;
    value = std::strtod(valueStr.c_str(), &end);
    
    if (*end != '\0')
        return false;
    if (value < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // Skip header
    while (std::getline(file, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string date = line.substr(0, commaPos);
            std::string rateStr = line.substr(commaPos + 1);
            _database[date] = std::strtod(rateStr.c_str(), NULL);
        }
    }
    file.close();
}

void BitcoinExchange::processInput(const std::string& filename) const {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // Skip header

    while (std::getline(file, line)) {
        size_t pipePos = line.find('|');
        if (pipePos == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, pipePos);
        std::string valueStr = line.substr(pipePos + 1);
        
        trimWhitespace(date);
        trimWhitespace(valueStr);

        if (!isValidDate(date)) {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        double value;
        if (!isValidValue(valueStr, value)) {
            continue;
        }
you
        std::map<std::string, double>::const_iterator it = _database.upper_bound(date);
        if (it != _database.begin()) {
            --it;
        }
        else
        {
            std::cerr << "Error: date prior to database genesis." << std::endl;
            continue;
        }

        std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
    }
    file.close();
}