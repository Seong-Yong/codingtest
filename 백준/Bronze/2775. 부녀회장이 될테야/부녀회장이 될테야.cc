#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, k, n;
	int apt[15][15] = { 0, };
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		for (int i = 0; i < 15; i++) {
			apt[0][i] = i;
		}

		for (int i = 1; i < 15; i++) {
			for (int j = 1; j < 15; j++) {
				apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
			}
		}
		cout << apt[k][n] << '\n';
	}
	
}