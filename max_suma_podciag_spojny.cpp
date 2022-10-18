#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &Tab);
void losuj(vector<int> &Tab);
void wypisz(vector<int> &Tab);
void PSMS(vector<int> &Tab, int &max_suma, int &max_pocz);

int main()
{
    int max_suma, max_pocz, temp = 0, i;
    vector<int> Tab;
    wpisywanie(Tab);
    wypisz(Tab);
    PSMS(Tab, max_suma, max_pocz);
    cout << "Maksymalna suma podciagu spojnego: " << max_suma << endl;
    cout << "Podciag spojny o maksymalnej sumie: " << endl;

    i = max_pocz;
    while (temp != max_suma)

    {

        cout << Tab[i] << " ";
        temp += Tab[i];
        i++;
    }
    return 0;
}

void wpisywanie(vector<int> &Tab)
{
    int i = 0;
    ifstream plik ("C:\\Users\\bartek\\Downloads\\dane5-3.txt");
    while(!plik.eof())
    {
        plik >> Tab[i];
        i++;
    }
}

void wypisz(vector<int> &Tab)
{
    int i = 0;
    for (i = 0; i < Tab.size(); i++)
    {
        cout << Tab[i] << endl;
    }
}

void PSMS(vector<int> &Tab, int &max_suma, int &max_pocz)
{
    max_suma = 0;
    max_pocz = 0;
    int akt_suma = 0, akt_pocz = 0, i;
    for (i = 0; i < Tab.size(); i++)
    {
        if (akt_suma + Tab[i] > 0)
        {
            akt_suma += Tab[i];
            if (akt_suma > max_suma)
            {
                max_suma = akt_suma;
                max_pocz = akt_pocz;
            }
        }
        else
        {
            akt_suma = 0;
            akt_pocz = i + 1;
        }
    }
}