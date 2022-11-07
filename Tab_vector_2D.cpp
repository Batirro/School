#include <bits/stdc++.h>

using namespace std;

void wpisywanie(vector<int> &tab, vector<vector<int>> &lines); //

int main()
{
    vector<int> tab; // deklaracja tablicy wektorowej typu całkowitego (int)
    vector<vector<int>> lines; // deklaracja tablicy wektorowej dwuwymiarowej typu całkowitego (int)
    srand(time(NULL));
    wpisywanie(tab, lines);
}

void wpisywanie(vector<int> &tab, vector<vector<int>> &lines)
{
    int k, w; // deklaracja zmiennych całkowitych; zmienna k - liczba kolumn w tablicy, zmienna w - liczba wierszy w tablicy
    cout << "Podaj ilosc kolumn i wierszy:";
    cin >> k >> w;
    for (int i = 0; i < k; i++) // pętla wpisująca zera do tablicy
    {
        tab.push_back(0);
    }
    for (int j = 0; j < w; j++) // pętla wpisująca zera do tablicy
    {
        lines.push_back(tab);
    }
    for (int i = 0; i < lines.size(); i++) // pętla zmieniająca indeksy w tablicy dwuwymiarowej wektorowej odpowiedzialnej za kolumny
    {
        for (int j = 0; j < tab.size(); j++) // pętla zmieniająca indeksy w tablicy dwuwymiarowej wektorowej odpowiedzialnej za wiersze
        {
            lines[j][i] = rand() % 20; // wpisywanie losowych liczb do tablicy dwuwymiarowej
        }
        
    }
    for (int i = 0; i < lines.size(); i++) // wyświetlanie zawartości tablicy dwuwymiarowej dynamicznej
    {
        for (int j = 0; j < tab.size(); j++)
        {
            cout << "T[" << j << "," << i << "] = " << lines[j][i] << " ";
        }
        cout << endl;
    }
}