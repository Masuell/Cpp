// 5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	const int Size = 12;
	const char* Months[Size] = { "Januar", "Februar","Marec","April","Maj","Jun","Jul", "August","September","Oktober","November", "December" };
	int Sales[Size];
	for (int i = 0; i < Size; i++)
	{
		std::cout << "Napis, kolko knih sa predalo za mesiac " << Months[i] << ": ";
		std::cin >> Sales[i];
	}
	int sum = 0;
	for (int i = 0; i < Size; i++)
	{
		sum += Sales[i];
	}
	std::cout << "Spolu sa predalo " << sum << " knih.\n";

}
