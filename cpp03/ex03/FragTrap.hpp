#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap :public virtual ClapTrap{
    public:
        FragTrap();
	    FragTrap(std::string name);
	    ~FragTrap();
        FragTrap(const FragTrap &frag_trap);
	    FragTrap &operator=(const FragTrap &frag_trap);
	    void highFivesGuys(void);
	    void attack(std::string const &target);
};

#endif