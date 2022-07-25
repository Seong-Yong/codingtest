#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a, b;
	vector<int> heavy;
	vector<int> tall;
	vector<int> rank;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		heavy.push_back(a);
		tall.push_back(b);
		rank.push_back(0);
	}
	for (int i = 0; i<heavy.size()-1; i++)
	{
		for (int j = i + 1; j<heavy.size(); j++)
		{
			if (heavy[i] < heavy[j] && tall[i] < tall[j])
				rank[i]++;
			else if (heavy[i] > heavy[j] && tall[i] > tall[j])
				rank[j]++;
			
		}
	}
	for (int i = 0; i<rank.size(); i++)
	{
		cout << rank[i]+1 << " ";
	}

}