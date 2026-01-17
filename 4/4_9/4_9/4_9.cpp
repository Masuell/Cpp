// 4_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	struct CandyBar
	{
		std::string Brand;
		float Weight = 0;
		int Calories = 0;
	};


	CandyBar* Bars = new CandyBar[3];
	Bars[0].Brand = "Horalka";
	Bars[0].Weight = 50;
	Bars[0].Calories = 650;

	Bars[1] = { "Margot", 80, 753 };
	Bars[2] = { "Lina", 60, 923 };


	std::cout << "Znacka tycinky: " << Bars[0].Brand << ", Vaha tycinky: " << Bars[0].Weight << ", Kalorie tycinky: " << Bars[0].Calories << std::endl;
	std::cout << "Znacka tycinky: " << Bars[1].Brand << ", Vaha tycinky: " << Bars[1].Weight << ", Kalorie tycinky: " << Bars[1].Calories << std::endl;
	std::cout << "Znacka tycinky: " << Bars[2].Brand << ", Vaha tycinky: " << Bars[2].Weight << ", Kalorie tycinky: " << Bars[2].Calories << std::endl;

	delete[] Bars;
}


