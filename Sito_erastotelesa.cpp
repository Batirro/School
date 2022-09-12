#include <bits/stdc++.h>
using namespace std;

void sito(int T[], int n);
void rozklad(int T[], int n);
void tworzenie_tab(int T[], int n);
void wypisz(int T[], int n);

int main()
{
    int n = 100;
    int T[100] = {0};
    tworzenie_tab(T, n);
    //rozklad(T, n);
    sito(T, n);
    wypisz(T, n);
}

void tworzenie_tab(int T[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        T[i] = rand() % 100;
    }
}

void sito(int T[], int n)
{
    int j;
    int i;
    for (i = 2; i <= n; i++)
    {
        T[i] = i;
    }
    i = 2;
    while ((i * i) <= n)
    {
        if (T[i] != 0)
        {
            for (j = 2; j < n; j++)
            {
                if (T[i] * j > n)
                {
                    break;
                }
                else
                    T[T[i] * j] = 0;
            }
        }
        i++;
    }
}

void rozklad(int T[], int n)
{
    int i = 0;
    int k = 2;
    while (i > n)
    {
        while (T[i] % k == 0)
        {
            cout << T[i] << " " << endl;
            T[i]/= k;
        }
        k++;
        i++;
    }
}

void wypisz(int T[], int n)
{
    int w = 0;
    cout << "Liczby pierwsze to: " << endl;
    for (int i = 2; i < n; i++)
    {
        while (w <= 10)
        {
        cout << endl;
        if (T[i] != 0)
            cout << T[i] << " ";
        w++;
        }
    }
}