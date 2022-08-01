#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<int> list;
	cin >> n;
	while (n > 0)
	{
		list.push_back(n % 10);
		n = n / 10;
	}
	sort ( list.begin(), list.end(),greater<int>());
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i];
	}
}
