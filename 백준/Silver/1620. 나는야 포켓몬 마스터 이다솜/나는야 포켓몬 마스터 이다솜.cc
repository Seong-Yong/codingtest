#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<utility>

using namespace std;
typedef pair<string, int>abc;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<abc>a;
	vector<string>result;
	map<string, int>list;
	int n1, n2;
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		string b;
		cin >> b;
		a.push_back(abc(b, i + 1));
		list.insert(abc(b, i + 1));
	}
	for (int i = 0; i < n2; i++)
	{
		string c;
		cin >> c;
		result.push_back(c);
	}
	for (int i = 0; i < result.size(); i++)
	{
		if (atoi(result[i].c_str()) != 0 || result[i].compare("0") == 0)
		{
			int j = atoi(result[i].c_str());
			cout << a[j - 1].first << " ";
		}
		else
		{
			cout << list[result[i]] << " ";
		}
			
	}
}
