// 7_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fact(int x);

int main()
{
    int Number = 0;
    std::cout << "Napis cislo, ja ti napisem jeho faktorial: ";
    std::cin >> Number;
    std::cout << "Faktorial cisla " << Number << " je: " << fact(Number) << std::endl;
}

int fact(int x)
{
    if (x <= 1)
        return 1;
    else
        return x*fact(x - 1);
}
