#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	cin >> n;
	char *array=new char[n+1];
	cin >> array;
	for (int i = 0; i < n; i++)
	{
		count += array[i] - '0';
	}
	cout << count;
	
}