#include "WrongCat.hpp"

WrongCat::WrongCat(){
}

WrongCat::WrongCat(std::string type){
    this->type = type;
}

WrongCat::~WrongCat(){
}

WrongCat::WrongCat(const WrongCat &wrong_cat){
    *this = wrong_cat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrong_cat){
    this->type = wrong_cat.type;
    return *this;
}

void WrongCat::makeSound(void) const{
    std::cout << "bark bark" << std::endl;
}