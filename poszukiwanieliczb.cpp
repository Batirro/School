#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
void stworz_plik();
void liczby_losowe(int[]);
bool znajdz_liczbe(int[], int);
void usuwanie_plik();

int main()
{
	int Tab[1000] = {0};
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	stworz_plik();
	liczby_losowe(Tab);
	if (znajdz_liczbe(Tab, liczba))
		cout << "Liczba " << liczba << " znajduje się w pliku." << endl;
	else
		cout << "Liczba " << liczba << " nie znajduje się w pliku." << endl;
	usuwanie_plik();
	return 0;
}

void stworz_plik()
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

void usuwanie_plik()
{
	char deleted[] = "C:\\Users\\bartek\\Desktop\\losowe.txt";
	int result = remove(deleted);
	if (result == 0)
	{
		cout << "Plik został pomyślnie usunięty!" << endl;
	}
	else
	{
		cout << "Plik nie został usunięty!" << endl;
	}
}

void liczby_losowe(int Tab[])
{
	int j = 0;
	ifstream wejscie;
	wejscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
	while (!wejscie.eof())
	{
		wejscie >> Tab[j];
		j++;
	}
}

bool znajdz_liczbe(int Tab[], int liczba)
{
	int lewo = 0, prawo = 999, srodek;
	while (lewo < prawo)
	{
		srodek = (lewo + prawo) / 2;
		if (Tab[srodek] < liczba)
		{
			lewo = srodek + 1;
		}
		else
		{
			prawo = srodek;
		}
	}
	return (Tab[lewo] == liczba);
}