#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	if (n >= 1 && n <= 100000) {
		for (int i = 1; i <= n; i++)
			cout << i << '\n';
	}
}