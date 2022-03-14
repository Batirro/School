#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0, k = 2, j;
    string s = " ", w = " ";
    cout << "Podaj s:";
    cin >> s;
    while (i<=k)
    {
        j = i;
        while (j <= s.size())
        {
            w = w + s[j];
            j = j + k;
        }
        i++;
    }
    cout << w << endl;
    return 0;
}