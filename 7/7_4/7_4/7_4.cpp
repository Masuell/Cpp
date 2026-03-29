// 7_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

long double probability(unsigned numbers, unsigned picks);


int main()
{
	using namespace std;
	double total, choices, prob;
	cout << "Zadajte pocet cisel z pola a pocet moznych volieb:\n";//47 a 5
	cin >> total >> choices;
	prob = probability(total, choices);
	cout << "Dalej zadajte pocet cisel z z druheho rozsahu. Tu sa z daneho poctu cisel vybera iba 1:\n";//47 a 5
	cin >> total;
	cout << "Mate pravdepodobnost jedna ku "<< prob*probability(total, 1) << ", ze vyhrate.\n";
	return 0;
}


long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // zde je nìkolik lokálních promìnných
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)//pocita pocet moznosti, ktore mozu nastat - pre 2 vybery z 5 moze nastat 5x4/1x2
		result = result * n / p;
	return result;
}