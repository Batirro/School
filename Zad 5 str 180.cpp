/* Specyfikacja:
Dane:
tablica T[i], i <= 0, n - 1 => i
Wynik:
Uporządkowane liczby binarne według ilości jedynek (od najwiekszęj do najmniejszej)
*/
#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[], int n);
int dec_to_bin(int T[]);
void bin_jedynka(int T[], int n);
void wypisz(int T[], int n);

int main()
{
	int n;
	cout << "Podaj dlugosc tablicy:";
	cin >> n;
	int T[n] = {0};
	tworzenie_tab(T, n);
	bin_jedynka(T, n);
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
int dec_to_bin(int pom)
{
	int i = 0, licznik = 0;
	while (pom > 0)
	{
		if (pom % 2 == 1)
		{
			licznik++;
		}
		pom = pom / 2;
		i++;
	}
	return licznik;
}
void bin_jedynka(int T[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (dec_to_bin(T[j]) < dec_to_bin(T[j + 1]))
			{
				swap(T[j], T[j + 1]);
			}
		}
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
