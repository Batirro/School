#include <bits/stdc++.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
int max_znak(int Licznik[]);
void wyswietl(int Licznik[]);

int main()
{
    int Licznik[26] = {0};
    string tekst = " ";
    ifstream inputfile ("C:\\Users\\bartek\\Desktop\\jawny.txt");
    while (!inputfile.eof())
    {
        inputfile >> tekst;
        zlicz(Licznik, tekst);
    }
    wyswietl(Licznik);
    cout << "Plik zostal zapisany" << endl;
    inputfile.close();
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

int max_znak(int Licznik[])
{
    int max_z = 0, temp;
    for (int i = 0; i < 26; i++)
    {
        if (Licznik[i] > Licznik[max_z])
        {
            max_z = i;
        }
    }

    temp = Licznik[max_z];
    return temp;
}

void wyswietl(int Licznik[])
{
    ofstream outputfile("C:\\Users\\bartek\\Desktop\\wynik.txt");
    int pom = max_znak(Licznik), i1;
    for (int i = 0; i < 26; i++)
    {
        if (Licznik[i] >= 0)
        {
            outputfile << char(i + 'A') << " - " << Licznik[i] << endl;
        }
        if (Licznik[i] == pom)
        {
            i1 = i;
        }
    }
    outputfile << "Najwiecej razy wystapila litera " << char(i1 + 'A') << " stalo sie to az " << pom << " razy" << endl;
    outputfile.close();
}