// 10_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "list.h"

void ShowBuses(Item &aItem);
void AddYear(Item &aItem);

int main()
{
	using namespace std;
	List list;
	std::cout << "Zoznam je prazdny: " << list.IsEmpty() << std::endl;
	std::cout << "Zoznam je plny: " << list.IsFull() << std::endl;
	std::cout << "Pridavanie prvkov do zoznamu: ";
	std::cout << list.Push({ "TN136DD", 17 }) << " ";
	std::cout << list.Push({ "TN141DD", 17 }) << " ";
	std::cout << list.Push({ "TN147DD", 17 }) << " ";
	std::cout << list.Push({ "TN185CB", 20 }) << " ";
	std::cout << list.Push({ "TN312DE", 17 }) << " " << std::endl;
	std::cout << "Pocet prvkov v zozname: " << list.ItemCount() << std::endl;
	std::cout << "Pridavanie prvkov do zoznamu: ";
	std::cout << list.Push({ "TN412DA", 18 }) << " ";
	std::cout << list.Push({ "TN418DA", 18 }) << " ";
	std::cout << list.Push({ "TN502FC", 10 }) << " ";
	std::cout << list.Push({ "TN692DE", 17 }) << " ";
	std::cout << list.Push({ "TN923FT", 8 }) << " ";
	std::cout << list.Push({ "TN121FU", 8 }) << std::endl;
	std::cout << "Zoznam je plny: " << list.IsFull() << std::endl << std::endl << std::endl;
	list.Traverse(ShowBuses);
	std::cout << "Priemerny vek vozidiel je: " << list.ComputeAverageAge() << std::endl;

	std::cout << std::endl;
	list.Traverse(AddYear);
	list.Traverse(ShowBuses);
	std::cout << "Priemerny vek vozidiel je: " << list.ComputeAverageAge() << std::endl;
	return 0;
}

void ShowBuses(Item &aItem)
{
	std::cout << "Autobus s ECV " << aItem.RegPlate << " ma " << aItem.Age << " rokov.\n";
}

void AddYear(Item &aItem)
{
	aItem.Age++;
}