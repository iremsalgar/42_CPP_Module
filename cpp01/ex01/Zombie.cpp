#include "Zombie.hpp"

Zombie::Zombie()
{
};

Zombie::~Zombie()
{
    std::cout << this->name << " is dead :c" << std::endl; 
};

void Zombie::setName(std::string name)
{
    this->name = name;
};

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};