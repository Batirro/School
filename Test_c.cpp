#include <bits/stdc++.h>

using namespace std;

void sito(vector<int> &vec);
void przedzial(int a, int b, vector<int> &vec);

int main()
{
    int a, b;
    vector<int> vec;
    cout << "Podaj przedzial: ";
    cin >> a;
    cin >> b;
    sito(vec);
    przedzial(a, b, vec);
}
void sito(vector<int> &vec)
{
    for (int i = 2; i < 10000; i++)
    {
        vec.push_back(0);
    }
    int i = 2, j;
    for (i = 2; i < 10000; i++)
    {
        while (vec[i] == 0)
        {
            j = i * 2;
            while (j < 10000)
            {
                vec[j] = 1;
                j = j + i;
            }
            i++;
        }
        cout << "Indeks: " << i << " = " << vec[i] << endl;
    }
}
void przedzial(int a, int b, vector<int> &vec)
{
    int i = 2, zlicz = 0;
    while (a <= b)
    {
        if(vec[i] == 0)
        {
            zlicz++;
        }
        a++;
    }
    cout << zlicz << endl;
}