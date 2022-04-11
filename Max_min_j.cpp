#include <bits/stdc++.h>

using namespace std;

void min_max(int T[], int min, int maks, int n);
void tworzenie_tab(int T[], int n);
void dodawanie_tab(int T[], int n);

int main()
{
    int min, maks, n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    int T[n] = {0};
    tworzenie_tab(T, n);
    dodawanie_tab(T, n);
    min_max(T, min, maks, n);
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

void min_max(int T[], int min, int maks, int n)
{
	int licznik = 0;
    if (T[0]>T[1])
        {
            min = T[1];
            maks = T[0];
        }
    else
        {
            min = T[1];
            maks = T[0];
        }
    for(int i = 2; i < n - 1; i+=2)
        {
            if(T[i] > T[i+1])
                {
                    if(T[i+1] < min)
                        {
                            min = T[i+1];
                        }
                    if(T[i] > maks)
                        {
                            maks = T[i];
                        }
                }
            else
                {
                    if(T[i] < min)
                        {
                            min = T[i];
                        }
                    if(T[i+1] > maks)
                        {
                            maks = T[i+1];
                        }
                }
        	licznik = licznik + 3;
        }
    cout << "Najwieksza wartosc tablicy to " << maks << endl;
    cout << "Najmniejsza wartosc tablicy to " << min << endl;
    cout << "Liczba porownan to: " << licznik << endl;
}
