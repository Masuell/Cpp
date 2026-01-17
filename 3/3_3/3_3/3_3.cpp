// 3_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	const float Sec2Min = 1.0 / 60.0;
	const float Min2Deg = 1.0 / 60.0;

	int iDegrees = 0;
	int iMinutes = 0;
	float Seconds = 0;

	float fMinutes = 0;
	float fDegrees = 0;

	std::cout << "Zadaj zemepisnu sirku v stupnoch, minutach a sekundach:\n";
	std::cout << "Najskor stupne: ";
	std::cin >> iDegrees;
	std::cout << "Teraz minuty: ";
	std::cin >> iMinutes;
	std::cout << "A nakoniec sekundy: ";
	std::cin >> Seconds;

	fMinutes = iMinutes + Seconds * Sec2Min;
	fDegrees = iDegrees + fMinutes * Min2Deg;
	std::cout << "V dekadickom tvare to je: " << fDegrees << ".\n";
}

