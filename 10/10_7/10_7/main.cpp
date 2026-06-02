// 10_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"

int main()
{
    Dog Lapaj("Lapaj");
    Lapaj.printDog();
    Lapaj.Change_IS(75);
    Lapaj.printDog();
    
    Dog Punta;
    Punta.printDog();
}
