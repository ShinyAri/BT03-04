#include <bits/stdc++.h>

using namespace std;
int a[10002];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	bool check = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			check = 1;
			break;
		}
	}
	if (check)cout << "Yes";
	else cout << "No";
}
