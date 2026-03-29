// 7_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double HarmonicMean(double x, double y);

int main()
{
	double a = 0.1;
	double b = 0.1;
	std::cout << "Napis 2 cisla pre vypocet harmonickeho priemeru (0 pre ukoncenie):\n";
	while (true)
	{
		std::cout << "Cislo a) ";
		std::cin >> a;
		std::cout << "Cislo b) ";
		std::cin >> b;
		if (a != 0 && b != 0)
			std::cout << "Harmonicky priemer zadanych cisel je: " << HarmonicMean(a, b) << std::endl << std::endl;
		else
			break;
	}
}

double HarmonicMean(double x, double y)
{
	//return 2.0 * x * y / (x + y);
	if (x != -y)
		return 2.0 / (1.0 / x + 1.0 / y);
	else
		return 0;
}