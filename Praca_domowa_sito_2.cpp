#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, i;
    cout << "Podaj n: ";
    cin >> n;
    int Tab[n] = {0};
    i = 2;
    while (i < n)
    {
        if (Tab[i] == 0)
        {
            j = i * 2;
            while (j <= n)
            {
                /* Tab[j] = Tab[j] + 1; */
                Tab[j] = 1;
                j = j + i;
            }
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
            cout  << "Indeks: " << i << " = "; 
            cout << Tab[i] << endl;
    }
}