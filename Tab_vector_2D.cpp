#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &tab, vector<vector<int>> &lines);

int main()
{
    vector<int> tab;
    vector<vector<int>> lines;
    srand(time(NULL));
    wpisywanie(tab, lines);
}

void wpisywanie(vector<int> &tab, vector<vector<int>> &lines)
{
    int k, w;
    cout << "Podaj ilosc kolumn i wierszy:";
    cin >> k >> w;
    for (int i = 0; i < k; i++)
    {
        tab.push_back(0);
    }
    for (int j = 0; j < w; j++)
    {
        lines.push_back(tab);
    }
    for (int i = 0; i < lines.size(); i++)
    {
        for (int j = 0; j < tab.size(); j++)
        {
            lines[j][i] = rand() % 20;
        }
        
    }
    for (int i = 0; i < lines.size(); i++)
    {
        for (int j = 0; j < tab.size(); j++)
        {
            cout << "T[" << j << "," << i << "] = " << lines[j][i] << " ";
        }
        cout << endl;
    }
}