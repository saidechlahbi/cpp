/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:07:42 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/23 22:07:42 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name(""), pos(0)
{
    for (int i = 0; i < 4;i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 1000;i++)
        collector[i] = NULL;
}

Character::Character(std::string name): _name(name) , pos(0)
{
    for (int i = 0; i < 4;i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 1000;i++)
        collector[i] = NULL;
}

Character::Character(const Character& other): _name(other._name), pos(0)
{
    for (int i = 0; i < 1000;i++)
        collector[i] = NULL;
    for (int i = 0; i < 4;i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4;i++)
        {
            if (_inventory[i])
                delete _inventory[i];
        }
        for (int i = 0; i < 4;i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
        _name = other._name;
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4;i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    for (int i = 0; i < pos ;i++)
    {
        if (collector[i])
            delete collector[i];
    }
}


std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return ;
    if (_inventory[idx] == NULL)
        return;
    collector[pos] = _inventory[idx];
    pos++;
    _inventory[idx]  = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (_inventory[idx] == NULL)
        return;
    _inventory[idx]->use(target);
}