#include<bits/stdc++.h>

using namespace std;

int a[100][100] = { 0 };

int main()
{
	int n;
	cin >> n;
	int cnt = 1;
	int j = 1;
	int k = n / 2 + 1;
	a[j][k] = cnt;
	cnt++;
	int t = 1;
	while (cnt < n*n + 1)
	{
		if (j == 1 && k == n && t == 1)
		{
			a[j + 1][k] = cnt;
			j++;
			cnt++;
			t--;
			continue;
		}
		j--;
		k++;
		if (j == 0) j = n;
		if (k == n + 1) k = 1;
		if (a[j][k] == 0)
		{
			a[j][k] = cnt;
			cnt++;
		}
		else
		{
			j += 2;
			k--;
			if (a[j][k] == 0)
			{
				a[j][k] = cnt;
				cnt++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
