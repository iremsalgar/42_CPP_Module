#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->name = "unname";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name){
    this->name = name; 
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}
FragTrap::~FragTrap(){
    std::cout << "destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag_trap) :ClapTrap(frag_trap)
{
    std::cout << "copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag_trap)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = frag_trap.name;
    this->hitPoint = frag_trap.hitPoint;
    this->energyPoint = frag_trap.energyPoint;
    this->attackDamage = frag_trap.attackDamage;
    return *this;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " send a request give him high five!" << std::endl;
}