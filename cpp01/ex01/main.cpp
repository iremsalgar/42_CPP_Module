#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(5, "ordek");
    delete [] zombies;
    return(0);
}