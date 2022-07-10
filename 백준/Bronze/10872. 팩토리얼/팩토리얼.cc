#include <iostream>

using namespace std;

int Fibo(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fibo(n - 1);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout<<Fibo(n)<<'\n';
   
}