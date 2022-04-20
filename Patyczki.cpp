#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, wynik;
    cout << "Podaj liczbe: ";
    cin >> n;
	if (n%2 == 1)
	{
		n--;
		wynik = (2+n)/2 * (n/2);
	}
	cout << "Liczba patyczkow potrzeba Jasiowi to " << wynik << endl;
}
