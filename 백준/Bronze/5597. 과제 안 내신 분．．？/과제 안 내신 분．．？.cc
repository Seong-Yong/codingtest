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
	int list[30] = { 0, };
	for (int i = 0; i < 30; i++)
	{
		list[i] = i + 1;
	}

	for (int i = 0; i < 28; i++)
	{
		int n;
		cin >> n;
		list[n - 1] = 0;
	}

	for (int i = 0; i < 30; i++)
	{
		if (list[i] != 0)
		{
			cout << list[i] << '\n';
		}
	}
}
