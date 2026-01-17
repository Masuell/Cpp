// 5_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

const size_t Size = 20;

int main()
{
	char str[Size] = "\0";
	int counter = 0;
	char c = '\0';
	std::cout << "Napis slova, \"hotovo\" pre stop: ";
	while (std::cin>>str && strcmp(str, "hotovo\0"))//strcmp returns 0 if both strings are equal
	{
		counter++;
	}
	std::cout << "Kym sa naslo slovo \"hotovo\" si napisal " << counter << " slov.";
}


