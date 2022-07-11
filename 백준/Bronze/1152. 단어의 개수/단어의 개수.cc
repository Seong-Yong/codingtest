#include <iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count = 0;
	string s;
	getline(cin, s);
	if (s.empty()) {
		cout << 0 << '\n';
		return 0;
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			if (s[i + 1] && s[i + 1] != ' ')
				count++;
		}
		
	}
	if (s[0] == ' ' || s[s.length()] == ' ')
		count--;

	cout << count+1 << '\n';
   
}