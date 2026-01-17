// 5_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	const int Size = 12;
	const int Years = 3;
	const char* Months[Size] = { "Januar", "Februar","Marec","April","Maj","Jun","Jul", "August","September","Oktober","November", "December" };
	int Sales[Size][Years];
	for (int j = 0; j < Years; j++)
	{
		for (int i = 0; i < Size; i++)
		{
			std::cout << "Napis, kolko knih sa predalo za mesiac " << Months[i] << ", roku " << j << ": ";
			std::cin >> Sales[i][j];
		}
	}
	int YearSum = 0;
	int TotalSum = 0;
	for (int j = 0; j < Years; j++)
	{
		for (int i = 0; i < Size; i++)
		{
			YearSum += Sales[i][j];
		}
		std::cout <<"V roku "<<j << " sa predalo " << YearSum << " knih.\n";
		TotalSum += YearSum;
		YearSum = 0;
	}
	std::cout << "To je spolu " << TotalSum << " knih.\n";
}
