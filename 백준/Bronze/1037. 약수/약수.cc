#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
typedef pair<int, int>P;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> input;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		input.push_back(a);
	}
	sort(input.begin(), input.end());
	if (n == 1)
	{
		int result = input.front() * input.front();
		cout << result << '\n';
	}
	else
	{
		int result;
		result = input.front() * input.back();

		cout << result << '\n';
	}
}


