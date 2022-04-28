#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[], int n);
void szukanie_pow(int T[], int n);

int main()
{
	int n;
	int T[n] = {0};
	cout << "Podaj liczbe elementow tablicy: ";
	cin >> n;
 	tworzenie_tab(T,n);
 	szukanie_pow(T, n);
}

void tworzenie_tab(int T[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        {
            T[i] = rand() & 100;
            cout << T[i] << endl;
        }
}

void szukanie_pow(int T[], int n)
{
	int i = 0, j = n;
	while (i <= j)
	{
		if (T[i] == T[j])
	{
		cout << "Liczba " << T[i] << " powtarza sie" << endl;
	}
		i++;
		j--;
	}
}
