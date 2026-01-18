// 6_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const size_t NameSize = 20;

struct Contributor
{
	char Name[NameSize] = "";
	double Fee = 0;
};

int main()
{
	int ContributorsNumber = 0;
	std::cout << "Zadaj pocet prispievatelov: ";
	std::cin >> ContributorsNumber;
	while (std::cin.get() != '\n');
	Contributor* Contributors = new Contributor[ContributorsNumber];
	for (int i = 0; i < ContributorsNumber; i++)
	{
		std::cout << "Zadaj meno prispievatela: ";
		std::cin.getline(Contributors[i].Name, NameSize);
		std::cout << "A teraz zadaj jeho prispevok: ";
		std::cin >> Contributors[i].Fee;
		while (std::cin.get() != '\n');
	}
	if (ContributorsNumber == 0)
	{
		std::cout << "Bez prispevkov.\n";
	}
	else
	{
		std::cout << "---------------\n";
		std::cout << "Velki patroni.\n";
		for (int i = 0; i < ContributorsNumber; i++)
		{
			if (Contributors[i].Fee > 250)
			{
				std::cout << Contributors[i].Name << std::endl;
			}
		}
		std::cout << "---------------\n";
		std::cout << "Patroni.\n";
		for (int i = 0; i < ContributorsNumber; i++)
		{
			if (Contributors[i].Fee <= 250 && Contributors[i].Fee > 0)
			{
				std::cout << Contributors[i].Name << std::endl;
			}
		}
		std::cout << "---------------\n";
	}
	delete[] Contributors;
}


