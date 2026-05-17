//move.cpp

#include "move.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using namespace std;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

Move Move::add(const Move& m) const
{
	return Move(this->x + m.x, this->y + m.y);
}

Move Move::reset(double a, double b)
{
	x = a;
	y = b;
	return *this;
}