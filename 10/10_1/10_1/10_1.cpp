// 10_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string Name;
    string Number;
    double Balance;
public:
    BankAccount(string aName = "", string aNumber = "0000 0000", double aBalance = 0)
    {
        Name = aName;
        Number = aNumber;
        Balance = aBalance;
    }
    void PrintName()
    {
        cout << "Meno vlastnika uctu je: " << Name << endl;
    }
    void PrintAccountNumber()
    {
        cout << "Cislo uctu je: " << Number << endl;
    }
    void PrintBalance()
    {
        cout << "Zostatok na ucte je: " << Balance << endl;
    }
    void Withdraw(double Wth)//vybrat peniaze
    {
        Balance -= Wth;
    }
    void Deposit(double Dps)//pridat peniaze
    {
        Balance += Dps;
    }

};


int main()
{
    BankAccount MyAccount1("Masuel", "7193.135", 25000);
    BankAccount MyAccount2;
    MyAccount1.PrintName();
    MyAccount1.PrintAccountNumber();
    MyAccount1.PrintBalance();
    MyAccount1.Withdraw(383.110);
    MyAccount1.PrintBalance();
    MyAccount1.Deposit(350.006);
    MyAccount1.PrintBalance();
}


