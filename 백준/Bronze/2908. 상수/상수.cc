#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string n1, n2;
	string yes;
	cin >> n1 >> n2;
	for (int i = 2; i >= 0; i--) {
		if (n1[i] > n2[i]) {
			yes = n1;
			break;
		}
		else if (n1[i] < n2[i]) {
			yes = n2;
			break;
		}
	}
	reverse(yes.begin(), yes.end());
	cout << yes << '\n';
}