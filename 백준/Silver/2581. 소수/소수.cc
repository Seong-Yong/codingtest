#include <iostream>
#include <vector>
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
	int n1, n2,total=0;
	vector<int> sosu;
	cin >> n1 >> n2;
	for (int i = n1; i <= n2; i++)
	{
		if (b(i) == 1) {
			total += i;
			sosu.push_back(i);
		}
	}
	if (sosu.size() == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << total << '\n';
		cout << sosu.front() << '\n';
	}

}