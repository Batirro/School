#include <bits/stdc++.h>

using namespace std;
void stworz_plik();
void liczby_losowe(int []);
bool znajdz_liczbe(int [], int);

int main()
{
	int Tab[1000] = {0};
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	stworz_plik();
	liczby_losowe(Tab);
	if(znajdz_liczbe(Tab, liczba))
		cout << endl << "true\n";
	else
		cout << endl << "false\n";
	return 0;
}

void stworz_plik()
{
	//srand(time(NULL));
	ofstream wyjscie;
	wyjscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
	for(int i=0; i<1000; i++)
		{
			wyjscie << -1000 + rand()%(2001) << endl;
		}
	wyjscie.close();
}

void liczby_losowe(int Tab[])
{
	int j=0;
	ifstream wejscie;
	wejscie.open("C:\\Users\\bartek\\Desktop\\losowe.txt");
	while(!wejscie.eof())
		{
			wejscie >> Tab[j];
			j++;
		}
}

bool znajdz_liczbe(int Tab[], int liczba)
{
	int lewo = 0, prawo, srodek = ;
	for(int i=0; i<1000; i++)
		{
			if(Tab[i]==liczba)
				return true;
		}
	return false;
}