#include <bits/stdc++.h>

using namespace std;

void wpisywanie(int Tab2D[5][5]);
void wypisz(int Tab2D[5][5]);
void zeruj(int Tab2D[5][5]);
void glowna_przekatna(int Tab2D[5][5]);

int main()
{
    int Tab2D[5][5];
    srand(time(NULL));
    wpisywanie(Tab2D);
    wypisz(Tab2D);
}

void wpisywanie(int Tab2D[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Tab2D[i][j] = rand() % 10;
        }
    }
}

void wypisz(int Tab2D[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << Tab2D[i][j] << " " << endl;
        }
    }
}
void zeruj(int Tab2D[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << Tab2D[i][j] << " " << endl;
        }
    }
}