// 4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//const int ArSize = 20;
	string name;
	string dessert;

	cout << "Zadejte vase jmeno:\n";
	getline(cin, name);
	cout << "Zadejte vas oblibeny zakusek:\n";
	getline(cin, dessert);
	cout << "Mam vyborny " << dessert;
	cout << ", ktery si zaslouzi jen " << name << ".\n";

	return 0;
}

