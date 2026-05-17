//golf.cpp
#include "golf.h"
#include <string.h>
#include <iostream>


golf::golf(const char* name, int hc)
{
	this->handicap = hc;
	strcpy_s(fullname, Len-1, name);
}


golf::golf()
{
	std::cout << "Napis meno hraca: ";
	std::cin.getline(this->fullname, Len);
	std::cout << "Napis hendikep hraca: ";
	std::cin >> this->handicap;

}

//funkcia nastavuje handicap na novu hodnotu
void golf::setHandicap(int hc)
{
	this->handicap = hc;
}

//funkcia zobrazuje obsah struktury golf
void golf::showgolf() const
{
	std::cout << "Meno: " << this->fullname << "; Hendikep: " << this->handicap << std::endl;
}