//Sales.h
#pragma once


namespace SALES
{
	class Sales
	{
	private:
		const static int QUARTERS = 4;
		double sales[QUARTERS] = { 0,0,0,0 };
		double average = 0;
		double max = 0;
		double min = 0;

	public:
		//skopiruje 4 alebo n (podla toho, ktore cislo je mensie)
		//poloziek z pola ar do pola sales objektu triedy Sales
		// a spocita a ulozi hodnoty average, maximum a minimum
		//zvysne prvky pola sales (ak budu) nastavi na 0 
		Sales(const double ar[], size_t n);

		//ziska informacie o predajoch za stvrtrok interaktivne
		//ulozi ich do clena sales objektu triedy Sales a spocita a ulozi hodnoty
		//average, maximum a minimum
		Sales();

		//zobrazi vsetky informacie objektu triedy Sales
		void showSales() const;
	};
}