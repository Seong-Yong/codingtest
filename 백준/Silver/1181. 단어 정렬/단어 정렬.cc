#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool change(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector <string> a;
	string b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end(),change);
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == a[i + 1])
			continue;
		cout << a[i] << '\n';
	}
}
