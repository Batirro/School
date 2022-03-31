#include <bits/stdc++.h>

using namespace std;

void wczytywanie_z_pliku(int T[]);
void wyswietl(int liczba);
void rozklad(int T[], int liczba);
int ilosc_pow(int T[], int liczba);

int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	wyswietl(liczba);
	return 0;
}

void wczytywanie_z_pliku(int T[])
{
	 fstream inputfile("C:\\Users\\bartek\\Desktop\\szukanie_bin.txt");
	 for (int i = 0; i < 1023; i++)
	 {
		 inputfile << T[i];
	 }
	 inputfile.close();
}

void rozklad(int T[], int liczba)
{
	int lewo = 0, prawo = 1023, srodek;
	while (lewo < prawo)
	{
		cout << lewo << " " << prawo << " ";
		srodek = (lewo + prawo) / 2;
		cout << srodek << endl;
		if (T[srodek] < liczba)
		{
			lewo = srodek + 1;
		}
		else
		{
			prawo = srodek;
		}
	}
}

int ilosc_pow(int T[], int liczba)
{
	int lewo = 0, prawo = 1023, srodek, temp;
	while (lewo < prawo)
	{
		srodek = (lewo + prawo) / 2;
		if (T[srodek] < liczba)
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
	ofstream outputfile("C:\\Users\\bartek\\Desktop\\ilosc.txt");
	int T[1024] = {0};
	wczytywanie_z_pliku(T);
	rozklad(T, liczba);
	outputfile << "Ilość powtórzeń to " << ilosc_pow(T, liczba) << endl;
	outputfile.close();
}