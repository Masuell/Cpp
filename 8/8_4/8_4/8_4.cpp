// 8_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
	char* str = NULL;//ukazuje na retazec
	size_t ct = 0; //dlzka retazca bez '\0'
};


void set(stringy& str, const char test[]);
void show(const stringy& str, const int count = 1);
void show(const char test[], const int count = 1);

int main()
{
	stringy beany;
	char testing[] = "Opravdu neni, co byval.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Hotovo!");
	delete[] beany.str;
	return 0;
}


void set(stringy& str, const char test[])
{
	str.str = new char[strlen(test) + 1];
	strcpy_s(str.str, strlen(test) + 1, test);
	str.ct = strlen(test);
	return;
}

void show(const stringy& str, const int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << str.str << std::endl;
	}
}

void show(const char test[], const int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << test << std::endl;
	}
}