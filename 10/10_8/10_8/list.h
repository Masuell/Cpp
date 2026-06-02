#pragma once

#include <string>

struct Bus {
	std::string RegPlate = "";
	unsigned int Age = 0;
};

typedef Bus Item;

class List
{
private:
	static unsigned int const Max = 10;
	double AverageAge = 0;
	unsigned int NumberOfItems = 0;
	Item Items[Max];

public:
	//Vytvori prazdny zoznam
	List();

	//Prida polozku do zoznamu, vracia true, ak sa podari polozku pridat
	bool Push(Item aItem);

	//Vracia true ak je zoznam prazdny
	bool IsEmpty() const;

	//Vracia true ak je zoznam plny
	bool IsFull() const;

	//Vracia pocet prvkov
	int ItemCount() const;

	//metoda, na prejdenie kazdeho prvku v poli. Ako argument berie funkciu, a ta uz si s tymto prvkom robi co chce
	void Traverse(void (*pfun)(Item &aItem));

	//Vrati priemerny vek vozidla
	double ComputeAverageAge();
};