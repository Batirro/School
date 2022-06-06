#include <bits/stdc++.h>

using namespace std;

void sort (string tekst);
bool anagram_test(string tekst1, string tekst2);
void from_string_to_file(string tekst);
void from_file_to_string(string tekst);

int main()
{
	string tekst = "", tekst1 = "", tekst2 = "";
	for (int i = 0; i <= 10; i++)
	{
		cout << "Podaj wyraz: ";
		from_string_to_file(tekst);
	}
//	for (int i = 0; i <= 10; i++)
//	{
//		from_file_to_string(tekst);
//	}	
	if (anagram_test)
	{
		cout << "Wyrazy sa anagramami." << endl;
	}
	else
	{
		cout << "Wyrazy nie sa anagramami." << endl;
	}
}

void from_file_to_string(string tekst)
{
	ifstream tekstf("C:\\Users\\uczen_09\\Desktop\\tekst.txt");
	tekstf << tekst << " ";
    tekstf.close();
}

//void from_file_to_string(string tekst1)
//{
//	ofstream tekstf("C:\\Users\\uczen_09\\Desktop\\tekst.txt");
//	tekst1 = tekstf;
//    tekstf.close();	
//}

void sort (string tekst)
{
	int i, j, temp = 0;
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
}

bool anagram_test(string tekst1, string tekst2)
{
	if (tekst1.size() != tekst2.size())
	{
		return false;
	}	
	sort(tekst1);
	sort(tekst2);
	return (tekst1 == tekst2);
}