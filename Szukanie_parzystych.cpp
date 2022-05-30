#include <bits/stdc++.h>

using namespace std;

int szukanie_bin(int T[], int n);
void tworzenie_tab(int T[], int n, int n1, int n2);
void dodawanie_tab(int T[], int n);

int main()
{
	int n, n1, n2;
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	cout << "Podaj ilosc elementow nieparzystych tablicy: ";
	cin >> n1;
	cout << "Podaj ilosc elementow parzystych tablicy: ";
	cin >> n2;
	int T[n] = {0};
	tworzenie_tab(T, n, n1, n2);
	dodawanie_tab(T, n);
	cout << "Pierwsza liczba parzysta w tablicy to " << szukanie_bin(T, n) << endl;
	return 0;
}

void tworzenie_tab(int T[], int n, int n1, int n2)
{
	srand(time(NULL));
	ofstream tablica("C:\\Users\\uczen_09\\Desktop\\tablica.txt");
	int temp1 = 0, temp2 = 0, temp = 0;
	while (temp < n)
	{
		while (temp < n1)
		{
			temp1 = rand() % 120;
			if (temp1 % 2 != 0)
			{
				tablica << temp1;
			}
		}
		while (temp < n2)
		{
			temp2 = rand() % 120;
			if (temp2 % 2 == 0)
			{
				tablica << temp2;
			}
		}
		temp++;
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
	while (lewo < prawo)
	{
		srodek = (lewo + prawo) / 2;
		if (T[srodek] % 2 != 0)
		{
			lewo = srodek + 1;
		}
		else
		{
			prawo = srodek;
		}
	}
	return lewo;
}
