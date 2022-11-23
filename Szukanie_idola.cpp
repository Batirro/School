#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

int szukanie_lidera(vector<int> &Tab);
void wpisywanie(vector<int> &Tab, int n);
void wypisywanie(vector<int> &Tab);

int main()
{
    vector<int> Tab;
    int n;
    cout << "Podaj ilość elementów:";
    cin >> n;
    srand(time(NULL));
    wpisywanie(Tab, n);
    wypisywanie(Tab);
}

void wpisywanie(vector<int> &Tab, int n)
{
    int x = rand() % 100;
    for (int i = 0; i < n; i++)
    {
        if (rand() % 2 == 0)
        {
            Tab.push_back(rand() % 100);
        }
        else
        {
            
        }
    }
}

void wypisywanie(vector<int> &Tab)
{
    for (int i = 0; i < Tab.size(); i++){
        if (szukanie_lidera(Tab) != -1)
        {
            cout << "Liderem jest " << szukanie_lidera(Tab);
        }
        else
        {
            cout << "Nie ma lidera w zbiorze" << endl;
        }
    }
}

int szukanie_lidera(vector<int> &Tab)
{
    int i, kandydat, ile = 0;
    for (i = 0; i < Tab.size(); i++)
    {
        if (ile == 0)
        {
            ile = 1;
            kandydat = Tab[i];
        }
        else if (Tab[i] == kandydat)
        {
            ile++;
        }
        else
        {
            ile--;
        }
    }
    if (ile == 0)
    {
        return -1;
    }
    ile = 0;
    for (int i = 0; i < Tab.size(); i++)
    {
        if (Tab[i] == kandydat)
        {
            ile++;
        }
    }
    if (ile > Tab.size() / 2)
    {
        return kandydat;
    }
    else
    {
        return -1;
    }
}
