#include <bits/stdc++.h>

using namespace std;

void wcztywanie(vector <int> vtablica);
void wypisz(vector <int> vtablica);
void podciag(vector <int> vtablica);

int main()
{
    vector <int> vtablica;
    wcztywanie(vtablica);
    wypisz(vtablica);
    podciag(vtablica);
}

void wcztywanie(vector <int> vtablica)
{
    ifstream plik;
    int liczba;
    plik.open("/home/batir/Pobrane/ciag.txt");
    while (!plik.eof())
    {
        plik >> liczba;
        vtablica.push_back(liczba);
        cout << vtablica << endl;
    }
    plik.close();
}
void wypisz(vector <int> vtablica)
{
    for (int i = 0; i < vtablica.size(); i++)
    {
        cout << vtablica[i] << endl;
        cout << "Rozmiar vectora: " << vtablica.size() << endl;
    }
    
}

void podciag(vector <int> vtablica)
{

}