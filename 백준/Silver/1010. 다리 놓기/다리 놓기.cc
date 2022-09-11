#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

typedef pair<int, int>P;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<P> bridge;
	int t, n, m;
	int result;
	unsigned long long resulta=1;
	unsigned long long resultb = 1;
	unsigned long long resultc = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		resulta = 1;
		cin >> n >> m;
		bridge.push_back(P(n, m));
		int factorial2 = bridge[i].second - bridge[i].first;
		int up = m;
		for (int i = 0; i < m-n; i++)
		{
			resulta = resulta * up;
			resulta /= (i + 1);
			up--;
		}
		cout << resulta << '\n';
	}

}
