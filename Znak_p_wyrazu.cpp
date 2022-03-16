#include <bits/stdc++.h>

using namespace std;

void pierwsza_litera(string s);

int main()
{
    string s = "";
    fstream infile ("C:\\Users\\bartek\\Desktop\\ciag.txt");
    while (!infile.eof())
    {
        getline(infile, s);
    }
    pierwsza_litera(s);
    cout << "Plik został zapisany!" << endl;
    return 0;
}

void pierwsza_litera(string s)
{
    ofstream outfile("C:\\Users\\bartek\\Desktop\\ciagw.txt");
    int licznik[26] = {0};
    int poz1 = 0, poz2 = 0;
    string temp;
    char znak;

    while (s.size() > 0)
    {
        poz1 = s.find(" ", poz1);
        temp = s.substr(poz2, poz1);
        znak = toupper(temp[0]);
        licznik[znak - 'A']++;
        s = s.erase(poz2, temp.size() + 1);
        poz1 = 0;
        poz2 = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (licznik[i] > 0)
        {
            outfile << " Ilosc slow zaczynajace sie na " << char(i + 'A') << " to " << licznik[i] << endl;
        }   
    }

}