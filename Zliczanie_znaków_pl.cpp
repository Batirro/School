#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
int max_znak(int Licznik[]);
void wyswietl(int Licznik[]);

const string alfabet_pl_m = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzźż";
const string alfabet_pl_d = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUVWXYZŹŻ";


int main()
{
	SetConsoleCP(852);
	setlocale(LC_ALL,"");
	int Licznik[35] = {0};
	string tekst = " ";
	int i, j;
	for(i = 0; i < 35; i++)
		{
			Licznik[i] = 0;
		}
	fstream inputfile ("C:\\Users\\uczen_09\\Desktop\\tajne.txt");
	while(!inputfile.eof())
		{
			getline(inputfile, tekst);
			for(i = 0; i < tekst.size(); i++)
				{
					j = alfabet_pl_m.find(tekst[i]);
					if (j >= 0 && j < 35)
						{
							Licznik[j]++;
						}
					j = alfabet_pl_d.find(tekst[i]);
					if (j >= 0 && j < 35)
						{
							Licznik[j]++;
						}
				}
		}
	wyswietl(Licznik);
	cout << "Plik został pomyślnie zapisany!" << endl;
	inputfile.close();
	return 0;
}

void zlicz(int Licznik[], string tekst)
{
	char znak;
	for (int i = 0; i < tekst.size(); i++)
		{
			znak = toupper(tekst[i]);
			if (znak >= 'A' && znak <= '?')
				{
					Licznik[znak - 'A']++;
				}
		}
}

int max_znak(int Licznik[])
{
	int max_z = 0, temp;
	for (int i = 0; i < 35; i++)
		{
			if (Licznik[i] > Licznik[max_z])
				{
					max_z = i;
				}
		}

	temp = Licznik[max_z];
	return temp;
}

void wyswietl(int Licznik[])
{
	ofstream outputfile("C:\\Users\\uczen_09\\Desktop\\czestosc.txt");
	int pom = max_znak(Licznik), i1;
	for (int i = 0; i < 35; i++)
		{
			if (Licznik[i] >= 0)
				{
					outputfile << alfabet_pl_d[i] << " - " << Licznik[i] << endl;
				}
			if (Licznik[i] == pom)
			{
				i1 = i;
			}
		}
	outputfile << "Najwiecej razy wystapila litera " << alfabet_pl_d[i1] << " stalo sie to az " << pom << " razy" << endl;
	outputfile.close();
}
