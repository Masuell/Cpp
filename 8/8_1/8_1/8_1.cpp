// 8_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


void PrintString(std::string Str, int PrintsNumber = 0);
void PrintCharArray(char Str[], int PrintsNumber = 0);

int main()
{
	std::string Word = "AhojString!\n";
	std::cout << "Prve volanie (bez druheho argumentu): ";
	PrintString(Word);
	std::cout << "Druhe volanie (s druhym argumentom ako 0): ";
	PrintString(Word, 0);
	std::cout << "Tretie volanie (s druhym, nenulovym argumentom): ";
	PrintString(Word, 8);
	std::cout << "\n\n\n";
	char WordChar[] = "AhojChar!\n";
	std::cout << "Prve volanie (bez druheho argumentu): ";
	PrintCharArray(WordChar);
	std::cout << "Druhe volanie (s druhym argumentom ako 0): ";
	PrintCharArray(WordChar, 0);
	std::cout << "Tretie volanie (s druhym, nenulovym argumentom): ";
	PrintCharArray(WordChar, 8);
}

void PrintString(std::string Str, int PrintsNumber)
{
	static unsigned int NumberOfCalls = 0;
	NumberOfCalls++;
	int a;
	if (PrintsNumber == 0)
		a = 1;
	else
		a = NumberOfCalls;
	for (int i = 0; i < a; i++)
	{
		std::cout << Str;
	}
	return;
}

void PrintCharArray(char Str[], int PrintsNumber)
{
	static unsigned int NumberOfCalls = 0;
	NumberOfCalls++;
	int a;
	if (PrintsNumber == 0)
		a = 1;
	else
		a = NumberOfCalls;
	for (int i = 0; i < a; i++)
	{
		std::cout << Str;
	}
	return;
}