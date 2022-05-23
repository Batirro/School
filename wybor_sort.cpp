#include <bits/stdc++.h>

using namespace std;

void wybor_sort(int n, int T[]);
void tworzenie_tab(int T[], int n);
void wypisz(int T[], int n);

int main()
{
	int n = 0;
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	int T[n] = {0};
	tworzenie_tab(T, n);
	cout << "Nieposortowane" << endl;
	wypisz(T, n);
	wybor_sort(n, T);
	cout << "Posortowane" << endl;
	wypisz(T, n);
}

void tworzenie_tab(int T[], int n)
 {
 	srand(time(NULL));
 	ofstream wyjscie;
 	wyjscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
 	for (int i = 0; i < 1000; i++)
 	{
 		wyjscie << rand() % (20) << endl;
 	}
 	wyjscie.close();
 }
void wybor_sort(int n, int T[])
{
	int i, j, temp = 0;
	for (i = 0; i < n-1; i++)
	{
		temp = i;
		for(j = i + 1; j < n; j++)
		{
			if (T[j]<T[temp])
			{
				temp = j;
			}
		}
		swap(T[temp], T[i]);
	}
}
void wypisz(int T[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
		cout << endl;
}