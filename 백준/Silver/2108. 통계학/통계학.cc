#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input;
	double average = 0,result=0,result2;
	vector<int> list;
	vector<int>lot;
	int more[8001] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		list.push_back(input);
		more[input + 4000]++;
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
	{
		average += list[i];
	}
	
	result = round(average / list.size());
	if (result == -0)
		cout << 0 << '\n';
	else
		cout << result << '\n';
	cout << list[list.size() / 2]<<'\n';
	int max = *max_element(more, more + 8001);
	for (int i = 0; i < 8001; i++)
	{
		if (more[i] == max)
			lot.push_back(i-4000);
	}
	if (lot.size() > 1)
		cout << lot[1] << '\n';
	else
		cout << lot[0] << '\n';
	if (list[0] > 0 && list[list.size() - 1] > 0)
	{
		result2 = list[list.size() - 1] - list[0];
		cout << result2 << '\n';
	}
	else {
		result2 = (-1 * list[0]) + list[list.size() - 1];
		cout << result2 << '\n';
	}
}
