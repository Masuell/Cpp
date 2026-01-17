// 5_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int rows = 0;
	std::cout << "Zadaj pocet riadkov malby:";
	std::cin >> rows;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= rows - i; j++)
		{
			std::cout << ".";
		}
		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}


