// 3_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	float DistanceKm = 0;
	float ConsL = 0;
	std::cout << "Zadaj prejdenu vzdialenost v km: ";
	std::cin >> DistanceKm;
	std::cout << "Teraz zadaj kolko litrov paliva si spotreboval: ";
	std::cin >> ConsL;
	std::cout << "Tvoja priemerna spotreba je: " << 100.0 * ConsL / DistanceKm << " litrov na 100 km.";
}


