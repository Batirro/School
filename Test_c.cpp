#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

string hex(string Tab[], int number, string number_bin1)
{
	int reszta;
	number_bin1 = "";
	while(number > 0)
	{
		reszta = number % 16;
		number_bin1 = Tab[reszta] + number_bin1;
		number /= 16;
	}
	
	return number_bin1;
}


int czarne_p(string tab, int czarne, vector<string> vec)
{
	czarne = 0;
	
	for(int i = 0; i < vec.size(); i++)
	{
		tab = vec[i];
		
		for(int j = 0; j < 4; j++)
		{
			if(tab[j] == '0') czarne++;
		}
	}
	
	return czarne;
}

int biale_p(string tab, int biale, vector<string> vec)
{
	biale = 0;                         
	
	for(int i = 0; i < vec.size(); i++)
	{
		tab = vec[i];
		
		for(int j = 0; j < 4; j++)
		{
			if(tab[j] == 'F') biale++;
		}
	}                          
	
	return biale;
}

int naj_podciag(int max_dl, vector<string> vec, char &znak)
{
	int akt_dl;
	max_dl = 1;
	string spoj = "";
	
	for(int i = 0; i < vec.size(); i++)
	{
		spoj += vec[i];
	}
	
	for(int i = 1; i < spoj.size(); i++)
	{
		if(spoj[i] == spoj[i-1])
		{
		    akt_dl++;
		    if(akt_dl > max_dl) 
			{
			    max_dl = akt_dl;
			    znak = spoj[i];
			}
	    }
		
		else akt_dl = 1;
	}
	
	return max_dl;
}


int naj_podciag_kol(int i, int max_dl1, vector<string> vec)
{
	int akt_dl = 1;
	max_dl1 = 1;
	string spoj = "";
	
	for(int m = 0; m < vec.size(); m++)
	{
		spoj += vec[m];
	}

	for(int r = 0; r < 96; r++)
	{
		if(spoj[96*r+i] == spoj[96*(r-1)+i])
		{
			akt_dl++;
			if(akt_dl > max_dl1) max_dl1 = akt_dl;
		}
		
		else akt_dl = 1;
	}
	
	return max_dl1;
	
}
	
int naj_podciag_lin(int i, int max_dl1, vector<string> vec, char &znak)
{
	int akt_dl = 1;
	max_dl1 = 1;
	string spoj = "";
	
	for(int m = 0; m < vec.size(); m++)
	{
		spoj += vec[m];
	}

	for(int r = 1; r < 96; r++)
	{
		if(spoj[i*96 + r] == spoj[i*96 + r - 1])
		{
			akt_dl++;
			if(akt_dl > max_dl1) 
			{
			    max_dl1 = akt_dl;
				znak = spoj[i*96+r];	
			}
		}
		
		else akt_dl = 1;
	}
	
	return max_dl1;
}


    
int main()
{
	int number, reszta, czarne, black, white, biale, max_dl, akt_dlc, max, max_dl_lin, max_dl_kol, max_max = 1, indeks;
	string tab, n;
	char znak;
	
	string Tab[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
	vector<string> vec;
	
	ifstream in;
	in.open("C:\\Users\\bartek\\Downloads\\dane.txt");
	
	while(!in.eof())
	{
		in >> number;
		n = hex(Tab, number, tab);
		vec.push_back(n);
   }
                
	for(int i = 0; i < 96; i++)
	{
		for(int j = 0; j < 24; j++)
		{
			while(vec[i*24 + j].size() != 4)
			{
				vec[i*24 + j] = "0" + vec[i*24 + j];
			}
			
			cout << vec[i*24 + j] << " ";
		}
		
		max_dl_lin = naj_podciag_lin(i, max_dl, vec, znak);
		cout << "    -MAX PODCIAG W WIERSZU: " << max_dl_lin << ",  ZNAK: " << znak << endl;
	}
	
	
	cout << endl << endl;
	black = czarne_p(tab, czarne, vec);
	white = biale_p(tab, biale, vec);
	                                           
	cout << "CZARNE: " << black << endl;   
	cout << "BIALE: " << white << endl;  
	
	
	cout << "\n\nNAJDLUZSZE PODCIAGI W KOLUMNACH: \n\n";
	for(int i = 0; i < 96; i++)
	{
		max_dl_kol = naj_podciag_kol(i, max_dl, vec);
		
		if(max_dl_kol > max_max)
		{
			indeks = i;
			max_max = max_dl_kol;
		}
		
		if(i <= 9)
		{
			cout << i << "- " << max_dl_kol << "    ";
			
			if(i == 9)
			{
				cout << endl;
			}
		}
		
		if(i >= 10)
		{
			cout << i << "- " << max_dl_kol << "   ";
			
			if((i+1)%10 == 0) cout << endl;
		}
		
		
	}
	
	cout << "\n\nMAKSYMALNY PODCIAG W KOLUMNIE " << indeks << " MA DLUGOSC: " << max_max << endl;
	
	max = naj_podciag(max, vec, znak);
	cout << "MAKSYMALNA DLUGOSC W CALYM CIAGU: " << max << "  (I JEST TO ZNAK: " << znak << ")" <<  endl;
	
	
}
                                                        