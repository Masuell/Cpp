// 7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int GetInfo(int i);
void PrintInfo(int Results[], int end);
double AverageValue(int Results[], int end);


int main()
{
	int Results[10];
	int i = 0;
	int Im = 0;
	std::cout << "Postupne zadaj vysledky hracov (max 10) v golfe, zaporna hodnota pre ukoncenie:\n";
	while (i < 10 and Im>=0)
	{
		Im = GetInfo(i + 1);
		if (Im >= 0)
		{
			Results[i] = Im;
			i += 1;
		}
	}
	if (i > 0)
		PrintInfo(Results, i);

}

int GetInfo(int i)
{
	int Result = 0;
	std::cout << "Napis vysledky " << i << "-teho hraca: ";
	std::cin >> Result;
	return Result;
}

void PrintInfo(int Results[], int end = 0)
{
	for (int i = 0; i < end; i++)
	{
		std::cout << i + 1 << "-ty hrac ziskal " << Results[i] << " bodov\n";
	}
	std::cout << "Priemerne nahrate skore je: " << AverageValue(Results, end) << std::endl;
}

double AverageValue(int Results[], int end = 1)
{
	double sum = 0;
	for (int i = 0; i < end; i++)
	{
		sum += Results[i];
	}
	return sum / end;
}