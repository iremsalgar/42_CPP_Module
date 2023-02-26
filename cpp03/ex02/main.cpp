#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << "************FragTrap:************" << std::endl;
		FragTrap A("irem");
		FragTrap B("piltan");

		B.attack("piltan");
		A.takeDamage(30);
		B.highFivesGuys();
	}
	{
		std::cout << "************ScavTrap:************" << std::endl;
		ScavTrap A("irem");
		ScavTrap B("piltan");

		B.attack("piltan");
		A.takeDamage(20);
		B.guardGate();
	}
	{
		std::cout << "************ClapTrap:************" << std::endl;
		ClapTrap A;
		ClapTrap B("irem");

		A.attack("irem");
		B.takeDamage(0);
		B.beRepaired(0);
	}
}