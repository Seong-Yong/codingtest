#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,a,b;
	cin >> n;
	vector<vector<int>>list(n,vector<int>(2,0));
	for (int i = 0; i < n; i++)
	{
		cin >> list[i][1];
		cin	>> list[i][0];
		
	}
	sort(list.begin(), list.end());
	
	
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i][1] << " ";
		cout << list[i][0] << '\n';
	}
	
}
