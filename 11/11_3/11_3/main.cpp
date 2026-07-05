// 11_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// randwalk.cpp -- použití tøídy Vector
// kompilovat spoleènì se souborem vect.cpp
#include <iostream>
#include <cstdlib> 	// prototypy funkcí rand(), srand()
#include <ctime> 		// prototyp funkce time()
#include "vector.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); 		// nastavení generátoru náhodných èísel
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	size_t attempts = 0;
	unsigned long min_steps = 0;
	unsigned long max_steps = 0;
	double total_steps;
	cout << " Zadej cilovou vzdalenost (q pre ukoncenie): ";
	while (cin >> target)
	{
		total_steps = 0;
		cout << " Zadej delku kroku: ";
		if (!(cin >> dstep))
			break;
		cout << " Zadaj pocet pokusov N: ";
		if (!(cin >> attempts))
			break;

		for (size_t i = 0; i < attempts; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.set(dstep, direction, 'p');
				result = result + step;
				steps++;
			}
			if (i == 0)
			{
				min_steps = steps;
				max_steps = steps;
			}
			else
			{
				if (steps < min_steps)
					min_steps = steps;
				if (steps > max_steps)
					max_steps = steps;
			}
			total_steps += steps;
			cout << "Po " << steps << " krocich ma subjekt "
				" tuto pozici:\n";
			cout << result << endl;
			result.polar_mode();
			cout << " nebo\n" << result << endl;
			cout << " Prumerna vzdalenost na jeden krok = "
				<< result.magval() / steps << endl;
			steps = 0;
			result.set(0.0, 0.0);
		}
		cout << " Po " << attempts << " pokusoch na dosiahnutie ciela bolo potreba minimalne " << min_steps << ", maximalne " << max_steps << " a priemerne " << total_steps / attempts << " krokov.\n";

		cout << " Zadejte cilovou vzdalenost (q pro ukonceni): ";
	}
	cout << " Nashledanou!\n";

	return 0;
}


