// randwalk.cpp -- použití tøídy Vector
// kompilovat spoleènì se souborem vect.cpp
#include <iostream>
#include <cstdlib> 	// prototypy funkcí rand(), srand()
#include <ctime> 		// prototyp funkce time()
#include "vector.h"
#include <fstream>

int main()
{
	std::ofstream File("Steps.txt");
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); 		// nastavení generátoru náhodných èísel
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Zadej cilovou vzdalenost (q pro ukonceni): ";
	while (cin >> target)
	{
		cout << "Zadej delku kroku: ";
		if (!(cin >> dstep))
			break;
		File << "Cielova vzdialenost: " << target << ", dlzka kroku: " << dstep << std::endl;
		File << steps << result << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			File << steps<<": " << result << endl;
			steps++;
		}
		File << "Subjekt ma po " << steps << " krokoch toto umiestnenie: ";
		File << result << endl << "respektive\n";
		result.polar_mode();
		File << result << std::endl;
		File << "Priemerna vzdialenost na jeden krok = "
			<< result.magval() / steps << endl;

		result.rect_mode();
		cout << "Po " << steps << " krocich ma subjekt "
			"tuto pozici:\n";
		cout << result << endl;
		result.polar_mode();
		cout << "nebo\n" << result << endl;
		cout << "Prumerna vzdalenost na jeden krok = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Zadejte cilovou vzdalenost (q pro ukonceni): ";
	}
	cout << "Nashledanou!\n";
	File.close();
	return 0;
}
