// vector.h -- Tøída Vector s operátorem << a režimem stavu (mode)
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	private:
		double x; 		// horizontální hodnota
		double y; 		// vertikální hodnota
		//double mag; 	// délka vektoru
		//double ang; 	// smìr vektoru
		char mode; 		// 'r' = pravoúhlý, 'p' = polární 
	// soukromé metody pro nastavení hodnot
		void set_x();
		void set_y();
	public:
		double magval() const;
		double angval() const;
		Vector();
		Vector(double n1, double n2, char form = 'r');
		void set(double n1, double n2, char form = 'r');
		~Vector();
		double xval() const {return x;} 			// vrací hodnotu x
		double yval() const {return y;} 			// vrací hodnotu y		
		//double magval() const {return mag;} 	// vrací velikost
		//double angval() const {return ang;} 	// vrací úhel
		void polar_mode(); 								// nastaví režim na 'p'
		void rect_mode(); 									// nastaví režim na 'r'
	// funkce pro pøetížení operátorù
		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
	// spøátelené funkce
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, Vector & v);
	};

	} // konec jmenného prostoru VECTOR
#endif
