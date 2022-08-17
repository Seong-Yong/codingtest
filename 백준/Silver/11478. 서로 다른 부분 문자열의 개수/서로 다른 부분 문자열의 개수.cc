#include<iostream>
#include<set>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	set<string>a;
	cin >> s;
	string b = "";
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			b += s[j];
			a.insert(b);
		}
		b = "";
	}
	cout << a.size() << '\n';

}
