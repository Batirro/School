#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[], int n);
int suma_cyfr(int liczba);
void sort(int T[], int n);
void wypisz(int T[], int n);

int main()
{
	int n;
	cout << "Podaj dlugosc tablicy:";
	cin >> n;
	int T[n] = {0};
	tworzenie_tab(T, n);
	sort(T, n);
	wypisz(T, n);
}

void tworzenie_tab(int T[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		T[i] = rand() % 45;
	}
}
int suma_cyfr(int liczba)
{
	int suma = 0;
		while (liczba != 0)
		{
			suma = suma + (liczba%10);
			liczba = liczba/10;		
		}
	return suma;
}
void sort(int T[], int n)
{
	int i, j, pom;
	for (i = 0; i < n - 1; i++)
	{
		pom = i;
		for (j = i + 1; j < n; j++)
		{
			if (suma_cyfr(T[j]) < suma_cyfr(T[pom]))
			{
			    pom = j;	
			}
		}
		swap(T[i], T[pom]);
	}
}
void wypisz(int T[], int n)
{
	cout << "Uporzadkowana tablica to ";
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << ", ";
	}
}