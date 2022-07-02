#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a > 9||a<1||b>9||b<1)
			break;
		cout << a + b << "\n";
	}					
}