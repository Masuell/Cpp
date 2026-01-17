// 3_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int Min2Sec = 60;
    const int Hours2Min = 60;
    const int Days2Hours = 24;

    long lSeconds = 0;
    long lMinutes = 0;
    long lHours = 0;
    int iSeconds = 0;
    int iMinutes = 0;
    int iHours = 0;
    int iDays = 0;

    std::cout << "Zadaj pocet sekund: ";
    std::cin >> lSeconds;
    iSeconds = lSeconds % Min2Sec;
    lSeconds -= iSeconds;
    lMinutes = lSeconds / Min2Sec;
    iMinutes = lMinutes % Hours2Min;
    lMinutes -= iMinutes;

    lHours = lMinutes / Hours2Min;
    iHours = lHours % Days2Hours;
    lHours -= iHours;

    lHours = lMinutes / Hours2Min;
    iHours = lHours % Days2Hours;
    lHours -= iHours;


    iDays = lHours/ Days2Hours;

    std::cout << lSeconds + iSeconds << " sekund je " << iDays << " dni, " <<
        iHours << " hodin, " << iMinutes << " minut a " << iSeconds << " sekund.\n";

}

