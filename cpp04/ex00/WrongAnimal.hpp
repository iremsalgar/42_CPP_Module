#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &wrong_animal);
        WrongAnimal &operator=(const WrongAnimal &wrong_animal);
        void makeSound(void) const;
};

#endif