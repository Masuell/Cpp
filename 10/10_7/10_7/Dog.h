#pragma once


class Dog
{
private:
	static const unsigned int NAME_LENGTH = 20;
	char Name[NAME_LENGTH] = "Punta";
	int IS; //satisfaction index

public:
	Dog(const char* aName = "Punta");
	void Change_IS(int aIS);
	void printDog() const;
};