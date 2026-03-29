// 7_7_inak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double* Fill_arr(double* start, double* end);
void Show_array(double* start, double* end);
void Reverse_array(double* start, double* end);

int main()
{
	size_t sz = 0;
	std::cout << "Napis velkost pola: ";
	std::cin >> sz;
	double* Array = new double[sz];
	double* end = &Array[sz];
	end = Fill_arr(Array, end);
	std::cout << std::endl;
	Show_array(Array, end);
	std::cout << std::endl;

	Reverse_array(Array + 1, end - 1);
	Show_array(Array, end);
	std::cout << std::endl;
	delete[] Array;
}

double* Fill_arr(double* start, double* end)
{
	size_t i = 0;
	while (start != end)
	{
		std::cout << "Zadaj " << ++i << "-tu hodnotu alebo neciselnu pre ukoncenie: ";
		if (std::cin >> *(start))
			start++;
		else
		{
			break;
		}
	}
	return (start);
}

void Show_array(double* start, double* end)
{
	while ((start) != end)
	{
		std::cout << *(start) << ", ";
		start++;
	}
	std::cout << std::endl;

	return;
}

void Reverse_array(double* start, double* end)
{
	double tmp = 0;
	end--;
	while (start <= end)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
	return;
}

