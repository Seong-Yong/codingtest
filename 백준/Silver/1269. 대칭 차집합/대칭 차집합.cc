#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m, n;
	vector<int>a;
	vector<int>b;
	vector<int>result1;
	vector<int>result2;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		int c;
		cin >> c;
		a.push_back(c);
	}
	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;
		b.push_back(c);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int i = 0; i < a.size(); i++)
	{
		if (!binary_search(b.begin(), b.end(), a[i]))
		{
			result1.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (!binary_search(a.begin(), a.end(), b[i]))
		{
			result2.push_back(b[i]);
		}
	}
	cout << result1.size() + result2.size() << '\n';
	
}
