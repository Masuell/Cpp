// 6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

int main()
{
	char c = '\0';
	std::cout << "Pis nahodne znaky a napis @ pre ukoncenie:\n";
	while (c != '@')
	{
		c = getchar();
		if (!isdigit(c))
		{
			if (islower(c))
			{
				c = char(toupper(c));
			}
			else
			{
				if (isupper(c))
				{
					c = char(tolower(c));
				}
			}
			if (!isspace(c))
			{
				std::cout << c << std::endl;
			}
		}
	}
}


