#include <bits/stdc++.h>
#include <vector>

using namespace std;

void wpisywanie(vector<int> &Tab);
void losuj(vector<int> &Tab);
void wypisz(vector<int> &Tab);
void NP(vector<int> &Tab, int &max_suma, int &max_pocz);
int MSPS(vector<int> &Tab);

int main()
{
    int i = 0, max_suma = 0, max_pocz = 0, temp = 0;
    vector<int> Tab;
    wpisywanie(Tab);
    //wypisz(Tab);
    NP(Tab, max_suma, max_pocz);
    cout << "Maksymalna suma podciagu spojnego: " << MSPS(Tab) << endl;
    cout << "Podciag spojny o maksymalnej sumie: " << endl;

    i = max_pocz;
    while (temp != max_suma)
    {

        cout << "Indeks " << i << " = " << Tab[i] << endl;
        temp += Tab[i];
        i++;
    }
    return 0;
}

void wpisywanie(vector<int> &Tab)
{
    int number = 0;
    ifstream plik ("C:\\Users\\bartek\\Downloads\\dane5-1.txt");
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

int MSPS(vector<int> &Tab)
{
    int max_liczba = Tab[0];
    int max_suma = 0, akt_suma = 0, i;
 
	    for(i = 1; i < Tab.size(); i++)
	    {
	        if(max_liczba < Tab[i])
            max_liczba = Tab[i];
    }
	 
    if(max_suma > 0)
	    {
	        for(i = 0; i < Tab.size(); i++)
	        {
	            if(akt_suma + Tab[i] > 0)
	            {
	                akt_suma += Tab[i];
	                if(akt_suma > max_suma)
	                    max_suma = akt_suma;
	            }
	            else
	                akt_suma = 0;
	        }
	    }
	    else
	    {
	        max_suma = max_liczba;
	    }
	    return max_suma;
	}

void NP(vector<int> &Tab, int &max_suma, int &max_pocz)
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