// 6_4.cpp : This 0file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int StrSize = 20;
const int ProgrammersCount = 3;
struct rvp
{
	char FullName[StrSize];
	char WorkPos[StrSize];
	char RvpName[StrSize];
	int choice;
};

int main()
{
	rvp Programmers[ProgrammersCount];
	char UserChoice = '\0';

	Programmers[0] = { "Wimp Macho", "Tester","SuperSecret",0 };
	Programmers[1] = { "Raki Rhodes", "Data Guy","Nothing",1 };
	Programmers[2] = { "Celia Laiter", "Junior Programmer","NoProgrammer",2 };

	std::cout << "Vypis clenov Radu vludnych programatorov\n";
	std::cout << "a. vypis mien \t\tb. vypis pracovnych zaradeni\n";
	std::cout << "c. vypis mien RVP \t d. vypis podla volby\nk. koniec\n\n";
	while (UserChoice != 'k' && UserChoice != 'K')
	{
		std::cout << "Zadaj svoju volbu: ";
		std::cin >> UserChoice;
		if (UserChoice == 'a' || UserChoice == 'A' || UserChoice == 'b' || UserChoice == 'B' || UserChoice == 'c' || UserChoice == 'C')
		{
			if (UserChoice == 'a' || UserChoice == 'A')
				for (int i = 0; i < ProgrammersCount; i++)
					std::cout << Programmers[i].FullName << ", ";
			if (UserChoice == 'b' || UserChoice == 'B')
				for (int i = 0; i < ProgrammersCount; i++)
					std::cout << Programmers[i].WorkPos << ", ";
			if (UserChoice == 'c' || UserChoice == 'C')
				for (int i = 0; i < ProgrammersCount; i++)
					std::cout << Programmers[i].RvpName << ", ";
		}
		else if (UserChoice == 'd' || UserChoice == 'D')
		{
			for (int i = 0; i < ProgrammersCount; i++)
			{
				if (Programmers[i].choice == 0)
					std::cout << Programmers[i].FullName << ", ";
				if (Programmers[i].choice == 1)
					std::cout << Programmers[i].WorkPos << ", ";
				if (Programmers[i].choice == 2)
					std::cout << Programmers[i].RvpName << ", ";
			}
		}
		std::cout << std::endl;
	}
}

