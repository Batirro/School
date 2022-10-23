#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j, k, n, i, aktsuma, maxsuma, w, liczba;

    cout << "Podaj ilość elementów w tablicy:";
    cin >> n;
    int t[n];

    maxsuma = 0;
    w = 0;
    cout << "Podaj liczby:" << endl;
    while (w <= n)
    {
        cin >> liczba;
        t[w] = liczba;
        w = w + 1;
    }
    for (j = i; j <= n - 1; j++)
    {
        aktsuma = 0;
        for (k = i; k <= j; k++)
        {
            aktsuma = aktsuma + t[k];
            cout << "Aktualna suma to ";
            cout << aktsuma << endl;
        }
        if (aktsuma > maxsuma)
        {
            maxsuma = aktsuma;
        }
    }
    cout << "Najlepsza suma to:";
    cout << maxsuma << endl;
    return 0;
}