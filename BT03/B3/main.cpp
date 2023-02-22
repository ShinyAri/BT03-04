#include <bits/stdc++.h>

using namespace std;
int a[1002];
int dem[11];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dem[a[i]]++;
	}
	int k = 0;
	while (k <= 9)
	{
		cout << k << " : " << dem[k] << endl;
		k++;
	}
}
