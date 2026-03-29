// 7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct box
{
	char brand[40];
	float height;
	float width;
	float length;
	float volume;
};

void Print(box a);
void ComputeVolume(box* a);

int main()
{
	box MyBox{"Irisbus Crossway 10.6m",3.455,2.55,10.655,0};
	ComputeVolume(&MyBox);
	Print(MyBox);
}


void Print(box a)
{
	std::cout << "Znacka skatule je: " << a.brand << std::endl;
	std::cout << "Vyska skatule je: " << a.height << std::endl;
	std::cout << "Sirka skatule je: " << a.width << std::endl;
	std::cout << "Dlzka skatule je: " << a.length << std::endl;
	std::cout << "Objem skatule je: " << a.volume << std::endl;
}

void ComputeVolume(box* a)
{
	a->volume = a->height * a->length * a->width;
}