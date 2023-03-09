#include "Dog.hpp"

Dog::Dog(){
    Animal::type = "Dog";
}

Dog::~Dog(){
}

Dog::Dog(const Dog &dog){
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog){
    this->type = dog.type;
    return *this;
}

void Dog::makeSound(void) const{
    std::cout << "Köpek sesi: hav hav" << std::endl;
}