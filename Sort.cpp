#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int n, int T[]);
void tworzenie_tab(int T[], int n);
void wypisz(int T[], int n);

int main()
{
	int n = 10;
	int T[10] = {0};
	tworzenie_tab(T, n);
	bubble_sort(n, T);
	wypisz(T, n);
}

void tworzenie_tab(int T[], int n)
{
	srand(time(NULL));
	for(int i = 0; i < n; i++)
		{
			T[i] = rand() % 20;
		}
}
void bubble_sort(int n, int T[])
{
	int i, j, temp;
	for (i = 1; i < n-1; i++)
	{
		for(j = 1; j < n - i - 1; j++)
		{
			if (T[j]>T[j+1])
			{
				temp = T[j];
				T[j] = T[j+1];
				T[j] = temp;
			}
		}
	}
}
void wypisz(int T[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		cout << T[i] << endl;
	}
}