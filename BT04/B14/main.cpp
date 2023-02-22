#include <bits/stdc++.h>

using namespace std;

int a[10002];
int b[10002];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n + 1; i++)
	{
		cin >> b[i];
	}
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 2 + n);
	for (int i = 1; i <= n + 1; i++)
	{
		if (a[i] != b[i])
		{
			cout << b[i];
			break;
		}
	}
}
