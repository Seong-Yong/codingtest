#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int h, w, p;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> h >> w >> p;
		int hotel = p / h;
		int d = p % h;
		if (d==0) {
			if (h == w)
				cout << 100*h + hotel << '\n';
			else
				cout << h * 100 + hotel<<'\n';
		}
		else
			cout << d * 100 + hotel + 1<<'\n';
	}
	
}