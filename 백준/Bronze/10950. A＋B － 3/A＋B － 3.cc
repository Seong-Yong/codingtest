#include <iostream>
using namespace std;
int main()
{
	int test,a,b,c;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> a >> b;
		
		if (a > 0 && a < 10 && b>0 && b < 10) {
			c = a + b;
			cout<<c<<endl;
		}
	}
}