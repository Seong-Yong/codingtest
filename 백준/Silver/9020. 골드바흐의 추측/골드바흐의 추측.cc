#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,check=0,num;
	int a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		a = num / 2;
		b = num - a;
		while (a > 0) {
			for (int j = 2; j < a - 1; j++) {
				if (a % j == 0 || b % j == 0)
					check++;
			}
			if (check >= 1) {
				a--;
				b++;
				check = 0;
			}
			else
				break;
		}
		cout << a << " " << b << '\n';
	}
   
}