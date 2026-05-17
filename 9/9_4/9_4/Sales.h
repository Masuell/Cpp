#pragma once

namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS] = {0,0,0,0};
		double average;
		double max;
		double min;
	};

	//skopiruje 4 alebo n (podla toho, ktore cislo je mensie)
	//poloziek z pola ar do clena sales struktury s
	// a spocit a ulozi hodnoty average, maximum a minimum
	//zvysne prvky pola sales (ak budu) nastavi na 0 
	void setSales(Sales& s, const double ar[], size_t n);

	//ziska informacie o predajoch za stvrtrok interaktivne
	//ulozi ich do clena sales struktury s a spocita a ulozi hodnoty
	//average, maximum a minimum
	void setSales(Sales& s);

	//zobrazi vsetky informacie struktury s
	void showSales(const Sales& s);
}