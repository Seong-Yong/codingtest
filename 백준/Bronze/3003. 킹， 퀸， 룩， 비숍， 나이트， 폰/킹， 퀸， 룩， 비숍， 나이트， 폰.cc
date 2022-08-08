#include<iostream>
#include<vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[6] = { 0, };
	int b[6] = { 1,1,2,2,2,8 };
	int c[6] = { 0, };
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 6; i++)
	{
		c[i] = b[i] - a[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << c[i] << " ";
	}
}
