// 10_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype> // nebo ctype.h
#include "stack.h"
int main()
{
	using namespace std;
	Stack st; // vytvoøí prázdný zásobník
	char ch;
	customer cust;
	double medzisucet = 0;
	cout << "Pre pridanie objednavky zadajte P,\n"
		<< "Pre spracovanie s, pre ukoncenie K.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'P':
		case 'p': 	
			cout << "Zadajte meno zakaznika: ";
			cin >> cust.fullname;
			cout << "Zadajte jeho platbu: ";
			cin >> cust.payment;
			if (st.isfull())
				cout << " zasobnik je uz plny \n";
			else
				st.push(cust);
			break;
		case 'S':
		case 's': 	
			if (st.isempty())
				cout << " zasobnik je uz prazdny \n";
			else 
			{
				st.pop(cust);
				medzisucet += cust.payment;
				cout << " Zakaznik " << cust.fullname << " bol spracovany\n";
				cout << " a aktualny medzisucet je rovny " << medzisucet << " eur\n";
			}
			break;
		}
		cout << "Pre pridanie objednavky zadajte P,\n"
			<< "Pre spracovanie s, pre ukoncenie K.\n";
	}
		cout << "Maj sa krasne!\n";
	return 0;
}


