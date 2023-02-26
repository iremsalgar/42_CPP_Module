#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	name = "<unnamed>";
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor with string argument called" << std::endl;
	this->name = name;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->name = scav_trap.name;
	this->hitPoint = scav_trap.hitPoint;
	this->energyPoint = scav_trap.energyPoint;
	this->attackDamage = scav_trap.attackDamage;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " have entered in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}