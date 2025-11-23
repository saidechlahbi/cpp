/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:08:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/23 22:08:15 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i< 4; i++)
        _prototypes[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i< 4; i++)
        _prototypes[i] = NULL;
    for (int i = 0; i< 4; i++)
    {
        if (other._prototypes[i])
            _prototypes[i] = other._prototypes[i]->clone();
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{

    for (int i = 0; i< 4; i++)
    {
        if (_prototypes[i])
            delete _prototypes[i];
        if (other._prototypes[i])
            _prototypes[i] = other._prototypes[i]->clone();
        else
            _prototypes[i] = NULL;
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
   for (int i = 0; i< 4; i++)
    {
        if (_prototypes[i])
            delete _prototypes[i];
    }
}



void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (_prototypes[i] == NULL)
        {
            _prototypes[i] = m;
            return ;
        }
    }
    delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_prototypes[i] && _prototypes[i]->getType() == type)
            return _prototypes[i]->clone();
    }
    return NULL;
}