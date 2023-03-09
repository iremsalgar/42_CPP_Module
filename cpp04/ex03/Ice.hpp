#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const & src);
        Ice & operator=(Ice const & rhs);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif