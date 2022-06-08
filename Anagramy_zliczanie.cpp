#include <bits/stdc++.h>

using namespace std;

void Zlicz(string s, int Ile[]);
bool anagramy(string s1, string s2);

int main()
{
	string s1 = "", s2 = "";
	int Ile[26] = {0};
	cout << "Podaj wyraz: ";
	cin >> s1;
	cout << "Podaj wyraz: ";
	cin >> s2;
	if (anagramy(s1, s2))
	{
		cout << "Wyrazy sa anagramami." << endl;
	}
	else
	{
		cout << "Wyrazy nie sa anagramami." << endl;
	}
}

void Zlicz(string s, int Ile[])
{
	for (int i = 0; i < 26; i++)
	{
		Ile[i] = 0;
	}
	for (int i = 0; i < s.size(); i++)
	{
		Ile[s[i] - 'A']++;
	}
}

bool anagramy(string s1, string s2)
{
	int Ile1[26] = {0}, Ile2[26] = {0};
	if (s1.size() != s2.size())
	{
		return false;
	}	
	Zlicz(s1, Ile1);
	Zlicz(s2, Ile2);
	for (int i = 0; i < 26;i++)
	{
		if(Ile1[i] != Ile2[i])
		{
			return false;
		}
	}
	return true;
}