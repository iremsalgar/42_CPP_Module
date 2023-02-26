#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        int hitPoint;
        int energyPoint;
        int attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &clap_trap);
	    ClapTrap &operator=(const ClapTrap &clap_trap);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif