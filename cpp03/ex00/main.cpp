#include "ClapTrap.hpp"

int main()
{
    ClapTrap A;
    ClapTrap B("irem");

	A.attack("irem");
	B.takeDamage(10);
	B.beRepaired(5);
}
