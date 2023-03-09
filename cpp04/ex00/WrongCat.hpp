#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal{
    public:
        WrongCat();
        WrongCat(std::string type);
        virtual ~WrongCat();
        WrongCat(const WrongCat &WrongCat);
        WrongCat &operator=(const WrongCat &wrong_cat);
        void makeSound(void) const;
};

#endif