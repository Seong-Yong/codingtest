#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, x, a;;
	cin >> n >> x;

	if (n >= 1 && n <= 10000 && x >= 1 && x <= 10000) {
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a < x)
				cout << a<<" ";
		}
	}
	
}