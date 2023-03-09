#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif