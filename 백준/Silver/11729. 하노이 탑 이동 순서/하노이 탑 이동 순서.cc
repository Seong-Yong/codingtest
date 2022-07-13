#include <iostream>
#include <cmath>

using namespace std;
void change(int n,int a, int b, int c)
{
	if (n == 1)
		cout << a << " " << c << '\n';
	else
	{
		change(n - 1, a, c, b);
		cout << a << " " << c << '\n';
		change(n - 1, b, a, c);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int k = (int)pow(2, n) - 1;

	cout << k << '\n';
	change(n, 1, 2, 3);

}