#include <bits/stdc++.h>

using namespace std;

void pierwsza_litera(string s);

int main()
{
    string s = "";
    fstream infile ("C:\\Users\\uczen_09\\Desktop\\ciag.txt");
    while (!infile.eof())
    {
        getline(infile, s);
    }
    pierwsza_litera(s);
    cout << "Plik zostal zapisany!" << endl;
    return 0;
}

void pierwsza_litera(string s) // Funkcja sprawdzająca ile razy występują wyrazy zaczynające się na poszczególne litery w ciągu znaków, który jest wczytany z pliku
{
    ofstream outfile("C:\\Users\\uczen_09\\Desktop\\ciagw.txt");
    int licznik[26] = {0};
    int poz1 = 0, poz2 = 0;
    string temp;
    char znak;

    while (s.size() > 0)
    {
        poz1 = s.find(" ", poz1); // zapisanie występowania spacji w ciągu znaków
        temp = s.substr(poz2, poz1); // przypisywanie wyrazu z ciągu znaków
        znak = toupper(temp[0]); // przypisanie do zmiennej znak pierwszej litery wyrazu oraz zamianienie jej na wielką literę
        licznik[znak - 'A']++; // zapisywanie ilości występowania poszczególnych liter w ciągu znaków
        s = s.erase(poz2, temp.size() + 1); // wyczyszczenie ciągu znaków wczytanego z pliku
        poz1 = 0;
        poz2 = 0;
    }

    for (int i = 0; i < 26; i++) // pętla wypisująca do pliku ilości wystąpień wyrazów zaczynających się na poszczegolne litery
    {
        if (licznik[i] > 0)
        {
            outfile << " Ilosc slow zaczynajace sie na " << char(i + 'A') << " to " << licznik[i] << endl;
            outfile << endl;
        }   
    }

}
