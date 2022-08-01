#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,a,b;
	cin >> n;
	vector<vector<int>>list(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		list[i].push_back(a);
		list[i].push_back(b);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i][0] << " ";
		cout << list[i][1] << '\n';
	}
	
}
