/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:11 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/21 17:27:37 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/**/
AMateria::AMateria(std::string const & type):_type(type) {}

AMateria::AMateria(const AMateria& other): _type(other._type){}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}
AMateria::~AMateria(){}

/**/

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}