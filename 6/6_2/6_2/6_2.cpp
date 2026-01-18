// 6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	const size_t Size = 10;
	double Numbers[Size];
	int Counter = 0;
	std::string StrNum = "";
	double sum = 0;
	double Mean = 0;

	std::cout << "Napis " << Size << " cisel alebo nenumericky znak pre ukoncenie:";
	for (int i = 0; i < Size; i++)
	{
		std::cin >> StrNum;
		try
		{
			Numbers[i] = stod(StrNum);
			sum += Numbers[i];
			Counter++;
			std::cout << "Counter: " << Counter << "\n";
		}
		catch (...)
		{
			break;
		}
	}
	Mean = sum / Counter;
	std::cout << "Priemer cisel je: " << Mean << std::endl;
	std::cout << "Tu su vsetky vacsie ako priemer: ";
	for (int i = 0; i < Counter; i++)
	{
		if (Numbers[i] > Mean)
			std::cout << Numbers[i] << ", ";
	}
	std::cout << "\b\b";


}


