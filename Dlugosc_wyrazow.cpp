#include <bits/stdc++.h>

using namespace std;

void Liczenie_dl_wyrazow(string s);

int main()
{
	string s = " ";
	ifstream infile("C:\\Users\\bartek\\Desktop\\ciag.txt");
	while (!infile.eof())
	{
		infile >> s;
	}
	Liczenie_dl_wyrazow(s);
	cout << "Plik został zapisany!" << endl;
	return 0;
}

void Liczenie_dl_wyrazow(string s)
{
	ofstream outfile("C:\\Users\\bartek\\Desktop\\ciagw.txt");
	int licznik[11] = {}, poz1 = 0, poz2 = 0;
	string temp = " ";
	while (s.size() > 0)
	{
		poz1 = s.find(" ", poz1);
		temp = s.substr(poz2, poz1);
		if (temp.size() > 10)
		{
			cout << "Wyraz nie spelnia wymagan" << endl;
			exit(1);
		}
		licznik[temp.size()]++;
		s = s.erase(poz2, temp.size() + 1);
		poz1 = 0;
		poz2 = 0;
	}
	for (int i = 1; i < 10; i++)
	{
		if (licznik[i] > 0)
		{
			outfile << "Wyrazow " << i << " literowych jest " << licznik[i] << endl;
		}
	}
}
