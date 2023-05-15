// MojPrviVSProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    fstream datoteka;
    int n;
    cin >> n;
    string* polje = new string[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
        getline(cin, polje[i]);
    sort(polje, polje + n);
    datoteka.open("imenik.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
        datoteka << polje[i] << endl;
    datoteka.close();

    datoteka.open("imenik.txt", ios::in);
    for (int i = 0; i < n; i++)
        datoteka << polje[i] << endl;
    datoteka.close();
    return 0;
}


