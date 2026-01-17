// 4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



int main()
{
	std::string Name = "";
	std::string Surname = "";
	char Grade = 'F';
	int Years = 0;

	std::cout << "Ake je vase krstne meno?: ";
	std::getline(std::cin, Name);
	std::cout << "Ake je vase priezvisko?: ";
	std::getline(std::cin, Surname);
	std::cout << "Aku znamku si zasluzis?: ";
	std::cin >> Grade;
	std::cout << "Kolko mas rokov?: ";
	std::cin >> Years;

	std::cout << std::endl;
	std::cout << "Meno: " << Surname << ", " << Name<<std::endl;
	std::cout << "Znamka: " << char(Grade+1) <<std::endl;
	std::cout << "Vek: " << Years<<std::endl;
}


