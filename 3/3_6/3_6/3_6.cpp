// 3_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	const float Km2Mil = 0.6214;
	const float L2Gal = 1 / 3.875;

	float ConsEU = 0;
	std::cout << "Zadaj spotrebu v europskom style [l/100 km]: ";
	std::cin >> ConsEU;
	std::cout << "Spotreba v americkom style je: " << 100 / (ConsEU * L2Gal / Km2Mil) << " mil na galon";

}

