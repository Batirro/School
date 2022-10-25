#include <bits/stdc++.h>

using namespace std;

void pliki(vector<int> &Tab);
void sort(vector<int> &Tab);
void max(vector<int> &Tab);
void min(vector<int> &Tab);

int main()
{
    vector<int> Tab;
    pliki(Tab);
    sort(Tab);
    max(Tab);
    min(Tab);
}

void pliki(vector<int> &Tab)
{
    fstream plik("C:\\Users\\bartek\\Desktop\\test_sort.txt");
    int number = 0;
    while (!plik.eof())
    {
        plik >> number;
        Tab.push_back(number);
    }
}

void sort(vector<int> &Tab)
{
    cout << "Posortowany wektor: ";
    sort(Tab.begin(), Tab.end());
    for (int i = 0; i < Tab.size(); i++)
    {
        cout << Tab[i] << " ";
    }
}

void min(vector<int> &Tab)
{
    cout << endl;
    cout << "Najmniejsza liczba w zbiorze liczb to ";
    min(Tab.begin(), Tab.end());
    for (int i = 0; i < Tab.size(); i++)
    {
        cout << Tab[i] << " ";
    }
}
void max(vector<int> &Tab)
{
    cout << endl;
    cout << "Najwieksza liczba w zbiorze liczb to ";
    max(Tab.begin(), Tab.end());
    for (int i = 0; i < Tab.size(); i++)
    {
        cout << Tab[i] << " ";
    }
}