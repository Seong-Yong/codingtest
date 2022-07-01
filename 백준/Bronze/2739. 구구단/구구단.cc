#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a >= 1 && a <= 9) {
		for (int i = 1; i < 10; i++)
			cout << a << " * " << i << " = " << a * i << endl;
	}
}