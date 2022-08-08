#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
typedef pair<int, string> pp;

bool change(pp a, pp b)
{
	return a.first < b.first;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int c;
	string b;
	cin >> n;
	vector<pp> a;
	for (int i = 0; i < n; i++)
	{
		cin >> c >> b;
		a.push_back(pp(c,b));
	}
	stable_sort(a.begin(), a.end(),change);
	for (int i = 0; i < n; i++)
	{
		cout << a[i].first << " " << a[i].second << '\n';
	}
}
