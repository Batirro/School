#include <bits/stdc++.h>
#include <windows.h>
#include <locale.h>

using namespace std;

void czestosc_znakow(int Licznik[]);
char cezar_pl(int klucz, char znak);
string cezar_szyfr(string tekst, int klucz);
void szyfr_pl(int klucz);
int klucz(int Licznik[]);

const string alfabet_pl_m = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzżź";
const string alfabet_pl_d = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUVWXYZŻŹ";


int main()
{
	SetConsoleCP(852);
	setlocale(LC_ALL,"Polish");
	int Licznik[35] = {0};
	czestosc_znakow(Licznik);
	szyfr_pl(35 - klucz(Licznik));
	cout << "Plik został pomyślnie zapisany!" << endl;
	return 0;
}

int klucz(int Licznik[])
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

char cezar_pl (int klucz, char znak)
{
	int i = alfabet_pl_m.find(znak);

	if (i >= 0 && i < 35)
		{
			i = (i + klucz)%35;
			return alfabet_pl_m[i];
		}
	i = alfabet_pl_d.find(znak);
	    if ( i >= 0 && i < 35)
		{
			i = (i + klucz)%35;
			return alfabet_pl_d[i];
		}
	return znak;
}

string cezar_szyfr(string tekst, int klucz)
{

}

void szyfruj_pl(int klucz)
{
	fstream inputfile ("C:\\Users\\bartek\\Desktop\\tajne.txt");
	ofstream outputfile("C:\\Users\\bartek\\Desktop\\wynik.txt");
	string tekst = " ";

	while (!inputfile.eof())
	{
		getline(inputfile, tekst);
		outputfile << cezar_szyfr(tekst, klucz) << endl;
	}
	inputfile.close();
	outputfile.close();
}

void czestosc_znakow(int Licznik[])
{
	int i, j;
	string tekst = " ";
	for(i = 0; i < 35; i++)
		{
			Licznik[i] = 0;
		}
	fstream inputfile ("C:\\Users\\bartek\\Desktop\\tajne.txt");
	ofstream outputfile("C:\\Users\\bartek\\Desktop\\wynik.txt");
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
	inputfile.close();
	for (i = 0; i < 35; i++)
		{
			outputfile << alfabet_pl_d[i] << " - " << Licznik[i] << endl;
		}
	outputfile.close();
}