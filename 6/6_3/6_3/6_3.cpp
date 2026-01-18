// 6_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char c = '\0';
    std::cout << "Vyber jednu z nasledujucich moznosti:\n";
    std::cout << "m) masozravec \t\t k) klavirista\n";
    std::cout << "s) strom \t\t h) hra\n";
    std::cin.get(c);
    while (c != 'm' && c != 'k' && c != 's' && c != 'h')
    {
        while(std::cin.get()!='\n');
        std::cout << "Prosim, zadaj m,k,s alebo h: ";
        std::cin.get(c);
    }
    if (c == 'm')
        std::cout << "Lev je asi masozravec";
    if (c == 'k')
        std::cout << "Beethoven bol klavirista";
    if (c == 's')
        std::cout << "Vylez nan";
    if (c == 'h')
        std::cout << "Clovece nehnevaj sa!";
}

