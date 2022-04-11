#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

void tworzenie_tab(int T[], int n);
void dodawanie_tab(int T[], int n);
void min_max(int Tab[], int n);
void usuwanie_plik();
void suma_cyfr(int T[], int Tab[], int n);


int main()
{
	int n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    int T[n] = {0};
    int Tab[n] = {0};
    tworzenie_tab(T, n);
    dodawanie_tab(T, n);
    suma_cyfr(T, Tab, n);
    min_max(Tab, n);
    usuwanie_plik();
    return 0;
}

void tworzenie_tab(int T[], int n)
{
    srand(time(NULL));
    ofstream tablica("C:\\Users\\bartek\\Desktop\\tablica.txt");
    for(int i = 0; i < n; i++)
        {
            tablica << rand() % 999999999 << endl;
        }
    tablica.close();
}

void dodawanie_tab(int T[], int n)
{
    ifstream tablica("C:\\Users\\bartek\\Desktop\\tablica.txt");
    for (int i = 0; i < n; i++)
        {
            tablica >> T[i];
        }
    tablica.close();
}

void usuwanie_plik()
{
	char deleted[] = "C:\\Users\\bartek\\Desktop\\tablica.txt";
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

void suma_cyfr(int T[], int Tab[], int n)
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		int liczba = T[i];	
		while (liczba != 0)
		{
			suma = suma + (liczba%10);
			liczba = liczba/10;		
		}

        Tab[i] = suma;
        suma = 0;
	}
}

void min_max(int Tab[], int n)
{
    int min = 0, max = 0;
    
    if (Tab[0]>Tab[1])
        {
            min = Tab[1];
            max = Tab[0];
        }
    else
        {
            min = Tab[1];
            max = Tab[0];
        }
    for(int i = 2; i < n - 1; i+=2)
        {
            if(Tab[i] > Tab[i+1])
                {
                    if(Tab[i+1] < min)
                        {
                            min = Tab[i+1];
                        }
                    if(Tab[i] > max)
                        {
                            max = Tab[i];
                        }
                }
            else
                {
                    if(Tab[i] < min)
                        {
                            min = Tab[i];
                        }
                    if(Tab[i+1] > max)
                        {
                            max = Tab[i+1];
                        }
                }
        }
    cout << "Liczba z najmniejsza suma cyfr to " << min << endl;
    cout << "Liczba z najwieksza suma cyfr to " << max << endl;
}