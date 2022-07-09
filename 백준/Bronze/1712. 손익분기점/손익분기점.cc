#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int n = 0;
	cin >> a >> b >> c;

	if (b < c) {
		n = a / (c - b) + 1;
	}
	else
		n = -1;
	cout << n << '\n';
}