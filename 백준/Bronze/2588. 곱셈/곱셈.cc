#include <iostream>
using namespace std;
int main()
{
	int a, b,c,d,e;
	cin >> a;
	cin >> b;
	c = a * (b % 10);
	d = a * ((b % 100) / 10);
	e = a * (b / 100);
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << c + (d * 10) + (e * 100) << endl;
}