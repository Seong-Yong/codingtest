#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> li;
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		li.push_back(input);
	}
	sort(li.begin(), li.end());
	for (int i = 0; i < li.size(); i++)
	{
		cout << li[i] << '\n';
	}
}