#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a >= -1000 && a <= 1000 && b >= -1000 && b <= 1000 && a != 0 && b != 0) {
		if (a > 0 && b > 0)
			cout << "1" << endl;
		else if (a < 0 && b>0)
			cout << "2" << endl;
		else if (a < 0 && b < 0)
			cout << "3" << endl;
		else
			cout << "4" << endl;
	}
		
}