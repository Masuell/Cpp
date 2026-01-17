// 3_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>



int main()
{
	const int Ft2Inch = 12;
	const float Inch2M = 0.0254;
	const float Lb2Kg = 1 / 2.2;

	int Feets = 0;
	float Inches = 0;
	float Pounds = 0;

	float Meters = 0;
	float Kilograms = 0;

	float BMI = 0;

	std::cout << "Napis svoju vysku v stopach a palcoch. Stopy: ";
	std::cin >> Feets;
	std::cout << "Palce: ";
	std::cin >> Inches;
	std::cout << "Napis svoju hmotnost v librach: ";
	std::cin >> Pounds;

	Inches += Feets * Ft2Inch;
	Meters = Inches * Inch2M;
	Kilograms = Pounds * Lb2Kg;
	BMI = Kilograms / pow(Meters, 2);
	std::cout << "Tvoje BMI je: " << BMI << ".\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

