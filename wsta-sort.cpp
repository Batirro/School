#include <bits/stdc++.h>

using namespace std;

void wsta_sort(int n, int T[], int por, int zam);
void tworzenie_tab(int T[], int n);
void dodawanie_tab(int T[], int n);
void usuwanie_plik();
void wypisz(int T[], int n);
void por_zam(int por, int zam);

int main()
{
	int n = 0, por, zam;
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	int T[n] = {0};
	tworzenie_tab(T, n);
	dodawanie_tab(T, n);
	cout << "Nieposortowane" << endl;
	wypisz(T, n);
	wsta_sort(n, T, por, zam);
	cout << "Posortowane" << endl;
	wypisz(T, n);
	usuwanie_plik();
}

void tworzenie_tab(int T[], int n)
 {
 	srand(time(NULL));
 	ofstream tablica;
 	tablica.open("C:\\Users\\uczen_09\\Desktop\\tablica.txt");
 	for (int i = 0; i < 1000; i++)
 	{
 		tablica << rand() % (20) << endl;
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
void usuwanie_plik()
{
	char deleted[] = "C:\\Users\\uczen_09\\Desktop\\tablica.txt";
	int result = remove(deleted);
}
void wsta_sort(int n, int T[])
{
	int i, j, temp = 0;
	for (i = 0; i < n; i++)
	{
		temp = T[i];
		j = i - 1;
		while(j>=0 && T[j]>temp)
		{
			T[j+1] = T[j];
			por++;
			j--;
		}
		T[j+1] = temp;
		zam++;	
	}
	cout << "Liczba zamian to " << zam << endl;
	cout << "Liczba porownan to  " << por << endl;
}
void wypisz(int T[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
		cout << endl;
}
