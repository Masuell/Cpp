// 7_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double* Fill_arr(double Array[], double* end);
void Show_array(double Array[], double* end);
void Reverse_array(double Array[], double* end);

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

	Reverse_array(Array+1, end-1);
	Show_array(Array, end);
	std::cout << std::endl;
	delete[] Array;
}

double* Fill_arr(double Array[], double* end)//double Array[] je zaroven pointer na zaciatok pola
{
	size_t i = 0;
	while (&Array[i] != end)
	{
		std::cout << "Zadaj " << i + 1 << "-tu hodnotu alebo neciselnu pre ukoncenie: ";
		if (std::cin >> Array[i])
			i++;
		else
		{
			//i += 1;
			break;
		}
	}
	return &Array[i];
}

void Show_array(double Array[], double* end)
{
	size_t i = 0;
	while (&Array[i] != end)
	{
		std::cout << Array[i] << ", ";
		i += 1;
	}
	std::cout << std::endl;

	return;
}

void Reverse_array(double Array[], double* end)
{
	double tmp = 0;
	size_t i = 0;
	double* Function_end = end-1;
	while (&Array[i] <= Function_end)
	{
		tmp = *Function_end;
		*Function_end = Array[i];
		Array[i] = tmp;
		i++;
		Function_end--;
	}
	return;
}
