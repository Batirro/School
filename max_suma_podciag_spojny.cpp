#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &Tab);
void wypisz(vector<int> &Tab);
void PSMS(vector<int> &Tab, int &max_suma, int &max_pocz);

int main()
{
    int suma, pocz, temp = 0, i;
    vector<int> Tab;
    wpisywanie(Tab);
    //wypisz(Tab);
    PSMS(Tab, suma, pocz);
    cout << "Maksymalna suma podciagu spojnego: " << suma << endl;
    cout << "Podciag spojny o maksymalnej sumie: " << endl;

    i = pocz;
    while (temp != suma)
    {

        cout << "Indeks [" << i << "]: " <<Tab[i] << endl;
        temp += Tab[i];
        i++;
    }
    return 0;
}

void wpisywanie(vector<int> &Tab)
{
    int number = 0;
    ifstream plik ("C:\\Users\\bartek\\Downloads\\dane1_3.txt");
    while(!plik.eof())
    {
        plik >> number;
        Tab.push_back(number);
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