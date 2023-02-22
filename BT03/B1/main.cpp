#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	long double tong = 0;
	long double tong2 = 0;
	char kitu = ' ';
	while (kitu != '\n')
	{
		n++;
		cin >> a[n];
		tong += a[n];
		kitu = getchar();
	}
	tong /= n;
	for (int i = 1; i <= n; i++)
	{
		tong2 += (a[i] - tong)*(a[i] - tong);
	}
	cout << fixed << setprecision(2) << tong << endl << tong2 / (n - 1);
}
