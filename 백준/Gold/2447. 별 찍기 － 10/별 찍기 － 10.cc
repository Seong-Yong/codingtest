#include <iostream>

using namespace std;
void make(int x, int y, int n)
{
	if (x % 3 == 1 && y % 3 == 1)
		cout << " ";
	else if (n / 3 == 1)
		cout << "*";
	else
		make(x / 3, y / 3, n / 3);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			make(i, j, n);
		}
		cout << '\n';
	}
}