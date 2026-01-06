// 2_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double LY2AU(double LightYears);

int main()
{
	double LightYears = 0;
	double AstronomicalUnits = 0;

	std::cout << "Zadaj vzdialenost v svetelnych rokoch: ";
	std::cin >> LightYears;
	AstronomicalUnits = LY2AU(LightYears);
	std::cout << LightYears << " svetelnych rokov je " << AstronomicalUnits << " astronomickych jednotiek.";
}

double LY2AU(double LightYears)
{
	return LightYears * 63240;
}
