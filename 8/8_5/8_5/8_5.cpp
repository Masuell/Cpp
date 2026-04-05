// 8_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T> T max5(const T array[5])
{
	T Max = array[0];
	for (size_t i = 0; i < 5; i++)
	{
		if (array[i] > Max)
			Max = array[i];
	}
	return Max;
}


int main()
{
	int IntArray[5] = {0,1,2,3,4};
	double DoubleArray[5] = {2.4,5.6,3.8,9.14,1.47};
	std::cout << "Z pola integerov: " << max5(IntArray) << std::endl;
	std::cout << "Z pola doublov: "<<max5(DoubleArray)<<std::endl;
}

