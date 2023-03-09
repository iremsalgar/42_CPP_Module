#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

}

WrongAnimal::WrongAnimal(std::string type){
    this->type = type;
}

WrongAnimal::~WrongAnimal(){
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal)
{
    *this = wrong_animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong_animal)
{
    this->type = wrong_animal.type;
    return *this;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "The sounds of " << type << " come from the forest.." << std::endl;
}