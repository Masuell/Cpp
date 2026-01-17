// 5_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()
{
	std::string Word = "";
	int counter = 0;
	char c = '\0';
	std::cout << "Napis slova, \"hotovo\" pre stop: ";
	while (std::cin >> Word && Word!="hotovo")//strcmp returns 0 if both strings are equal
	{
		counter++;
	}
	std::cout << "Kym sa naslo slovo \"hotovo\" si napisal " << counter << " slov.";
}


