

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <corecrt_math.h>
#include <iostream>

class  ClapTrap
{
    private:
        std::string _name;
        int _hit_points = 10;
        int _energy_points = 10;
        int _attack_damage = 0;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();

};


#endif /*CLAPTRAP_HPP*/