#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
typedef pair<long long, long long>p;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m,t;
	int resulta;
	int resultb;
	int a, b,c;
	vector<p> list;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		list.push_back(p(n, m));
	}
	for (int i = 0; i < list.size(); i++)
	{
		a = list[i].first;
		b = list[i].second;
		if (a < b)
		{
			while (a)
			{
				c = b % a;
				b = a;
				a = c;
			}
			resulta = b;
			resultb = (list[i].first / resulta) * (list[i].second / resulta) * resulta;
		}
		else
		{
			while (b)
			{
				c = a % b;
				a = b;
				b = c;
			}
			resulta = a;
			resultb = (list[i].first / resulta) * (list[i].second / resulta) * resulta;
		}
		cout << resultb << '\n';
	}

}
