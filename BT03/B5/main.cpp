#include<bits/stdc++.h>

using namespace std;

double t[100];
double l[100];
double a[100];
double tb[100];
int tt[100];
double rest[100];
double resa[100];
double restb[100];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> l[i] >> a[i];
		if (t[i] < 0 || t[i]>10)
		{
			cout << "invalid";
			return 0;
		}
		if (l[i] < 0 || l[i]>10)
		{
			cout << "invalid";
			return 0;
		}
		if (a[i] < 0 || a[i]>10)
		{
			cout << "invalid";
			return 0;
		}
		tb[i] = (t[i] + l[i] + a[i]) / 3;
		rest[i] = t[i];
		resa[i] = a[i];
		restb[i] = tb[i];
	}
	sort(rest + 1, rest + 1 + n);
	sort(resa + 1, resa + 1 + n);
	sort(restb + 1, restb + 1 + n);
	cout << "Theo diem mon Toan:" << endl;
	cout << "SV Toan Ly Anh" << endl;
	int temp = n;
	while (temp > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (rest[temp] == t[i])
			{
				cout << i << " ";
				cout << fixed << setprecision(1) << t[i] << " " << l[i] << " " << a[i] << endl;
				break;
			}
		}
		temp--;
	}

	cout << endl;
	cout << "Theo diem mon Anh:" << endl;
	cout << "SV Toan Ly Anh" << endl;

	int temp1 = n;
	while (temp1 > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (resa[temp1] == a[i])
			{
				cout << i << " ";
				cout << fixed << setprecision(1) << t[i] << " " << l[i] << " " << a[i] << endl;
				break;
			}
		}
		temp1--;
	}

	cout << endl;
	cout << "Theo diem trung binh:" << endl;
	cout << "SV TB Toan Ly Anh" << endl;
	int temp2 = n;
	while (temp2 > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (restb[temp2] == tb[i])
			{
				cout << i << " ";
				cout << fixed << setprecision(1) << tb[i] << " " << t[i] << " " << l[i] << " " << a[i] << endl;
				break;
			}
		}
		temp2--;
	}
}
