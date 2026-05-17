// 10_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "golf.h"

int main()
{
    golf MyGolf1("Masuel", 147);
    MyGolf1.showgolf();
    golf MyGolf2;
    MyGolf2.showgolf();
    MyGolf2.setHandicap(412);
    MyGolf2.showgolf();

}


