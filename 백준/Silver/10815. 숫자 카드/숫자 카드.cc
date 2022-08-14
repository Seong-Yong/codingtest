#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> a;
	vector<int>b;
	int n, n2;
	int m, m2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		a.push_back(m);
	}
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> m2;
		b.push_back(m2);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < b.size(); i++)
	{
		cout << binary_search(a.begin(), a.end(), b[i]) << " ";
	}

}
