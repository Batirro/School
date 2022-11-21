#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &Tab);
void PSMS(vector<int> &Tab, int &max_suma, int &max_pocz);

int main()
{
    int suma, pocz, temp = 0, i;
    vector<int> Tab;
    wpisywanie(Tab);
    PSMS(Tab, suma, pocz);
    i = pocz;
    cout << "Pierwszy indeks to " << i << endl;
    while (temp != suma)
    {
        temp += Tab[i];
        i++;
    }
    cout << "Ostatni indeks to " << i << endl;
    return 0;
}

void wpisywanie(vector<int> &Tab)
{
    int number = 0;
    ifstream plik ("C:\\Users\\bartek\\Downloads\\dane1_4.txt");
    while(!plik.eof())
    {
        plik >> number;
        Tab.push_back(number);
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