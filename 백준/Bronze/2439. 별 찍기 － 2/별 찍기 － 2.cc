#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	if (n >= 1 && n <= 100) {
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < n - i; j++)
				cout << " ";
			for (int k = 0; k < i; k++)
				cout << "*";
			cout << "\n";
		}
			
	}
	
}