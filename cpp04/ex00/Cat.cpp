#include "Cat.hpp"

Cat::Cat(){
    Animal::type = "Cat";
}

Cat::~Cat(){
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
    return *this;
}

Cat::Cat(const Cat &cat)
{
   *this = cat;
}
void Cat::makeSound(void) const{  
    std::cout << "kedi sesi: mır mır" << std::endl;
}