#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		if (a > 0 && a < 10 && b>0 && b < 10) {
			cout << "Case #" << i << ": " << a + b<<'\n';
		}
	}
	
}