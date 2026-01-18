// 6_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>


int main()
{
    char c = '\0';
    int Signs = 0;
    std::ifstream File("C:\\Moje dokumenty\\Cpp\\Mistrovstvi cpp\\6\\6_8\\Pokus.txt");

    if (!File)
    {
        std::cout << "Subor sa nepodarilo otvorit.\n";
        return 1;
    }

    while (File.get(c))
    {
        Signs++;
    }
    std::cout << "Pocet znakov v subore je: " << Signs << std::endl;
}


