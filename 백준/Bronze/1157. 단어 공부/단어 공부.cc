#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	int a[26] = { 0, };
	int max = 0;
	int index = 0;
	int count = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int n = s.at(i);
		if (n < 97)
			a[n - 65]++;
		else
			a[n - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] == max) {
			count++;
			if (count >= 2) {
				cout << "?" << '\n';
				return 0;
			}
		}
	}
	cout << (char)(index + 65) << '\n';
   
}