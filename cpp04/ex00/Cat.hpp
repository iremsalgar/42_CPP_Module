#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat :public virtual Animal{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        void makeSound(void) const;
};

#endif