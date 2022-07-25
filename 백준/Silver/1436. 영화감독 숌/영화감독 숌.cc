#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int first =0;
	int a = 0,count=0;
	cin >> n;
	while (1)
	{
		a = first;
		while (a > 0)
		{
			if (a % 10 == 6) {
				if ((a / 10) % 10 == 6)
				{
					if ((a / 100) % 10 == 6)
					{
						count++;
						break;
					}
				}
			}
			a = a / 10;
		}
		if (count == n) {
			cout << first << '\n';
			break;
		}
		first++;
	}

}
