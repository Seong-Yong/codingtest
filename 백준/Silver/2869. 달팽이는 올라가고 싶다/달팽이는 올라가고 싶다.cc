#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	double A, B, V;
	int count;
	cin >> A >> B >> V;
	count = ceil((V - A) / (A - B)) + 1;
	
	cout << count << '\n';
	
}