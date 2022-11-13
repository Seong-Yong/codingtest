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
	vector<int> result;

	int n;
	cin >> n;

	if (n == 1)
	{
		cout << 1 << '\n';
	}
	else if (n == 2)
	{
		cout << 2 << '\n';
	}
	else
	{
		result.push_back(1);
		result.push_back(2);
		for (int i = 2; i < n; i++)
		{
			int d = result[i - 2] + result[i - 1];
			d=d%15746;
			result.push_back(d);
		}

		cout << result[n-1] << '\n';
	}
}
