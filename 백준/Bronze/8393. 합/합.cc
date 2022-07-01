#include <iostream>
using namespace std;
int main()
{
	int a, total=0;
	cin >> a;
	if (a >= 1 && a <= 10000) {
		for (int i = 1; i <= a; i++) {
			total += i;
		}	

	}
	cout << total << endl;
	
}