#include<iostream>
using namespace std;


int d(int n)
{
	int result = n;
	for (int i = 0; i < 5; i++) {
		result = result + n % 10;
		n = n / 10;
	}
	if (result > 10000)
		return 0;
	else
		return result;
}
int main()
{
	int a[10001];
	for (int i = 0; i < 10001; i++)
		a[i] = i;
	for (int i = 0; i < 10001; i++)
		a[d(i)] = 0;
	for (int i = 0; i < 10001; i++) {
		if (a[i] != 0)
			cout << a[i] << '\n';
	}
}