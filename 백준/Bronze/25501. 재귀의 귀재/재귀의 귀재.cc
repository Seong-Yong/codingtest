#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;
int resultcount = 0;
vector<string> list;
int recursion(const char* s, int l, int r) {
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else {
		resultcount++;
		return recursion(s, l + 1, r - 1);
	}
}

int isPalindrome(const char* s) {
	resultcount++;
	return recursion(s, 0, strlen(s) - 1);
}

void countreset()
{
	resultcount=0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string a;
		cin >> a;
		list.push_back(a);

	}
	for (int i = 0; i < list.size(); i++)
	{
		const char* c = list[i].c_str();

		cout << isPalindrome(c) << " " << resultcount << '\n';
		countreset();
	}

}
