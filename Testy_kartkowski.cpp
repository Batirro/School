//Zapisz plik podajac swoje imie i nazwisko np. z_piksele_Marian_Kowalski.cpp

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;

void reprezentacja(vector < vector <int> > &obraz);
void wyswietl(vector < vector<int> > obraz);
int min_ciemny(vector < vector<int> > obraz);
int max_jasny(vector < vector<int> > obraz); //mozna napisac razem zanjdujacy max i min w jednym przebiegu
int os_symetrii(vector <vector<int> > obraz);
int piksele_kontrastujace(vector <vector<int> > obraz);
int podciag_max(vector <vector<int> > obraz); //najdluzsza linia pionowa

int main()
{
	
	return 0;
}
//--------------------------------------------------------
//ponizej zdefiniuj kazda z funkcji, zmien nazwe pliku np. kowalski_jan_piksele.cpp
