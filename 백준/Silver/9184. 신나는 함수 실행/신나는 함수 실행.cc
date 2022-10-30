#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int f[100][100][100] = { 0, };
int w(int a,int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	if (a < b && b < c)
	{
		if (f[a][b][c] != 0)
			return f[a][b][c];
		else
		{
			f[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
			return f[a][b][c];
		}
	}
	else
	{
		if (f[a][b][c] != 0)
			return f[a][b][c];
		else
		{
			f[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
			return f[a][b][c];
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (1)
	{
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		if (n1 == -1 && n2 == -1 && n3 == -1)
		{
			break;
		}
		cout <<"w("<<n1<<", "<<n2<<", "<<n3<<") = "<< w(n1, n2, n3) << '\n';
	}
}
