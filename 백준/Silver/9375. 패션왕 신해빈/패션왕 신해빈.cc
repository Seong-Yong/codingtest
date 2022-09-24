#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

typedef pair<string, string>P;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	vector<int> realresult;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<string> list;
		vector<string>list2;
		int s;
		int real = 1;
		cin >> s;
		for (int j = 0; j < s; j++)
		{
			string a, b;
			cin >> a >> b;
			list.push_back(b);
		}
		list2 = list;
		sort(list.begin(), list.end());
		list.erase(unique(list.begin(), list.end()), list.end());
		vector<int>result(list.size());
		for (int c = 0; c < list.size(); c++)
		{
			for (int d = 0; d < list2.size(); d++)
			{
				if (list2[d] == list[c])
				{
					result[c]++;
				}
			}
		}
		for (int e = 0; e < result.size(); e++)
		{
			real = real*(result[e]+1);
		}
		realresult.push_back(real - 1);
	}
	for (int i = 0; i < realresult.size(); i++)
	{
		cout << realresult[i] << '\n';
	}
}
