#include "golf.h"
#include <string.h>
#include <iostream>


void setgolf(golf& g, const char* name, int hc)
{
	g.handicap = hc;
	strcpy_s(g.fullname, name);
}


int setgolf(golf& g)
{
	std::cout << "Napis meno hraca: ";
	std::cin >> g.fullname;
	std::cout << "Napis hendikep hraca: ";
	std::cin >> g.handicap;
	if (g.fullname[0] == '\0')
		return 0;
	else
		return 1;
}

//funkcia nastavuje handicap na novu hodnotu
void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

//funkcia zobrazuje obsah struktury golf
void showgolf(const golf& g)
{
	std::cout << "Meno: " << g.fullname << "; Hendikep: " << g.handicap << std::endl;
}