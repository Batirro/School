/*
Dane:
Dwie liczby naturalne (a,b) gdzie a < b
Wynik:
Suma kolejnych liczb naturalnych od liczby a do liczby b
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
 int a, b, s = 0;
 cout << "Podaj liczbe a: ";
 cin >> a;
 cout << "Podaj liczbe b: ";
 cin >> b;
 s = ((a+b)*(b-a+1)) / 2;
 cout << "Suma liczb w przedziale od " << a << " do " << b << " to " << s << endl;
 cout << "Ilosc operacji wykonanych w tym algorytmie to "<< (b-a)+1 << endl;
}
