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

	vector<int> input;
	int n;
	int k;
	int resulta=1;
	int resultb = 1;
	int resultc = 1;
	int c, d,f;
	cin >> n >> k;
	c = n;
	d = k;
	f = n - k;
	if (k > n)
	{
		cout << 0 << '\n';
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			resulta = resulta * c;
			c--;
		}
		for (int i = 0; i < k; i++)
		{
			resultb = resultb * d;
			d--;
		}
		for (int i = 0; i < n - k; i++)
		{
			resultc = resultc * f;
			f--;
		}
		int real = resulta / (resultb * resultc);
		cout << real << '\n';
	}
	
}


