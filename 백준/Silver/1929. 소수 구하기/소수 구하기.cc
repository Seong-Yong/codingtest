#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
void sosu(int n1,int n2)
{
	int a;
	vector<int> result;
	for (int i = n1; i <= n2; i++)
	{
		a = sqrt(i);
		if (a == 1 && i != 1)
		{
			result.push_back(i);
		}
		if (i % 2)
		{
			for (int j = 2; j <= a; j++)
			{
				if ((i % j) == 0)
					break;
				if (j == a)
					result.push_back(i);
			}
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n1,n2,a,b;
	cin >> n1>>n2;
	sosu(n1, n2);
}