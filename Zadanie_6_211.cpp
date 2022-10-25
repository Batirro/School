#include <bits/stdc++.h>

using namespace std;
int main()
{
    int liczba, akt_suma, licznik = 0;
    vector<int> Tab;
    cout << "Podaj ciag 20 liczb:";
    for (int i = 0; i < 20; i++)
    {
        cin >> liczba;
        Tab.push_back(liczba);
    }
    cout << "Podaj szukana sume: ";
    cin >> liczba;

    for (int i = 0; i < Tab.size(); i++)
    {
        for (int j = i; j < Tab.size(); j++)
        {
            akt_suma = 0;
            for (int w = i; w <= j; w++)
            {
                akt_suma += Tab[w];
                if (akt_suma == liczba)
                {
                    licznik++;
                }
            }
        }
    }
    cout << "Ilosc podciagow o podanej sumie to " << licznik << endl;
}