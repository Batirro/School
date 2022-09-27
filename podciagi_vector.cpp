#include <bits/stdc++.h>

using namespace std;

void wcztywanie(vector <int> vtab);
void wypisz(vector <int> vtab);

int main()
{
    vector <int> vtab;
    wcztywanie(vtab);
    wypisz(vtab);
}

void wcztywanie(vector <int> vtab)
{
    ifstream plik;
    int liczba;
    plik.open("/home/batir/Pobrane/ciag.txt");
    while (!plik.eof())
    {
        plik >> liczba;
        vtab.push_back(liczba);
    }
    plik.close();
}
void wypisz(vector <int> vtab)
{
    for (int i = 0; i < vtab.size(); i++)
    {
        cout << vtab[i] << endl;
        cout << "Rozmiar vectora: " << vtab.size() << endl;
    }
    
}