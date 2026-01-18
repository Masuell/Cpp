// 6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string Word = "";
	char c = '\0';
	unsigned int Vowels = 0;
	unsigned int Consonants = 0;
	unsigned int Other = 0;
	std::cout << "Zadavaj slova (\'q\' pre ukoncenie):\n";
	while (std::cin >> Word && Word != "q")
	{
		c = Word[0];
		if (isalpha(c))
		{
			c = tolower(c);
			switch (c)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':
				Vowels++;
				break;
			default:
				Consonants++;
			}
		}
		else
		{
			Other++;
		}
	}
	std::cout << Vowels << " slova zacinaju samohlaskou.\n";
	std::cout << Consonants << " slova zacinaju spoluhlaskou.\n";
	std::cout << Other << " zacinaju inym znakom.\n";
}


//333 striebornych anduliek preletelo
//cez 333 europskych poslancov
