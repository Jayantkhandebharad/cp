#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long long int a, b, total = 0;
		cin >> a >> b;
		// int total=0;
		if (a % 3 == 0)
			total++;
		a /= 3;
		b /= 3;
		total += b - a;
		cout << total << endl;
	}
	return 0;
}
