// 7_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

double add(double A, double B);
double sub(double A, double B);
double mul(double A, double B);
double divide(double A, double B);
double exponent(double A, double B);

double calculate(double A, double B, double (*func)(double, double));

const unsigned int FunctionsNumber = 5;

int main()
{
	double (*pf[FunctionsNumber])(double, double) = { add,sub,mul,divide,exponent };
	std::string OperationsStr[FunctionsNumber] = { "Scitanie: " , "Odcitanie: " , "Nasobenie: ", "Delenie: ", "Exponenciala: " };

	bool Want2Continue = true;
	char Answer;
	while (Want2Continue)
	{
		double Number1 = 0;
		double Number2 = 0;
		std::cout << "Zadaj prve cislo: ";
		std::cin >> Number1;
		std::cout << "Zadaj druhe cislo: ";
		std::cin >> Number2;
		for (int i = 0; i < FunctionsNumber; i++)
		{
			std::cout << OperationsStr[i] << calculate(Number1, Number2, pf[i]) << std::endl;
		}
		//std::cout << "Scitanie: " << calculate(Number1, Number2, add) << std::endl;
		//std::cout << "Odcitanie: " << calculate(Number1, Number2, sub) << std::endl;
		//std::cout << "Nasobenie: " << calculate(Number1, Number2, mul) << std::endl;
		//std::cout << "Delenie: " << calculate(Number1, Number2, div) << std::endl;
		//std::cout << "Exponenciala: " << calculate(Number1, Number2, exponent) << std::endl;
		std::cout << "Chces pokracovat? (y/n): ";
		std::cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			Want2Continue = true;
		}
		if (Answer == 'n' || Answer == 'N')
		{
			Want2Continue = false;
		}
	}
}

double calculate(double A, double B, double (*func)(double, double))
{
	return func(A, B);
}

double add(double A, double B)
{
	return A + B;
}

double sub(double A, double B)
{
	return A - B;
}

double mul(double A, double B)
{
	return A * B;
}

double divide(double A, double B)
{
	return A / B;
}

double exponent(double A, double B)
{
	return pow(A, B);
}