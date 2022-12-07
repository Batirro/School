#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

int szukanie_idola(vector<int> &Tab, vector<vector<bool>> &lines);
void wpisywanie(vector<int> &Tab, vector<vector<bool>> &lines, int n);
void wypisywanie(vector<int> &Tab, vector<vector<bool>> &lines);
void wypisz(vector<int> &Tab, vector<vector<bool>> &lines);

int main()
{
    vector<int> Tab;
    vector<vector<bool>> lines;
    int n;
    cout << "Podaj ilość elementów:";
    cin >> n;
    srand(time(NULL));
    wpisywanie(Tab, lines, n);
    wypisz(Tab, lines);
    //wypisywanie(Tab, lines);
}

void wpisywanie(vector<int> &Tab, vector<vector<bool>> &lines, int n)
{
    int i, j, idol;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            Tab.push_back(rand() % 2);
            lines[i][j] = rand() % 2;
        }
    }
    if (rand() % 2 == 1)
    {
        idol = rand() % n;
        for (i = 0; i < n; i++)
        {
            lines[i][idol] = true;
        }
        for (j = 0; j < n; j++)
        {
            lines[idol][i] = false;
        }
    }
}

/* void wypisywanie(vector<int> &Tab, vector<vector<bool>> &lines)
{
    int idol = szukanie_idola(Tab, lines);
    if (idol != -1)
    {
        cout << "Idolem jest " << szukanie_idola(Tab);
    }
    else if (idol == -1)
    {
        cout << "Nie ma idola w zbiorze" << endl;
    }
} */
void wypisz(vector<int> &Tab, vector<vector<bool>> &lines)
{
    for (int i = 0; i < Tab.size(); i++)
    {
        for (int j = 0; j < lines.size(); j++)
        {
            if (i != j)
            {
                cout << lines[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
            cout << endl;
        }
    }
}

/* int szukanie_idola(vector<int> &Tab, vector<vector<bool>> &lines)
{
    int i, kandydat = 0;
    bool j_kandydat = false;
    while (kandydat < Tab.size() && !j_kandydat)
    {
        i = 0;
    }
} */
