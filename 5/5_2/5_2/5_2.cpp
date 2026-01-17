// 5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = -1;
    int sum = 0;
    while (a != 0)
    {
        std::cin >> a;
        sum += a;
        std::cout << "Doterajsi sucet je: " << sum << std::endl;
    }
}

