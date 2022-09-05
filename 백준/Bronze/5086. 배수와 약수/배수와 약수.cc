#include<iostream>
#include<vector>
#include<string>

using namespace std;
typedef pair<int, int>P;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<P> input;
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		input.push_back(P(a, b));
	}

	for (int i = 0; i < input.size(); i++)
	{
		int resulta = input[i].first;
		int resultb = input[i].second;
		if (resulta > resultb)
		{
			if (resulta % resultb == 0)
			{
				cout << "multiple" << '\n';
			}
			else
			{
				cout << "neither" << '\n';
			}
		}
		else
		{
			if (resultb % resulta == 0)
			{
				cout << "factor" << '\n';
			}
			else
			{
				cout << "neither" << '\n';
			}
		}
		
	}
}


