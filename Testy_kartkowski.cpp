#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[]);
void dodawanie_tab(int T[]);
void wyswietl(int liczba);
bool szukanie_bin(int T[], int liczba);

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    wyswietl(liczba);
    return 0;
}

void tworzenie_tab(int T[])
{
    ofstream tablica("C:\\Users\\bartek\\Desktop\\tablica.txt");
    for (int i = 0; i < 1023; i++)
    {
        tablica << i << endl;
    }
    tablica.close();
}

void dodawanie_tab(int T[])
{
    ifstream tablica("C:\\Users\\bartek\\Desktop\\tablica.txt");
    for (int i = 0; i < 1023; i++)
    {
        tablica >> T[i];
    }
    tablica.close();
}

bool szukanie_bin(int T[], int liczba)
{
    int lewo = 0, prawo = 1023, srodek;
    while (lewo < prawo)
    {
        srodek = (lewo + prawo) / 2;
        if (T[srodek] < liczba)
        {
            lewo = srodek + 1;
        }
        else
        {
            prawo = srodek;
        }
    }
    return (T[lewo] == liczba);
}
void wyswietl(int liczba)
{
    int T[1023];
    tworzenie_tab(T);
    dodawanie_tab(T);
    if (szukanie_bin(T, liczba))
    {
        cout << "Liczba " << liczba << " występuje." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie występuje." << endl;
    }
}