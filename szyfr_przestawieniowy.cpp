#include <bits/stdc++.h>

using namespace std;

void wczytywanie_z_tablicy(string s);

int main()
{

}
void wczytywanie_z_tablicy(string s)
{
	ofstream tablica("C:\\Users\\uczen_09\\Desktop");
	while (!tablica.eof())
	{
		getline(s, tablica);
	}
	tablica.close();
}