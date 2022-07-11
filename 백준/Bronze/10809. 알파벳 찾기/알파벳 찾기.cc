#include <iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;

	for (char i = 'a'; i <= 'z'; i++)
	{
		int result = s.find(i);
		cout << result << " ";
	}
   
}