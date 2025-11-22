#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class Materiasource: public IMateriaSource
{
    public:
        Materiasource();
        Materiasource(const Materiasource& other);
        Materiasource& operator=(const Materiasource& other);
        ~Materiasource();

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
}

#endif /* MATERIASOURCE_HPP */
