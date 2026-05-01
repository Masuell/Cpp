//golf.h

#ifndef GOLF_H
#define GOLF_H

const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};

//neinteraktivna verzia
//funkcia nastavuje strukturu golf na poskytnute meno a handicap
//pouzitim hodnot predanych ako parametry funkcii
void setgolf(golf& g, const char* name, int hc);

//interaktivna verzia
//funkcia si od uzivatela vyziada meno a handicap
//a nastavuje cleny g na zadane hodnoty
// vracia 1 / bolo zadane meno, 0 - meno je prazdny retazec
int setgolf(golf& g);

//funkcia nastavuje handicap na novu hodnotu
void handicap(golf& g, int hc);

//funkcia zobrazuje obsah struktury golf
void showgolf(const golf& g);


#endif
