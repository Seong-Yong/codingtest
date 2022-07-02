#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a, b, c,d, total=0, count=0;
	cin >> n;
	d = n;
	if (n >= 0 && n <= 99) {
		while (1) {
			if (d < 10) {
				d = d * 10 + d;
				count++;
				if (d == n)
					break;
			}
			else {
				a = d / 10;
				b = d % 10;
				c = (a + b) % 10;
				total = (b * 10) + c;
				d = total;
				count += 1;
				if (total == n)
					break;
			}
		}
		cout << count << "\n";
	}
}