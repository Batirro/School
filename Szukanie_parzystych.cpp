#include <bits/stdc++.h>

using namespace std;

int szukanie_bin(int T[], int n);
void tworzenie_tab(int T[], int n);
void dodawanie_tab(int T[], int n);

int main()
{
	int n, liczba;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    int T[n] = {0};
    tworzenie_tab(T, n);
    dodawanie_tab(T, n);
}

void tworzenie_tab(int T[], int n)
{
    srand(time(NULL));
    ofstream tablica("C:\\Users\\uczen_09\\Desktop\\tablica.txt");
	int temp1 = 0, temp2 = 0, temp = 0;
	while(temp < n)
	{
		temp1 = rand() % 120;
		if(temp1 % 2 != 0)
		{
			
		}
	}
    tablica.close();
}

void dodawanie_tab(int T[], int n)
{
    ifstream tablica("C:\\Users\\uczen_09\\Desktop\\tablica.txt");
    for (int i = 0; i < n; i++)
        {
            tablica >> T[i];
        }
    tablica.close();
}

int szukanie_bin(int T[], int n)
{
	int lewo = 0, prawo = n - 1, srodek = 0;
	while (lewy < prawy)
	{
		srodek = (lewy + prawy) / 2;
		if (T[srodek] < n)
		{
			lewy = srodek + 1;
		}
		else
		{
			prawy = srodek;
		}
	}
	return lewy;
}
