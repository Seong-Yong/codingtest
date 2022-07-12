#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count = 0;
	int len = 0;
	string s;
	cin >> s;
	len = s.length();
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=') {
				i++;
			}
			else if (s[i + 1] == '-') {
				i++;
			}
		}
		if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				i += 2;
			}
			else if (s[i + 1] == '-') {
				i++;

			}
		}
		if (s[i] == 'l') {
			if (s[i + 1] == 'j') {
				i++;

			}
		}
		if (s[i] == 'n') {
			if (s[i + 1] == 'j') 
				i++; {

			}
		}
		if (s[i] == 's') {
			if (s[i + 1] == '=') {
				i++;
	
			}
		}
		if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				i++;
			
			}
		}
		count++;
	}
	cout << count<< '\n';
	
	
}