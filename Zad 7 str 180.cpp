#include <bits/stdc++.h>

using namespace std;

void wsta_sort(int n, int T[]);
void tworzenie_tab(int T[], int n);
void find_bin(int T[], int n);
void wypisz(int T[], int n);

int main()
{
	int n = 6;
//	cout << "Podaj ilosc elementow tablicy: ";
//	cin >> n;
	int T[n] = {1,2,3,4,5,6};
	//tworzenie_tab(T, n);
	cout << "Nieposortowane" << endl;
	wypisz(T, n);
	find_bin(T, n);
	//wsta_sort(n, T);
//	cout << "Posortowane" << endl;
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

void find_bin(int T[], int n)
{
	int lewy = 0, prawy = n - 1, srodek, liczba;
	for (int i = 0; i < n; i++)
	{
	T[i] = liczba;
	while(lewy<prawy)
	{
		if (T[srodek] < liczba)
		{
			lewy = srodek + 1;
		}
		else
		{
			prawy = srodek;
		}
	}
	cout << lewy << endl;
	}
	
}
//void wsta_sort(int n, int T[])
//{
//	int i, j, temp, k;
//	
//	if(T[0]> T[1])
//	{
//		swap(T[0], T[1]);
//	}
//	for (i = 2; i < n; i++)
//	{	
//		if (T[i] < T[i - 1])
//		{
//			k = find_bin(T, i, T[i]);
//			j = i;
//			temp = T[i];
//			while (j > k)
//			{
//				T[j] = T[j - 1];
//				j--;
//			}
//			T[k] = temp;
//		}
//	}
//}
void wypisz(int T[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
		cout << endl;
}