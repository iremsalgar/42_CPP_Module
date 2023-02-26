#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
	    ScavTrap(std::string name);
	    ~ScavTrap();
	    ScavTrap(const ScavTrap &scav_trap);
	    ScavTrap &operator=(const ScavTrap &scav_trap);
	    void guardGate();
	    void attack(std::string const &target);
};

#endif
