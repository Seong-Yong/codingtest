#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input;
	int list[10000] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		list[input - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (list[i] != 0) {
			if (list[i] > 1)
			{
				while (list[i] != 0)
				{
					cout << i + 1 << '\n';
					list[i]--;
				}
			}
			else
				cout << i+1 << '\n';
		}
	}
}
