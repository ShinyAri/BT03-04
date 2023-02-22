#include <bits/stdc++.h>

using namespace std;
int a[1002];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int tong = 0;
	int tongt = 0;
	sort(a + 1, a + 1 + n);
	for (int i = 1; i < n; i++)
	{
		tongt += a[i];
		tong += tongt;
	}
	cout << tong;
}
