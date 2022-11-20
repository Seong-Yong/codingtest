#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int list[101][101] = { 0, };
	int count = 0;
	int a, b;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{

		cin >> a >> b;

		for (int j = a; j < a + 10; j++)
		{
			for (int k = b; k < b + 10; k++)
			{
				if (list[j][k] > 0)
				{
					count++;
				}
				list[j][k] = 1;
			}
		}
	}
	int result = n * 100 - count;
	cout << result << '\n';
}
