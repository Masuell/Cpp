// 5_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double Daphne = 100.0;
	double Cleo = 100.0;
	int years = 0;
	do
	{
		Daphne += 10;
		Cleo *= 1.05;
		years++;
	} while (Cleo <= Daphne);

	std::cout << "Cleo dobehne Daphne o " << years << " rokov.\n";
	std::cout << "Daphne bude mat vtedy na ucte: " << Daphne<<std::endl;
	std::cout << "A Cleo bude mat: " << Cleo << std::endl;

}
