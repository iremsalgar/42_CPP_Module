#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
};

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}