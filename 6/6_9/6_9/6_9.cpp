// 6_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

struct Contributor
{
	std::string Name = "";
	double Fee = 0;
};

int main()
{
	std::string Line;
	int ContributorsNumber = 0;

	std::ifstream File("C:\\Moje dokumenty\\Cpp\\Mistrovstvi cpp\\6\\6_9\\Darci.txt");
	if (!File)
	{
		std::cout << "Subor sa nepodarilo otvorit.\n";
		return 1;
	}
	getline(File, Line);
	ContributorsNumber = stoi(Line);
	Contributor* Contributors = new Contributor[ContributorsNumber];

	for (int i = 0; i < ContributorsNumber; i++)
	{
		getline(File, Contributors[i].Name);
		getline(File ,Line);
		Contributors[i].Fee = stod(Line);
	}
	if (ContributorsNumber == 0)
	{
		std::cout << "Bez prispevkov.\n";
	}
	else
	{
		std::cout << "---------------\n";
		std::cout << "Velki patroni:\n";
		for (int i = 0; i < ContributorsNumber; i++)
		{
			if (Contributors[i].Fee > 250)
			{
				std::cout << Contributors[i].Name << std::endl;
			}
		}
		std::cout << "---------------\n";
		std::cout << "Patroni:\n";
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


