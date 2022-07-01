#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,a,b,c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a >= 1 && a <= 1000 && b >= 1 && b <= 1000) {
			c = a + b;
			cout << c << '\n';
		}
		
	}
	
}