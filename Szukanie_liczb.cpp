#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
// void stworz_plik();
// void liczby_losowe(int[]);
bool znajdz_liczbe(int[], int, int);
// void usuwanie_plik();
int ilosc_pow(int[], int, int);
void tworzenie_tab(int[]);
void wyswietl(int);

int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	wyswietl(liczba);
	cout << "Plik został pomyślnie zapisany!" << endl;
	// stworz_plik();
	//  usuwanie_plik();
	return 0;
}

// void stworz_plik()
// {
// 	srand(time(NULL));
// 	ofstream wyjscie;
// 	wyjscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
// 	for (int i = 0; i < 1000; i++)
// 	{
// 		wyjscie << rand() % (20) << endl;
// 	}
// 	wyjscie.close();
// }

/* void usuwanie_plik()
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
} */

/* void liczby_losowe(int Tab[])
{
	int j = 0;
	ifstream wejscie;
	wejscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
	while (!wejscie.eof())
	{
		wejscie >> Tab[j];
		j++;
	}
} */

void tworzenie_tab(int Tab[])
{
	srand(time(NULL));
	Tab[0] = rand() % 20;
	for (int i = 1; i < 100; i++)
	{
		Tab[i] = Tab[i - 1] + rand() % 20;
	}
}

bool znajdz_liczbe(int Tab[], int liczba, int n)
{
	int lewo = 0, prawo = n, srodek;
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

int ilosc_pow(int Tab[], int liczba, int n)
{
	int lewo = 0, prawo = n, srodek, temp;
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
		temp++;
	}
	return temp;
}
void wyswietl(int liczba)
{
	int n;
	ofstream outputfile("C:\\Users\\bartek\\Desktop\\wystepowanie.txt");
	ofstream outputfile1("C:\\Users\\bartek\\Desktop\\ilosc.txt");
	for (n = 100; n < 10000; n = n + 500)
	{
		int Tab[n] = {0};
		// liczby_losowe(Tab);
		tworzenie_tab(Tab);
		if (znajdz_liczbe(Tab, liczba, n))
			outputfile << "Liczba " << liczba << " znajduje się w pliku." << endl;
		else
			outputfile << "Liczba " << liczba << " nie znajduje się w pliku." << endl;
		outputfile1 << "Ilość powtórzeń to " << ilosc_pow(Tab, liczba, n) << endl;
	}
	outputfile.close();
	outputfile1.close();
}