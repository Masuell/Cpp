//golf.h
#pragma once


class golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

public:
	//neinteraktivna verzia
	//funkcia nastavuje objekt golf na poskytnute meno a handicap
	//pouzitim hodnot predanych ako parametry funkcii
	golf(const char* name, int hc);

	//interaktivna verzia
	//funkcia si od uzivatela vyziada meno a handicap
	//a nastavuje objekt na zadane hodnoty
	golf();

	//funkcia nastavuje handicap na novu hodnotu
	void setHandicap(int hc);

	//funkcia zobrazuje obsah struktury golf
	void showgolf() const;


};