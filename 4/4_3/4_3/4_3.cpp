// 4_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main()
{
	const size_t Size = 15;
	char Name[Size] = "";
	char Surname[Size] = "";
	char Connected[2*Size+1] = "";
	size_t NameSize = 0;

	std::cout << "Napis svoje meno: ";
	std::cin.getline(Name, 14);
	std::cout << "Napis svoje priezvisko: ";
	std::cin.getline(Surname, 14);
	strcpy_s(Connected, Surname);
	NameSize = strnlen_s(Name, 15);
	strcat_s(Connected, ", ");
	strcat_s(Connected, Name);
	Connected[2 * Size] = '\0';
	std::cout << "Oba udaje spojene v jednom retazci: " << Connected << std::endl;
}


