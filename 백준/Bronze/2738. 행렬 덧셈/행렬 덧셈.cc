#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a[100][100] = { 0, };
	int b[100][100] = { 0, };
	int c[100][100] = { 0, };
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int b;
			cin >> b;
			a[i][j] = b;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int d;
			cin >> d;
			b[i][j] = d;

			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << '\n';
	}

}
