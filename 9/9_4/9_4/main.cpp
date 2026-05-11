// 9_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales.h"

int main()
{
    using namespace SALES;
    Sales FirmA;
    Sales FirmB;
    double Array[4] = {923, 147, 412, 141};
    setSales(FirmA);
    setSales(FirmB,Array,4);
    showSales(FirmA);
    showSales(FirmB);

}

