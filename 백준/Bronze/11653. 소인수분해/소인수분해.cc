#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	if (n == 1)
		return 0;
	for (int i = 2; i <= n; i++)
	{
		while (1)
		{
			if (n % i == 0) {
				cout << i << '\n';
				n = n / i;
			}
			else
				break;
		}
	}

}