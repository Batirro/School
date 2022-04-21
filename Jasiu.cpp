#include <bits/stdc++.h>

using namespace std;

int main()
{
    char odpowiedz_mamy;
    int liczba = 1, min = 1, max = 10000000, n;
    cout << "Podaj liczbe mamy: ";
    cin >> n;
    while (liczba != n)
    {
    	cout << "Mamo czy jest to liczba " << liczba << " ?" << endl;
        liczba = (min + max) / 2;
        if (liczba == n)
            {
                cout << "Tak to ta liczba" << endl;
                break;
            }
        if (liczba < n)
            {
                cout << "Liczba jest za mala" << endl;
                min = liczba;
            }
        if (liczba > n)
            {
                cout << "Liczba jest za duza" << endl;
                max = liczba;
            }
    	liczba++;
    }
}
// Notatki z lekcji
/*
Mam 2 bity (01)
11
10
00
01
Mam 3 bity (101)
000
111
101
100
001
010
011
110
*/