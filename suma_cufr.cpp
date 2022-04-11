#include <bits/stdc++.h>

using namespace std;

void tworzenie_tab(int T[], int n);
void dodawanie_tab(int T[], int n);
int suma_cyfr(int T[], int n);


int main()
{
	int n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    int T[n] = {0};
    tworzenie_tab(T, n);
    dodawanie_tab(T, n);
    liczenie_liczb(T,n);
    return 0;
}

void tworzenie_tab(int T[], int n)
{
    srand(time(NULL));
    ofstream tablica("C:\\Users\\uczen_09\\Desktop\\tablica.txt");
    for(int i = 0; i < n; i++)
        {
            tablica << rand() % 20 << endl;
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

int suma_cyfr(int T[], int n)
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		int liczba = T[i];	
		while (liczba != 0)
		{
			suma = liczba%10;
			liczba = liczba/10;		
		}
	}
	return suma;
}