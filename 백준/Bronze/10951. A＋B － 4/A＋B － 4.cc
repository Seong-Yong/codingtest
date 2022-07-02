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
		if (cin.eof() == true)
			break;
		if (a > 0 && a < 10 && b>0 && b < 10) {
			cout << a + b << "\n";
		}

		
	}					
}