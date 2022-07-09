#include<iostream>
using namespace std;

int han(int n)
{
	int count = 99;
	int a = 0, b = 0, c = 0;
	int result = 0;
	if (n < 100)
	{
		return n;
	}
	else
	{
		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;

			if ((a - b) == (b - c)) {
				result++;
			}
		}
	}
	result = result + 99;
	return result;
}

int main()
{
	int n;
	cin >> n;
	cout << han(n) << '\n';
}
