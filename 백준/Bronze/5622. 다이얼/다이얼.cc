#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	int result = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 'C')
			result += 2;
		else if (s[i] <= 'F')
			result += 3;
		else if (s[i] <= 'I')
			result += 4;
		else if (s[i] <= 'L')
			result += 5;
		else if (s[i] <= 'O')
			result += 6;
		else if (s[i] <= 'S')
			result += 7;
		else if (s[i] <= 'V')
			result += 8;
		else if (s[i] <= 'Z')
			result += 9;
	}
	cout << result+s.length() << '\n';
}