#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Podaj n:" << endl;
    cin >> n;
    int i, d, k, j;
    bool pierwsze[n];

    for (i = 0; i <= n - 1; i++)
    {
        pierwsze[i] = true;
    }
    pierwsze[0] = false;
    d = 3;
    for (i = 0; i <= n - 1; i++)
    {
       cout << "Indeks: " << pierwsze[i] << endl;
    }
    while (d * d < 2 * n)
    {
        if (pierwsze[(d - 1) / 2] == true)
        {
            k = d;
            j = ((k * d - 1) / 2);
            while (j < n)
            {
                pierwsze[j] = false;
                k = k + 2;
                j = ((k * d - 1) / 2);
            }
        }
        d = d + 2;
    }
    return 0;
}
