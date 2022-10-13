#include <bits/stdc++.h>
#include <vector>

using namespace std;

void wcztywanie(vector <string> vtab);
void wypisz(vector <string> vtab);

int main()
{
    vector <string> vtab;
    wcztywanie(vtab);
    wypisz(vtab);
}

void wcztywanie(vector <string> vtab)
{
    ifstream plik;
    string s;
    plik.open("D:\\Nowy folder\\liczby.txt");
    while (!plik.eof())
    {
        getline(plik, s);
        vtab.push_back(s);
    }
    plik.close();
}
void wypisz(vector <string> vtab)
{
    for (int i = 0; i < vtab.size(); i++)
    {
        cout << vtab.at(i) << endl;
        cout << "Rozmiar vectora: " << vtab.size() << endl;
    }
    
}