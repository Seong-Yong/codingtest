#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
typedef pair<long long, long long>p;
int gcd(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result;
	vector<int>list;
	vector<int>list2;
	vector<int>real;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		list.push_back(a);
	}
	sort(list.begin(), list.end());
	result = list[1] - list[0];
	for (int i = 2; i < list.size(); i++)
	{
		int a = list[i] - list[i - 1];
		result = gcd(result, a);

	}
	for (int i = 1; i*i <= result; i++)
	{
		if (result % i == 0)
		{
			list2.push_back(i);
			if (i != result / i)
				list2.push_back(result / i);
		}
	}
	sort(list2.begin(), list2.end());
	for (int i = 0; i < list2.size(); i++)
	{
		if (list2[i] != 1)
		{
			cout << list2[i] << " ";
		}
	}
}
