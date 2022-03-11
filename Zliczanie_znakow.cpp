#include <bits/stdc++.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
void max_znak(int Licznik[]);
void wyswietl(int Licznik[]);

int main()
{
    int Licznik[26] = {0};
    string tekst = " ";
    ifstream inputfile;
    ofstream outputfile;
    inputfile.open("C:\\Users\\bartek\\Desktop\\jawny.txt", ios::in);
    outputfile.open("C:\\Users\\bartek\\Desktop\\wynik.txt", ios::out);
    while (!inputfile.eof())
    {
        inputfile >> tekst;
        zlicz(Licznik, tekst);
    }
    wyswietl(Licznik);
    max_znak(Licznik);
    cout << "Plik zostal zapisany" << endl;
    inputfile.close();
    outputfile.close();
    return 0;
}

void zlicz(int Licznik[], string tekst)
{
    char znak;
    for (int i = 0; i < tekst.size(); i++)
    {
        znak = toupper(tekst[i]);
        if (znak >= 'A' && znak <= 'Z')
        {
            Licznik[znak - 'A']++;
        }
    }
}

void max_znak(int Licznik[])
{
    int max_z = 0, temp;
    ofstream outputfile("C:\\Users\\bartek\\Desktop\\wynik.txt");
    for (int i = 0; i < 26; i++)
    {
        if (Licznik[i] > Licznik[max_z])
        {
            max_z = i;
        }
    }

    temp = Licznik[max_z];
    for (int i = 0; i < 26; i++)
    {
        if (Licznik[i] == temp)
        {
            outputfile << "Najwiecej razy wystapila litera " << char(i + 'A') << " stalo sie to az " << temp << " razy" << endl;
        }
    }
    outputfile.close();
}

void wyswietl(int Licznik[])
{
    ofstream outputfile("C:\\Users\\bartek\\Desktop\\wynik.txt");
    for (int i = 0; i < 26; i++)
    {
        if (Licznik[i] >= 0)
        {
            outputfile << char(i + 'A') << " - " << Licznik[i] << endl;
        }
    }
    outputfile.close();
}