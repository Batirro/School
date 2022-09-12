#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

string sort (string tekst);
bool anagram_test(string tekst1, string tekst2);
void from_file_to_string(string tekst1, string tekst2);

const string alfabet_pl_m = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzźż";
const string alfabet_pl_d = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUVWXYZŹŻ";

int main()
{
	SetConsoleCP(852);
	setlocale(LC_ALL, "");
	string tekst = "", tekst1 = "", tekst2 = "";
	from_file_to_string(tekst1, tekst2);
	cout << tekst1 << " " << tekst2;
/* 	if (anagram_test(tekst1, tekst2))
	{
		cout << "Wyrazy sa anagramami." << endl;
	}
	else
	{
		cout << "Wyrazy nie sa anagramami." << endl;
	} */
}

void from_file_to_string(string tekst1, string tekst2)
{
	ifstream tekst;
	tekst.open("C:\\Users\\bartek\\Desktop\\tekst.txt");
	while (!tekst.eof())
	{
		getline(tekst, tekst1);
		getline(tekst, tekst2);
	}
	tekst.close();
}

string sort (string tekst)
{
	int i, j, temp = 0, x;
	for (i = 0; i < tekst.size()-1; i++)
	{
		temp = i;
		for(j = i + 1; j < tekst.size(); j++)
		{
			if (tekst[j]<tekst[temp])
			{
				temp = j;
			}
		}
		swap(tekst[temp], tekst[i]);
	}
	return tekst;
}

bool anagram_test(string tekst1, string tekst2)
{
	if (tekst1.size() != tekst2.size())
	{
		return false;
	}	
	if(sort(tekst1) == sort(tekst2))
	{
		return true;
	}
	return false;
}