#include <bits/stdc++.h>

using namespace std;

void wczytywanie_z_pliku(int T[]);
void wyswietl(int liczba);
int ilosc_pow(int T[], int liczba);
bool szukanie_bin(int T[], int liczba);

int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	wyswietl(liczba);
	cout << "Plik został pomyślnie zapisany!" << endl;
	return 0;
}

void wczytywanie_z_pliku(int T[])
{
	 ifstream inputfile("C:\\Users\\bartek\\Desktop\\szukanie_bin.txt");
	 for (int i = 0; i < 1023; i++)
	 {
		 inputfile >> T[i];
	 }
	 inputfile.close();
}

int ilosc_pow(int T[], int liczba)
{
	int lewo = 0, prawo = 1023, srodek, temp = 0;
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

bool szukanie_bin(int T[], int liczba)
{
	int lewo = 0, prawo = 1023, srodek;
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
	}
	return (T[lewo] == liczba);
}

void wyswietl(int liczba)
{
	int T[1024] = {0};
	int lewo = 0, prawo = 1023, srodek;
	ofstream outputfile("C:\\Users\\bartek\\Desktop\\odp_infa_sort.txt");
	wczytywanie_z_pliku(T);
	if (szukanie_bin(T, liczba))
	{
		outputfile << "Liczba " << liczba << " występuje." << endl;
	}
	else
	{
		outputfile << "Liczba " << liczba << " nie występuje." << endl;
	}
	outputfile << "Ilość powtórzeń to " << ilosc_pow(T, liczba) << endl;
	outputfile << "Szczegółowy rozkład: " << endl;
	while (lewo < prawo)
	{
		outputfile << lewo << " " << prawo << " ";
		srodek = (lewo + prawo) / 2;
		outputfile << srodek << endl;
		if (T[srodek] < liczba)
		{
			lewo = srodek + 1;
		}
		else
		{
			prawo = srodek;
		}
	}
	outputfile << "Numer w tablicy gdzie znajduje się liczba to " << lewo << endl;	
	outputfile.close();
}