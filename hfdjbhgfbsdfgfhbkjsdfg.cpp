/* Specyfikacja:
Dane:
tablica T[i], i <= 0, n - 1 => i
Wynik:
Uporządkowane liczby binarne według ilości jedynek
*/
#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[], int n);
int dec_to_bin(int T[], int n);
void bin_jedynka(int T[], int n);
//void wypisz(int T[], int n);

int main()
{
	int n;
	cout << "Podaj dlugosc tablicy:";
	cin >> n;
	int T[n] = {0};
	tworzenie_tab(T, n);
	cout << dec_to_bin(T, n) << endl;
//	wypisz(T, n);
}

void tworzenie_tab(int T[], int n)
 {
 	srand(time(NULL));
 	for (int i = 0; i < n; i++)
 	{
 		T[i] = rand() % 45;
 	}
 }
int dec_to_bin(int T[], int n)
{
	int i = 0, pom, licznik = 0;
	while(i < n)
 	{
 	T[i] = pom;
   	while (pom > 0)
   	{
    if (pom % 2 == 1)
    {
    	licznik++;
	}
    pom = pom / 2;
    i++;
	}	
	}
	return licznik;
}
void bin_jedynka(int T[], int n)
{
	int i, j, temp;
	for (i = 1; i < n-1; i++)
	{
		for(j = 1; j < n - i - 1; j++)
		{
			if (T[j]>T[j+1])
			{
				
			}
		}
	}	
}
