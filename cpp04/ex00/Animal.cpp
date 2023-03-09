#include "Animal.hpp"

Animal::Animal(){
}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::~Animal(){
    std::cout << " Animal Destructer called" << std::endl;
}

Animal::Animal(const Animal &animal){
    *this=animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    this->type = animal.type;
    return *this;
}

std::string Animal::getType(void) const{
    return type;
}

void Animal::makeSound(void) const{
    std::cout << "Animal sound" << std::endl;
}
