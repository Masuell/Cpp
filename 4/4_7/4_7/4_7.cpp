// 4_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    struct Pizza
    {
        std::string Name;
        float Diameter;
        float Weight;
    };

    Pizza Delicatesa;
    std::cout << "Zadaj nazov pizze: ";
    getline(std::cin, Delicatesa.Name);
    std::cout << "Zadaj priemer pizze: ";
    std::cin >> Delicatesa.Diameter;
    std::cout << "Zadaj vahu pizze: ";
    std::cin >> Delicatesa.Weight;

    std::cout << "Nazov pizze je " << Delicatesa.Name << ", priemer pizzr je " << Delicatesa.Diameter << " cm a jej vaha je " << Delicatesa.Weight << " gramov.\n";
}
