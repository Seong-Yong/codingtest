#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string A, B, SUM;
	cin >> A >> B;

	int sizeA = A.size();
	int sizeB = B.size();
	int maxSize;
	if (sizeA > sizeB)
		maxSize = sizeA;
	else
		maxSize = sizeB;

	char chA, chB, remain;
	int temp, carry = 0;
	for (int i = 1; i <= maxSize; i++)
	{
		if (sizeA >= i)
			chA = (A[sizeA - i] - '0');
		else
			chA = 0;

		if (sizeB >= i)
			chB = (B[sizeB - i] - '0');
		else
			chB = 0;

		temp = chA + chB + carry;

		carry = temp / 10;
		remain = temp % 10 + '0';

		SUM = remain + SUM;
	}
    if (carry == 1)
		SUM = char(carry + '0') + SUM;
	cout << SUM;
}