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
	vector<string> list;
	vector<string>list2;
	vector<string>list3;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		list.push_back(name);
	}
	for (int i = 0; i < m; i++)
	{
		string name;
		cin >> name;
		list2.push_back(name);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < list2.size(); i++)
	{
		if (binary_search(list.begin(), list.end(), list2[i]))
		{
			list3.push_back(list2[i]);
		}
	}
	cout << list3.size() << '\n';
	sort(list3.begin(), list3.end());
	for (int i = 0; i < list3.size(); i++)
	{
		cout << list3[i] << '\n';
	}
}
