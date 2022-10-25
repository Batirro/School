#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

<<<<<<< Updated upstream
int main() {
    int j, k, n, i, aktsuma, maxsuma, w, liczba;
    
    cout << "Podaj ilość elementów w tablicy:";
    cin >> n;
    int t[n];
    
    maxsuma = 0;
    w = 0;
    cout << "Podaj liczby:" << endl;
    while (w <= n) {
        cin >> liczba;
        t[w] = liczba;
        w = w + 1;
    }
    for (j = i; j <= n - 1; j++) {
        aktsuma = 0;
        for (k = i; k <= j; k++) {
            aktsuma = aktsuma + t[k];
            cout << "Aktualna suma to ";
            cout << aktsuma << endl;
        }
        if (aktsuma > maxsuma) {
            maxsuma = aktsuma;
        }
    }
    cout << "Najlepsza suma to:";
    cout << maxsuma << endl;
=======
void wpisz(vector<int> &Tab)
{
    int number = 0;
    fstream plik ("C:\\Users\\bartek\\Downloads\\liczby.txt");
    while (!plik.eof())
    {
        plik >> number;
        Tab.push_back(number);
    }
}

void Wypisz(vector<int> &Tab)
{
    int i;
    for (i = 0; i < Tab.size(); i++)
    {
        cout << Tab[i] << " ";
    }
    cout << endl;
}

int NSPM(vector<int> &Tab)
{
    int maks_dl = 1, akt_dl = 1, maks_pocz = 0, akt_pocz = 0, i;

    for (i = 1; i < Tab.size(); i++)
    {
        if (Tab[i] < Tab[i - 1])
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

    return maks_pocz;
}

int main()
{
    srand(time(NULL));
    int i;
    vector<int> Tab;
    wpisz(Tab);
    Wypisz(Tab);

    cout << "Najdluzszy spojny podciag malejacy:" << endl;
    i = NSPM(Tab);
    cout << "Indeks to: " << NSPM(Tab) << endl;
    do
    {
        cout << Tab[i] << " ";
        i++;
    } while (i < Tab.size() && Tab[i] < Tab[i - 1]);

>>>>>>> Stashed changes
    return 0;
}