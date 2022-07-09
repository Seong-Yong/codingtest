#include <iostream>
using namespace std;

int main()
{
	int n;
	int c = 1, total = 1, order = 1;
	cin >> n;
	while (true) {
		if (total >= n)
			break;
		c += 1;
		total += c;
	}
	order = n - (total - c);
	if (c % 2 == 1)
		cout << (c - order + 1) << "/" << order << '\n';
	else
		cout << order << "/" << (c - order + 1) << '\n';
}