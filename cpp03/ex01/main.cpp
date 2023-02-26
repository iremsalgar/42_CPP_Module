#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << "**********ScavTrap:**********" << std::endl;
		ScavTrap A("irem");
		ScavTrap B("cagla");

		B.attack("irem");
		A.takeDamage(20);
		B.guardGate();
	}
	{
		std::cout << "**********ClapTrap:**********" << std::endl;
		ClapTrap A;
		ClapTrap B("cagla");

		A.attack("irem");
		B.takeDamage(0);
		B.beRepaired(0);
	}
}