// 8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string Upper(const std::string &W = "");

int main()
{
	while (true)
	{
		std::string Line = "";
		std::cout << "Napis retazec (q pre ukoncenie): ";
		getline(std::cin, Line);
		//std::cin >> Word;
		if (Line == "q")
			break;
		std::cout << Upper(Line) << std::endl;
	}

}

std::string Upper(const std::string &W)
{
	std::string c = "\0";
	std::string rW = "";
	for (int i = 0; i < W.size(); i++)
	{
		rW += toupper(W[i]);//podmienka zadania pouzit funkciu toupper()
	}
	return rW;
}


