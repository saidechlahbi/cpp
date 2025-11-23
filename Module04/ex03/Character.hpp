#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
        AMateria* _inventory[4];
        AMateria * collector[1000];
        int pos;
        std::string _name;
    public:
        Character();
        Character(std::string name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        virtual ~Character();

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */
