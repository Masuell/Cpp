// 6_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int Income = 0;
	double Tax = 0;
	std::cout << "Napis, kolko chechtakov si zarobil: ";
	std::cin >> Income;


	//0-5 000
	if (Income - 5000 <= 0)
	{
		Tax = 0;
	}
	//5 000-15 000
	else if (Income - 15000 <= 0)
	{
		Tax = (Income - 5000) * 0.1;
	}
	//15 000-35 000
	else if (Income - 35000 <= 0)
	{
		Tax = (Income - 15000) * 0.15+ 10000*0.1;
	}
	//35-inf
	else if (Income - 35000 > 0)
	{
		Tax = (Income - 35000) * 0.2 + 20000*0.15 + 10000 * 0.1;
	}
	std::cout << "Vypocitana dan je: " << Tax << " chechtakov.\n";
}
