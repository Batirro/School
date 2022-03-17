#include <bits/stdc++.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
int max_znak(int Licznik[]);
void wyswietl(int Licznik[]);

const string alfabet_pl_m = "a¹bcædeêfghijkl³mnñoóprsœtuwyzŸ¿";
const string alfabet_pl_d = "A¥BCÆDEÊFGHIJKL£MNÑOÓPRSŒTUWYZ¯";


int main()
{
	setConsoleCp(812);
	setlocale(LC_ALL,"");
    int Licznik[35] = {0};
    string tekst = " ";
    ifstream inputfile ("C:\\Users\\uczen_09\\Desktop\\ciag.txt");
    while (!inputfile.eof())
    {
        inputfile >> tekst;
        cout << tekst << " ";
       // zlicz(Licznik, tekst);
    }
   // wyswietl(Licznik);
   // cout << "Plik zostal zapisany" << endl;
    inputfile.close();
    return 0;
}

void zlicz(int Licznik[], string tekst)
{
    char znak;
    for (int i = 0; i < tekst.size(); i++)
    {
        znak = toupper(tekst[i]);
        if (znak >= 'A' && znak <= '¯')
        {
            Licznik[znak - 'A']++;
        }
    }
}

//int max_znak(int Licznik[])
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
    ofstream outputfile("C:\\Users\\uczen_09\\Desktop\\ciagw.txt");
    int pom = max_znak(Licznik), i1;
    for (int i = 0; i < 35; i++)
    {
        if (Licznik[i] >= 0)
        {
            outputfile << char(i + 'A') << " - " << Licznik[i] << endl;
        }
     //   if (Licznik[i] == pom)
        {
            i1 = i;
        }
    }
   // outputfile << "Najwiecej razy wystapila litera " << char(i1 + 'A') << " stalo sie to az " << pom << " razy" << endl;
    outputfile.close();
}