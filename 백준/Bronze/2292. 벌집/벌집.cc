#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int n;
	int max=1;
	cin >> n;
	if (n == 1)
		count = 1;
	while (max < n)
	{
		max += 6 * count;
		count++;
	}
	cout << count << '\n';
}