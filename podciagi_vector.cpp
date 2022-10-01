#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vtablica;
    ifstream plik;
    int liczba;
    plik.open("/home/batir/Pobrane/testciagi.txt");
    while (!plik.eof())
    {
        plik >> liczba;
        vtablica.push_back(liczba);
    }
    plik.close();
    for (int i = 1; i < vtablica.size(); i++)
    {
        //cout << vtablica[i] << endl;
    }
    cout << "Podciagi liczb:" << endl;
    for (int i = 1; i < vtablica.size(); i++)
    {
        if (vtablica[i] < vtablica[i+1])
        {
            cout << vtablica[i] << " ";
        }
        else
        {
            cout << ";" << endl;
        }
    }
    //cout << "Rozmiar vectora: " << vtablica.size() << endl;
}