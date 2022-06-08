#include <bits/stdc++.h>

using namespace std;

void Zlicz(string s, int Ile[]);
string sort_zlicz(string s, int Ile[]);

int main()
{
	string s = "";
	int Ile[26] = {0};
	cout << "Podaj wyraz: ";
	cin >> s;
	cout << sort_zlicz(s, Ile) << endl;
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

string sort_zlicz(string s, int Ile[])
{
	Zlicz(s, Ile);
	for (int i = 0; i < 26; i++)
	{
		if (Ile[i] != 0)
		{
	
		}
	}
	return s;
}