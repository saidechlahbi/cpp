#ifndef DATA_HPP
#define DATA_HPP

#include "Serializer.hpp"

class Data
{
    public:
        std::string name;
        int value;
        
        Data();
        Data(std::string n, int v);
        Data(const Data& other);
        Data& operator=(const Data& other);
        ~Data();
};


#endif /*DATA_HPP*/