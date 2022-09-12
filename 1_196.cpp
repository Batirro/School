#include <bits/stdc++.h>
using namespace std;

void sito(int n, int a, int b);

int main()
{
    int a, b, n;
    bool pierwsze[n];
    cout << "Podaj przedzial liczb:" << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;
    n = b - a;
    cout << "Liczby pierwsze:" << endl;
    sito(n, a, b);
}
void sito(int n, int a, int b)
{
    bool pierwsze[n];
    int d = 3, i;
    pierwsze[2] = true;
    for (i = 3; i <= b; i++)
    {
        if (i % 2 == 1)
        {
            pierwsze[i] = true; 
        }
        else
        {
            pierwsze[i] = false;
        }
    }
    while (d * d < n)
    {
        i = d;
        while (i * d < n)
        {
            pierwsze[i * d] = false;
            i = i + 2;
        }
        do
        {
            d = d + 2;
        } while (!pierwsze[d]);
    }
    for (i = a; i <= b; i++)
    {
        if (pierwsze[i] == true)
        {
            cout << i << " ";
        }
    }
}