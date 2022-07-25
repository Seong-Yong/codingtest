#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result, a, b, c,d,sum=0;
	bool right;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		d = i;
		sum = i;
		while (d > 0)
		{
			sum = sum + (d % 10);
			d = d / 10;
		}
		if (n == sum)
		{
			cout << i << '\n';
			right = true;
			break;
		}
		else if (n != sum)
		{
			right = false;
		}
		sum = 0;
		
	}
	if (right == false)
		cout << 0 << '\n';

}