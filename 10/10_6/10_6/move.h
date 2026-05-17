#pragma once

class Move
{
private:
	double x=0;
	double y=0;
public:
	//nastavi x, y na a,b
	Move(double a = 0, double b = 0);

	//zobrazi aktualne hodnoty x a y
	void showmove() const;

	//funkcia prida premennu x objektu m do premennej x volajuceho objektu a 
	//ziska novu premennu x, prida premennu y objektu m do premennej y
	//volajuceho objektu a ziska novu premennu y,
	//vytvori novy objekt move
	Move add(const Move& m) const;

	//inicializacia na nove hodnoty x a y
	Move reset(double a = 0, double b = 0);
};