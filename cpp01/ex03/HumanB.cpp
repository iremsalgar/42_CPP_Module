#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
};

HumanB::~HumanB()
{
};

void HumanB::attack()
{
    if (this->weapon->getType() != "")
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with his " << "fists" << std::endl;
};

void HumanB::setName(std::string name)
{
    this->name = name;
};

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
};