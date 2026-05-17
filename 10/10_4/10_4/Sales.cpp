//Sales.cpp
#include <iostream>
#include "Sales.h"


using namespace SALES;
Sales::Sales(const double ar[], size_t n)
{

	double sum = 0;
	
	if (n > 4)
		n = 4;
	for (size_t i = n; i < 4; i++)
	{
		sales[i] = 0;
	}
	if (n > 0)
	{
		min = ar[0];
		max = ar[0];
		for (size_t i = 0; i < n; i++)
		{
			sales[i] = ar[i];
			sum += ar[i];
			if (ar[i] < min)
				min = ar[i];
			if (ar[i] > max)
				max = ar[i];
		}
		average = sum / 4;
	}
}


Sales::Sales()
{
	using namespace std;
	size_t n;
	cout << "Napis pocet stvrtrokov (max 4): ";
	cin >> n;
	if (n > 4)
		n = 4;
	for (size_t i = 0; i < n; i++)
	{
		cout << "Napis predaje za " << i + 1 << ". stvrtrok: ";
		cin >> sales[i];
	}
	*this = Sales(sales, n);
}

void Sales::showSales() const
{
	using namespace std;
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "Predaje za " << i + 1 << ". stvrtrok: " << sales[i] << endl;
	}
	cout << "\nPriemerne predaje boli: " << average << " EUR / stvrtrok\n";
	cout << "Minimalne predaje boli: " << min << " EUR\n";
	cout << "Maximalne predaje boli: " << max << " EUR\n";
	cout << endl;
}