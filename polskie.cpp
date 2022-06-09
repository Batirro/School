#include <bits/stdc++.h>

using namespace std;
string sort(string);
int main() {
	const string alfabet_m="aąbcćdeęfghijklłmnńoópqrsśtuvwxyzźż"; 
	const string alfabet_w="AĄBCĆDEĘFGHIJKLŁMNŃOÓPQRSŚTUVWXYZŹŻ"; 
	
	string s1 = "żaba",s2 = "baść";
	
	if(s1.length()!=s2.length()) {
		cout << "Wyraz nie jest anagramem\n";
	}
	
	s1 = sort(s1);
	s2 = sort(s2);

	cout << s1 << endl << s2 << endl;
	return 0;
}

string sort(string s) {
	
	int ssize = s.length();
	
	for(int i=1;i<ssize;i++) {
		int pom = s[i];
		int j = i-1;
		while(j>=0 && s[j]>pom) {
			s[j+1]=s[j];
			j--;
		}
		s[j+1] = pom;
	}
	
	return s;
}