// vect.cpp -- metody tøídy Vector
#include <cmath>
#include "vector.h" 		// pøidej <iostream>
#include <iostream>

using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{

	const double Rad_to_deg = 57.2957795130823;

	// soukromé metody
	// vypoèti velikost z x a y
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	// nastav x z polární souøadnice
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	// nastav y z polární souøadnice
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	// veøejné metody
	Vector::Vector() 	// implicitní konstruktor
	{
		x = y = mag = ang = 0.0;
		mode = 'r';
	}

	// vytvoø vektor z pravoúhlých souøadnic, je-li tvar r
	// (implicitnì) nebo z polárních souøadnic, je-li tvar p
	Vector::Vector(double n1, double n2, char form) 
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "nesprávný 3. argument ve Vector() -- ";
			cout << "vector nastaven na 0\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}
	// nastav vektor z pravoúhlých souøadnic, je-li forma r
	// (implicitní), jinak z polárních souøadnic, je-li forma p
	void Vector:: set(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "nesprávný 3. argument ve Vector() -- ";
			cout << "vektor nastaven na 0\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector() 			// destruktor
	{
	}

	void Vector::polar_mode() // nastav polární režim
	{
		mode = 'p';
	}

	void Vector::rect_mode() // nastav pravoúhlý režim
	{
		mode = 'r';
	}

	// pøetížení operátorù
	// pøidej dva operátory Vector
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// odeèti Vector b od a
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	
	// obra znaménko Vector
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	// vynásob Vector krát n
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// pøátelské metody
	// vynásob n krát Vector a
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// je-li režim r, vypiš pravoúhlé souøadnice,
	// jinak vypiš polární souøadnice (režim p)
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == 'r')
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == 'p')
		{
			os << "(m,a) = (" << v.mag << ", "
				<< v.ang * Rad_to_deg << ")";
		}
		else
			os << "neplatný režim objektu Vector";
		return os;
	}

} 		// konec jmenného prostoru VECTOR
