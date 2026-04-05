// 8_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

template <typename T>
T maxn(const T* array, size_t N)
{
	T Max = array[0];
	for (size_t i = 0; i < N; i++)
	{
		if (array[i] > Max)
			Max = array[i];
	}
	return Max;
}

const char* maxn(const char** array, size_t N)
{
	size_t Max = strlen(array[0]);
	size_t Max_Index = 0;
	//Ak existuje viac rovnako dlhych retazcov, vraciam prvy najdeny
	for (size_t i = 0; i < N; i++)
	{
		if (strlen(array[i]) > Max)
		{
			Max = strlen(array[i]);
			Max_Index = i;
		}

	}
	return array[Max_Index];
}


int main()
{
	int IntArray[6] = { 0,1,2,3,4,5 };
	double DoubleArray[4] = { 5.6,3.8,9.14,1.47 };
	std::cout << "Z pola integerov: " << maxn(IntArray, 6) << std::endl;
	std::cout << "Z pola doublov: " << maxn(DoubleArray, 4) << std::endl;
	const char* CharArray[] = { "Jeden", "Dva","Tri","Styri", "Pat" }; //poziadavka zadania pouzit char* a nie string
	std::cout << "Najdlhsi retazec: " << maxn(CharArray, 5);
}