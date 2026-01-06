// 3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



using namespace std;

int main()
{
	int Inches = 0;
	int Feets = 0;
	const int InchInFt = 12;

	cout << "Napis svoju velkost v palcoch: ___\b\b\b ";
	cin >> Inches;
	Feets = Inches / InchInFt;
	Inches = Inches % InchInFt;
	cout << "Tvoja vyska v celych stopach je: " << Feets << " a celych palcoch: " << Inches << ".";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


