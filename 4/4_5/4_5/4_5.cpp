// 4_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	struct CandyBar
	{
		std::string Brand;
		float Weight=0;
		int Calories=0;
	};

	CandyBar Snack{ "Mocha Munch" , 2.3, 350};
	
	std::cout << "Znacka tycinky: " << Snack.Brand<<std::endl;
	std::cout << "Vaha tycinky: " << Snack.Weight << std::endl;
	std::cout << "Kalorie tycinky: " << Snack.Calories << std::endl;
}


