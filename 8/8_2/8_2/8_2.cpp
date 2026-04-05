// 8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct CandyBar
{
	const char* Name;//Name je pointer na char na konstantu (ukazuje na konstantu).......char* const Name -> Name je konstantny pointer na char (ukazuje stale na rovnake miesto)
	double Weight;
	int Callories;
};

void SetCandyBar(CandyBar& aBar, const char* aName = "Millenium Munch", double aWeight = 2.85, int aCallories = 350);
void PrintCandyBar(const CandyBar& aBar);

int main()
{
	CandyBar MilleniumMunch;
	SetCandyBar(MilleniumMunch);
	PrintCandyBar(MilleniumMunch);

	CandyBar Snickers;
	SetCandyBar(Snickers, "Fajny Snickers", 50, 383);
	PrintCandyBar(Snickers);

}

void SetCandyBar(CandyBar& aBar, const char* aName, double aWeight, int aCallories)
{
	aBar.Name = aName;
	aBar.Weight = aWeight;
	aBar.Callories = aCallories;
	return;
}

void PrintCandyBar(const CandyBar& aBar)
{
	using namespace std;
	cout << "Meno tycinky: " << aBar.Name << endl;
	cout << "Vaha tycinky: " << aBar.Weight << endl;
	cout << "Kalorie tycinky: " << aBar.Callories << endl;
	return;
}

