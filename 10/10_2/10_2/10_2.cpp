// 10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lName;
    char fName[LIMIT];
public:
    Person()
    {
        lName = "";
        fName[0] = '\0';
    }
    Person(const string& ln, const char* fn = "Heyyoy")
    {
        lName = ln;
        strcpy_s(fName, fn);
    }
    void Show() const //Meno Priezvisko
    {
        cout << fName << " " << lName;
    }
    void FormalShow() const//Priezvisko, Meno
    {
        cout << lName << ", " << fName;
    }

};


int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;

    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;

    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;
}

