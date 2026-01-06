// 2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void PrintTime(int aHours, int aMinutes);


using namespace std;

int main()
{
    int Hours = 0;
    int Minutes = 0;

    cout << "Zadaj pocet hodin: ";
    cin >> Hours;
    cout << "Zadaj pocet minut: ";
    cin >> Minutes;
    PrintTime(Hours, Minutes);
}

void PrintTime(int aHours, int aMinutes)
{
    cout << aHours << ":" << aMinutes;
}
