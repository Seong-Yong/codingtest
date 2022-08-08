#include<iostream>
#include<vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a,b,c,d;
	int e = 0;
	cin >> a;
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c;
		cin >> d;
		e = e + (c * d);
	}
	if (a == e)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';
}
