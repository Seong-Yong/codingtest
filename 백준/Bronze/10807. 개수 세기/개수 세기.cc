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
	vector<int> list;

	int n,a;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int v;
		cin >> v;
		list.push_back(v);
	}
	cin >> a;

	for (int i = 0; i < n; i++)
	{
		if (list[i] == a)
			count++;
	}

	cout << count << '\n';

}
