#include<iostream>
#include<vector>
#include<string>

using namespace std;
typedef pair<int, int>P;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	double r;
	double p = 3.141592653589793238462643;
	double result1, result2;
	cin >> r;
	result1 = r * r * p;
	result2 = r * r * 2;
	printf("%f\n", result1);
	printf("%f\n", result2);

}


