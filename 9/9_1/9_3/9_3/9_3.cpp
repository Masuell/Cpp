// 9_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <new>
#include <cstring>

const int BUF = 512;
char buffer1[BUF];
const int Struct_Numebr = 2;

struct chaff
{
    char dross[20];
    int slag;
};


int main()
{
    using namespace std;
    char* buffer2 = new char[BUF];
    chaff* chaffs1 = new (buffer1) chaff[Struct_Numebr];
    chaff *chaffs2 = new (buffer2) chaff[Struct_Numebr];

    strcpy_s(chaffs1[0].dross, "Jablcko");
    chaffs1[0].slag = 147;
    strcpy_s(chaffs1[1].dross, "Hrusticka");
    chaffs1[1].slag = 923;

    strcpy_s(chaffs2[0].dross, "Hrozienko");
    chaffs2[0].slag = 412;
    strcpy_s(chaffs2[1].dross, "Jahodka");
    chaffs2[1].slag = 141;



    for (int i = 0; i < Struct_Numebr; i++)
    {
        cout << "dross: " << chaffs1[i].dross << endl;
        cout << "slag: " << chaffs1[i].slag << endl;
        cout << "dross: " << chaffs2[i].dross << endl;
        cout << "slag: " << chaffs2[i].slag << endl;
    }

    delete[] chaffs2;
    return 0;
}


