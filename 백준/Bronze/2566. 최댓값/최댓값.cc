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
	
	int list[9][9] = { 0, };
	int m, n,d;
	m = 0;
	n = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int a;
			cin >> a;
			list[i][j] = a;
			d = list[0][0];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{

			if (d < list[i][j])
			{
				d = list[i][j];
				m = i;
				n = j;
			}
		}
	}

	cout << d << '\n';
	cout << m+1 << " " << n+1 << '\n';
}
