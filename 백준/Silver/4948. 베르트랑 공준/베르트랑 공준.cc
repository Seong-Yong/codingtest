#include <iostream>
#include<cmath>
using namespace std;
int sosu(int n1,int n2)
{
	int a;
	int count = 0;
	
	for (int i = n1; i <= n2; i++)
	{
		a = sqrt(i);
		if (a == 1 && i != 1)
		{
			
			count++;
		}
		if (i % 2)
		{
			for (int j = 2; j <= a; j++)
			{
				if ((i % j) == 0)
					break;
				if (j == a) {
					
					count++;
				}
			}
		}
	}
	
	return count;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n1;
	cin >> n1;
	while (1) {
		if (n1 == 0)
			break;
		else {
			cout << sosu(n1 + 1, 2 * n1) << '\n';
			cin >> n1;
		}

	}
}