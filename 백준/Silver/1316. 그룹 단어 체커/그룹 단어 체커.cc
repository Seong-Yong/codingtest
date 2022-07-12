#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	int count = 0;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		bool yes = true;
		for (int j = 1; j < s.length(); j++)
		{
			for (int k = 0; k < j; k++) {
				if (s[j] != s[j - 1] && s[j] == s[k])
				{
					yes = false;
					break;
				}
			}
		}
		if (yes)
			count++;
	}

	cout << count << '\n';
}