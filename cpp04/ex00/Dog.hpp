#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :public virtual Animal{
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        void makeSound(void) const;
};

#endif