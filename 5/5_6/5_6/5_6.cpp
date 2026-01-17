// 5_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


const size_t BrandNameSize = 15;
struct Car
{
    char Brand[BrandNameSize]="\0";//option char[]
    //std::string Brand;//option string
    int Year = 0;
};

int main()
{
    int NumberOfCars = 0;
    int a = 0;
    int* ptra = &a;
    std::cout << "Kolko aut sa vlozi do katalogu?: ";
    std::cin >> NumberOfCars;
    std::cin.ignore();//get rid of '\n' from buffer
    Car* Cars = new Car[NumberOfCars];

    for (int i = 0; i < NumberOfCars; i++)
    {
        std::cout << "Auto c. " << i + 1 << std::endl;
        std::cout << "Zadaj, prosim, znacku auta: ";
        std::cin.getline(Cars[i].Brand, BrandNameSize - 1);
        //getline(std::cin, Cars[i].Brand);//option string
        std::cout << "Zadaj, prosim, rok vyroby auta: ";
        std::cin >> Cars[i].Year;
        std::cin.ignore();//get rid of '\n' from buffer
    }
    std::cout << "Tvoja zbierka pozostava z:\n";
    for (int i = 0; i < NumberOfCars; i++)
    {
        std::cout << Cars[i].Year << " " << Cars[i].Brand << std::endl;
    }
    delete[] Cars;
}

