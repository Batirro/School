#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &Tab);
void PSMS(vector<int> &Tab, int &max_suma);

int main()
{
    int suma, temp = 0, i;
    vector<int> Tab;
    wpisywanie(Tab);
    PSMS(Tab, suma);
    cout << "Maksymalna suma podciagu spojnego: " << suma << endl;
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

void PSMS(vector<int> &Tab, int &max_suma)
{
    max_suma = 0;
    int akt_suma = 0, i;
    for (i = 0; i < Tab.size(); i++)
    {
        if (akt_suma + Tab[i] > 0)
        {
            akt_suma += Tab[i];
            if (akt_suma > max_suma)
            {
                max_suma = akt_suma;
            }
        }
        else
        {
            akt_suma = 0;
        }
    }
}