#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, n;
	int x1, y1, x2, y2;
	int cx, cy,cr;
	int count = 0;
	vector<int> result;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> cx >> cy >> cr;
			if ((pow(x1 - cx, 2) + pow(y1 - cy, 2)) < pow(cr, 2) && (pow(x2 - cx, 2) + pow(y2 - cy, 2)) < pow(cr, 2))
			{
				continue;
			}
			else if ((pow(x1 - cx, 2) + pow(y1 - cy, 2)) < pow(cr, 2) || (pow(x2 - cx, 2) + pow(y2 - cy, 2)) < pow(cr, 2))
			{
				count++;
			}
		}
		result.push_back(count);
		count = 0;
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}

}


