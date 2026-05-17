// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales.h"

int main()
{
    using namespace SALES;
    Sales FirmA;
    double Array[4] = { 923, 147, 412, 141 };
    Sales FirmB(Array,4);

    FirmA.showSales();
    FirmB.showSales();
}


