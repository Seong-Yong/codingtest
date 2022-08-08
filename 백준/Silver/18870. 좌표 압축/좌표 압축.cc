#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>a;
	vector<int>c;
	int n;
	int d;
	int index = 0;
	cin >> n;
	vector<int>b(n,0);
	vector<int>e(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		a.push_back(d);
	}
	c = a;
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());

	for (int i = 0; i < n; i++)
	{
		int h = lower_bound(a.begin(), a.end(), c[i]) - a.begin();
		cout << h << " ";
	}

}
