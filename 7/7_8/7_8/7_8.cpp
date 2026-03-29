// 7_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Zadaj velkost triedy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		std::cout << "\n";
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Hotovo\n";
	return 0;
}


int getinfo(student pa[], int n)
{
	int i = 0;
	while (i < n)
	{
		std::cout << "Zadaj meno " << i + 1 << " studenta: ";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == '\0')
		{
			break;
		}
		std::cout << "Zadaj jeho hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		std::cout << "Zadaj jeho uroven programatorskych schopnosti: ";
		std::cin >> pa[i].ooplevel;
		std::cout << "\n";
		while (cin.get() != '\n')
			continue;
		i++;
	}
	return i;
}

void display1(student st)
{
	std::cout << "Meno studenta: " << st.fullname << std::endl;
	std::cout << "Hobby studenta: " << st.hobby << std::endl;
	std::cout << "Programatorska uroven studenta: " << st.ooplevel << std::endl;
	return;
}

void display2(const student* ps)
{
	std::cout << "Meno studenta: " << ps->fullname << std::endl;
	std::cout << "Hobby studenta: " << ps->hobby << std::endl;
	std::cout << "Programatorska uroven studenta: " << ps->ooplevel << std::endl;
	return;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Meno studenta: " << pa[i].fullname << std::endl;
		std::cout << "Hobby studenta: " << pa[i].hobby << std::endl;
		std::cout << "Programatorska uroven studenta: " << pa[i].ooplevel << std::endl;
	}
	return;
}