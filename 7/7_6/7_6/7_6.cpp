// 7_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

size_t Fill_arr(double Array[], size_t sz);
void Show_array(double Array[], size_t sz);
void Reverse_array(double Array[], size_t sz);

int main()
{
    size_t sz = 0;
    std::cout << "Napis velkost pola: ";
    std::cin >> sz;
    double* Array = new double[sz];
    sz=Fill_arr(Array, sz);
    Show_array(Array, sz);
    std::cout << std::endl;

    //vyberam cast pola (Obracat nechcem prvy a posledny prvok)
    double* New_Array = new double[sz-2];
    for (size_t i = 1; i < sz-1; i++)
    {
        New_Array[i-1] = Array[i];
    }
    Reverse_array(New_Array, sz-2);
    //Show_array(New_Array, sz-2);
    std::cout << std::endl;
    for (size_t i = 1; i < sz - 1; i++)
    {
        Array[i] = New_Array[i-1];
    }

    Show_array(Array, sz);
    std::cout << std::endl;
    delete[] New_Array;
    delete[] Array;
}

size_t Fill_arr(double Array[], size_t sz)
{
    size_t i = 0;
    for (; i < sz; i++)
    {
        std::cout << "Zadaj " << i+1 << "-tu hodnotu alebo neciselnu pre ukoncenie: ";
        if (std::cin >> Array[i]);
        else
            break;
    }
    return i;
}

void Show_array(double Array[], size_t sz)
{
    for (size_t i=0; i < sz; i++)
    {
        std::cout << Array[i] << ", ";
    }
    return;
}

void Reverse_array(double Array[], size_t sz)
{
    double* New_Array = new double[sz];
    for (size_t i=0; i < sz; i++)
    {
        New_Array[i] = Array[i];
    }
    for (size_t i=0; i < sz; i++)
    {
        Array[sz-i-1] = New_Array[i];
    }
    delete[] New_Array;
    return;
}
