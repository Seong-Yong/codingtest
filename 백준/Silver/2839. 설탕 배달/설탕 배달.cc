#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, count = 0;
	cin >> n;
	while (1) {
		if (n < 3 && n != 0) {
			cout << -1;
			return 0;
		}
		if (n % 5 == 0||n==0) {
			count += n / 5;
			break;
		}
		else {
			count++;
			n -= 3;
		}
	}
	cout << count << '\n';
}