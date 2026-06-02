#include "Dog.h"
#include <cstring>
#include <iostream>


Dog::Dog(const char* aName)
{
	IS = 50;
	strcpy_s(Name, NAME_LENGTH, aName);
}

void Dog::Change_IS(int aIS)
{
	IS = aIS;
}
void Dog::printDog() const
{
	std::cout << "Meno psa: " << Name << std::endl;
	std::cout << "Index spokojnosti: " << IS << std::endl << std::endl;
}