#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->name = "unname";
    this->energyPoint = 10;
    this->attackDamage = 0;
    this->hitPoint = 10;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
    this->name = name;
    this->energyPoint = 10;
    this->attackDamage = 0;
    this->hitPoint = 10;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap_trap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = clap_trap.name;
	this->hitPoint = clap_trap.hitPoint;
	this->energyPoint = clap_trap.energyPoint;
	this->attackDamage = clap_trap.attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount != 0)
	    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	if ((int)(hitPoint - amount) > 0)
        hitPoint -= amount;
    else{
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " was repaired by " << amount << " hit points!" << std::endl;
	hitPoint += amount;
}