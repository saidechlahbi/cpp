#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
    /*Create a Data object*/
    Data* original = new Data("John Doe", 42);
    
    std::cout << "<--- Original Data --->" << std::endl;
    std::cout << "Name: " << original->name << std::endl;
    std::cout << "Value: " << original->value << std::endl;
    
    /*Serialize: convert pointer to uintptr_t*/
    uintptr_t serialized = Serializer::serialize(original);
    
    std::cout << "\n<--- Serialized --->" << std::endl;
    std::cout << "Serialized value: " << serialized << std::endl;
    std::cout << "In hex: 0x" << std::hex << serialized << std::dec << std::endl;
    
    /* Deserialize: convert uintptr_t back to pointer*/
    Data* deserialized = Serializer::deserialize(serialized);
    
    std::cout << "\n<--- Deserialized Data --->" << std::endl;
    std::cout << "Address: " << deserialized << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Value: " << deserialized->value << std::endl;
    
    /* Check if they point to the same address*/
    std::cout << "\n<--- Verification --->" << std::endl;
    if (original == deserialized)
        std::cout << "Success! Pointers are equal." << std::endl;
    else
        std::cout << "Error! Pointers are different." << std::endl;
    
    delete original;
    
    return 0;
}