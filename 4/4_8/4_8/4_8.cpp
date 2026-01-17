// 4_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	struct Pizza
	{
		std::string Name;
		float Diameter=0;
		float Weight=0;
	};

	Pizza* Delicatesa = new Pizza;
	int* ptrA = new int(923);
	std::cout << "Pointer na a: ptrA ma hodnotu: " << ptrA << std::endl;
	std::cout << "Pointer na a: ptrA ma adresu: " << &ptrA << std::endl;
	std::cout << "Pointer na a: ptrA ukazuje na hodnotu: " << *ptrA << std::endl;
	std::cout << "\n\n\nA teraz k zadaniu:\n";

	std::cout << "Zadaj nazov pizze: ";
	getline(std::cin, Delicatesa->Name);
	std::cout << "Zadaj priemer pizze: ";
	std::cin >> Delicatesa->Diameter;
	std::cout << "Zadaj vahu pizze: ";
	std::cin >> Delicatesa->Weight;

	std::cout << "Nazov pizze je " << Delicatesa->Name << ", priemer pizze je " << Delicatesa->Diameter << " cm a jej vaha je " << Delicatesa->Weight << " gramov.\n";

	delete ptrA;
	delete Delicatesa;
}
