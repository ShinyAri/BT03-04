#include <bits/stdc++.h>

using namespace std;
int a[10002];
int main()
{
	int n;
	cin >> n;
	int tong = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] & 1) cnt++;
		else tong += a[i];
	}
	sort(a + 1, a + 1 + n);
	cout << a[1] << endl << a[n] << endl << tong << endl << cnt;
}
