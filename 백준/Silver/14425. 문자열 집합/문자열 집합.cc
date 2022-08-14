#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n1, n2;
	int count = 0;
	vector<string> a;
	vector<string>c;
	string b;
	cin >> n1 >> n2;

	for (int i = 0; i < n1; i++)
	{
		cin >> b;
		a.push_back(b);
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> b;
		c.push_back(b);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < c.size(); i++)
	{
		if (binary_search(a.begin(), a.end(), c[i]))
		{
			count++;
		}
		
	}
	cout << count << '\n';
}
