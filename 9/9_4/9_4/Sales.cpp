#include "Sales.h"
#include <iostream>

using namespace SALES;
void SALES::setSales(SALES::Sales& s, const double ar[], size_t n)
{
	if (n > 4)
		n = 4;
	if (n > 0)
	{
		double sum = 0;
		double min = ar[0];
		double max = ar[0];
		for (size_t i = 0; i < n; i++)
		{
			s.sales[i] = 0;
		}
		for (size_t i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			sum += ar[i];
			if (ar[i] < min)
				min = ar[i];
			if (ar[i] > max)
				max = ar[i];
		}
		s.average = sum / n;
		s.min = min;
		s.max = max;
	}

}

void SALES::setSales(SALES::Sales& s)
{
	using namespace std;
	size_t n;
	double ar[4];
	cout << "Napis pocet stvrtrokov (max 4): ";
	cin >> n;
	if (n > 4)
		n = 4;
	for (size_t i = 0; i < n; i++)
	{
		cout << "Napis predaje za " << i + 1 << ". stvrtrok: ";
		cin >> ar[i];
	}
	setSales(s, ar, n);
}

void SALES::showSales(const SALES::Sales& s)
{
	using namespace std;
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "Predaje za " << i + 1 << ". stvrtrok: " << s.sales[i]<<endl;
	}
	cout << "\nPriemrne predaje su: " << s.average << " EUR / stvrtrok\n";
	cout << "Minimalne predaje boli: " << s.min << " EUR\n";
	cout << "Maximalne predaje su: " << s.max << " EUR\n";
	cout << endl;
}