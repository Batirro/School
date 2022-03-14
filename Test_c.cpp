#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1;
    string s = "MOTOR", w = " ";
    while (i < s.size())
    {
        w = w + s[i]; // w ← w ∙ s(i)
        w = w + s[i-1]; // w ← w ∙ s(i-1)
        i = i + 2; // i ← i + 2
        if (i == s.size()) // jeśli i = długość (s)
        {
            w = w + s[i-1]; // to w ← w + s(s-1)
        }
    }
    cout << w << endl;
    return 0;
}