// 4_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string Name = "";
	std::string Surname = "";
	std::string Connected = "";

	std::cout << "Napis svoje meno: ";
	getline(std::cin, Name);
	std::cout << "Napis svoje priezvisko: ";
	getline(std::cin, Surname);

	Connected = Name + ", " + Surname;
	std::cout << "Oba udaje spojene v jednom retazci: " << Connected << std::endl;
}

