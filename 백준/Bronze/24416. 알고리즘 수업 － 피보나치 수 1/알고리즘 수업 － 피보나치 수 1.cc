#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int fibocount = 0;
int fibocount2 = 0;
int f[40] = { 0, };
int fibo(int n)
{
	if (n == 1 || n == 2)
	{
		fibocount++;
		return 1;
	}
	else return (fibo(n - 1) + fibo(n - 2));
}

void fibo2(int n)
{
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		fibocount2++;
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	fibo(n);
	fibo2(n);
	cout << fibocount << " " << fibocount2 << '\n';

}
