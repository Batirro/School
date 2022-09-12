#include <bits/stdc++.h>
using namespace std;

void sito(int n, int a, int b);

int main()
{
	int n, a, b;
	cout << "Podaj maksymalny zakres liczb:";
	cin >> n;
	cout << "Podaj dolna granice:";
	cin >> a;
	cout << "Podaj gorna granice:";
	cin >> b;
	sito(n, a, b);
	return 0;
}

void sito(int n, int a, int b)
{
	int i, d = a + 1;
	bool pierwsze[n];

	pierwsze[2] = true;

	for (i = a; i <= b; i++)
	{
		if (i % 2 == 1)
		{
			pierwsze[i] = true;
		}
		else
		{
			pierwsze[i] = false;
		}
	}
	while (d * d < b)
	{
		i = d;
		while (i * d < n)
		{
			pierwsze[i * d] = false;
			i = i + 2;
		}
		do
		{
			d = d + 2;
		} while (!pierwsze[d]);
	}
	for (i = a; i <= b; i++)
	{
		if (pierwsze[i] == true)
		{
			cout << i << " ";
		}
	}
}