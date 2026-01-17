// 5_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;

    std::cout << "Napis prve, mensie, cislo: ";
    std::cin >> a;
    std::cout << "Napis druhe, vacsie, cislo: ";
    std::cin >> b;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    std::cout << "Sucet vsetkych celych cisel medzi zadanymi cislami (vratane) je: " << sum << ".\n";
}


