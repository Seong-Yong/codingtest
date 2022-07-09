#include <iostream>

using namespace std;
int b(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,count=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (b(a) == 1) {
			count++;
		}
	}
	cout << count << '\n';
}