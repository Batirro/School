#include <bits/stdc++.h>

using namespace std;

void wczytaj(vector<int> &vtablica);
int dl_podc(vector<int> &vtablica);
void pozycja_podc(vector<int> &vtablica);

int main()
{
    vector<int> vtablica;
    wczytaj(vtablica);
    cout << "Nadluzszy ciag ma: " << dl_podc(vtablica) << endl;
    pozycja_podc(vtablica);
}
void wczytaj(vector<int> &vtablica)
{
    ifstream plik;
    int liczba, akt_dl = 1, maks_dl = 1;
    plik.open("/home/batir/Pobrane/ciag.txt");
    while (!plik.eof())
    {
        plik >> liczba;
        vtablica.push_back(liczba);
    }
    plik.close();
}
int dl_podc(vector<int> &vtablica)
{
    int maks_dl = 1, akt_dl = 1, maks_pocz = 0, akt_pocz = 0;
    for (int i = 0; i < vtablica.size(); i++)
    {
        if (vtablica[i] >= vtablica[i - 1])
        {
            akt_dl++;
            if (akt_dl > maks_dl)
            {
                maks_dl = akt_dl;
                maks_pocz = akt_pocz;
            }
        }
        else
        {
            akt_dl = 1;
            akt_pocz = i;
        }
    }
    return maks_dl;
}
void pozycja_podc(vector<int> &vtablica)
{
    int temp = 0;
    cout << "I zawiera liczby: " << endl;
    temp = dl_podc(vtablica);
    while (temp < vtablica.size() && vtablica[temp] >= vtablica[temp - 1])
    {
        cout << vtablica[temp] << " " << endl;
        temp++;
    }
}