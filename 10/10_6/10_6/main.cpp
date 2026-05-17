// 10_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "move.h"

int main()
{
    Move Move1(1, 1);
    Move1.showmove();
    Move Move2(141, 147);
    Move2.showmove();
    Move1 = Move1.add(Move2);
    Move1.showmove();
    Move2 = Move1.reset(923, 412);
    Move1.showmove();
    Move2.showmove();
}


