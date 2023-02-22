#include <bits/stdc++.h>

using namespace std;

int x[10002];
int y[10002];

bool canQueenAttack(int qR, int qC, int oR, int oC)
{
	// If queen and the opponent are in the same row
	if (qR == oR)
		return true;

	// If queen and the opponent are in the same column
	if (qC == oC)
		return true;

	// If queen can attack diagonally
	if (abs(qR - oR) == abs(qC - oC))
		return true;

	// Opponent is safe
	return false;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i];
	}
	bool check = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (canQueenAttack(x[i], y[i], x[j], y[j]))
			{
				check = 1;
				break;
			}
		}
	}
	if (check) cout << "Yes";
	else cout << "No";
}
