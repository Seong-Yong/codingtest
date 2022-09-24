#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int countfive(long a)
{
	int result = 0;
	while (a >= 5)
	{
		result += a / 5;
		a /= 5;
	}
	return result;
}
int counttwo(long a)
{
	int result = 0;
	while (a >= 2)
	{
		result += a / 2;
		a /= 2;
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	int c=countfive(a);
	int d=counttwo(a);
	int e=countfive(b);
	int f=counttwo(b);
	int g=countfive(a - b);
	int h=counttwo(a - b);

	int real1 = c - e - g;
	int real2 = d - f - h;
	if (real1 >= real2)
	{
		cout << real2 << '\n';
	}
	else
		cout << real1 << '\n';
}
