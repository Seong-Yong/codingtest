#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool change(int a, int b)
{
	return a > b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>d;
	int a, b,c;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> c;
		d.push_back(c);
	}
	sort(d.begin(), d.end(),change);
	cout << d[b - 1] << '\n';

}
