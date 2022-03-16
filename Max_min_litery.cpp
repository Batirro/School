#include <bits/stdc++.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
int max_znak(int Licznik[]);
int min_znak(int Licznik[]);
void wyswietl(int Licznik[]);

int main()
{
	int Licznik[26] = {0};
	string tekst = " ";
	ifstream inputfile("C:\\Users\\uczen_09\\Desktop\\litery.txt");
	while (!inputfile.eof())
		{
			inputfile >> tekst;
			zlicz(Licznik, tekst);
		}
	wyswietl(Licznik);
	cout << "Plik zostal zapisany na pulpicie!" << endl;
	inputfile.close();
	return 0;
}

void zlicz(int Licznik[], string tekst)
{
	char znak;
	for (int i = 0; i < tekst.size(); i++)
		{
			znak = toupper(tekst[i]);
			if (znak >= 'A' && znak <= 'Z')
				{
					Licznik[znak - 'A']++;
				}
		}
}

int max_znak(int Licznik[])
{
	int max_z = 0, temp;
	for (int i = 0; i < 26; i++)
		{
			if (Licznik[i] > Licznik[max_z])
				{
					max_z = i;
				}
		}

	temp = Licznik[max_z];
	return temp;
}

int min_znak(int Licznik[])
{
	int min_z = max_znak(Licznik), temp;
	for (int i = 0; i < 26; i++)
		{
			if (Licznik[i] < Licznik[min_z])
				{
					min_z = i;
				}
		}

	temp = Licznik[min_z];
	return temp;
}

void wyswietl(int Licznik[])
{
	ofstream outputfile("C:\\Users\\uczen_09\\Desktop\\wynikl.txt");
	int pom = max_znak(Licznik), pom1 = min_znak(Licznik), i1 = 0;
	for (int i = 0; i < 26; i++)
		{
			if (Licznik[i] > 0)
				{
					outputfile << char(i + 'A') << " - " << Licznik[i] << endl;
				}
		}
	outputfile << "Najwięcej wystąpiła litera ";
	while (i1 < 26)
		{
			if (Licznik[i1] == pom)
				{
					outputfile << char(i1 + 'A') << ", ";
				}
			i1++;
		}
	outputfile << "i zrobiła to " << pom << " raz/y." << endl;
	
	i1 = 0;
	
	outputfile << "Najmniej wystąpiła litera ";
	while (i1 < 26)
		{
			if (Licznik[i1] == pom1)
				{
					outputfile << char(i1 + 'A') << ", ";
				}
			i1++;
		}
	outputfile << "i zrobiła to " << pom1 << " raz/y." << endl;
	outputfile.close();
}
