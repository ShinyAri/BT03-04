#include <bits/stdc++.h>

using namespace std;
double a[10002];
double b[10002];
int main()
{
	int n;
	cin >> n;
	bool check = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < b[i])
		{
			check = 0;
			break;
		}
	}
	if (check) cout << "Yes";
	else cout << "No";
}
