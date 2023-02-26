#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
		std::cout << "************DiamondTrap:************" << std::endl;
		DiamondTrap A("irem");
		A.attack("Cagla");
		A.whoAmI();
		A.highFivesGuys();
		A.guardGate();
	}
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