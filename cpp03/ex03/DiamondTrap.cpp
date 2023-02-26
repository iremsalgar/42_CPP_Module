#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	name = "<unnamed>";
	ClapTrap::name = name + "_clap_name";
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor with string argument called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond_trap) : ClapTrap(diamond_trap), ScavTrap(diamond_trap), FragTrap(diamond_trap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond_trap)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->name = diamond_trap.name;
	this->hitPoint = diamond_trap.hitPoint;
	this->energyPoint = diamond_trap.energyPoint;
	this->attackDamage = diamond_trap.attackDamage;
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap - " << this->name << ". ClapTrap - " << ClapTrap::name << std::endl;
}