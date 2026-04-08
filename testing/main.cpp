#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    (void)av;
    if (ac == 2)
    {
        BitcoinExchange bit;
        bit.loadDatabase("data.csv");
    }
    return 0;

}