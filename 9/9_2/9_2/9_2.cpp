// 9_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// static.cpp -- použití statické lokální promìnné
#include <iostream>
#include <string>

// prototyp funkce
void strcount(const std::string& str);

int main()
{
	using namespace std;
	string input;
	char next;

	cout << "Zadejte radek textu:\n";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Zadejte dalsi radek textu (prazdny radek na ukonceni):\n";
		getline(cin, input);
	}
	cout << "Sbohem\n";
	return 0;
}

void strcount(const std::string& str)
{
	using namespace std;
	static int total = 0; // statická lokální promìnná
	int count = 0; // automatická lokální promìnná

	cout << "\"" << str << "\" obsahuje ";
	count = str.length();
	total += count;
	cout << count << " znaku\n";
	cout << total << " znaku celkem\n";
}
