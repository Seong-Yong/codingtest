#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

typedef pair<int, int>P;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tcase, n, r, temp;
	int answer;

	cin >> tcase;
	while (tcase--) {
		answer = 1;
		temp = 1;
		cin >> r >> n;
		for (int i = n; i > n - r; i--) {
			answer *= i;
			answer /= temp++;
		}
		cout << answer << endl;
	}
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<P> bridge;
	int t, n, m;
	int result;
	unsigned long long resulta=1;
	unsigned long long resultb = 1;
	unsigned long long resultc = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		bridge.push_back(P(n, m));
		int factorial2 = bridge[i].second - bridge[i].first;
		int up = m;
		for (int i = 0; i < m-n; i++)
		{
			resulta = resulta * up;
			resulta /= (i + 1);
			up--;
		}
		cout << resulta << '\n';
	}*/
	//for (int i = 0; i < bridge.size(); i++)
	//{
	//	int factorial = bridge[i].second;//29
	//	int factorial3 = bridge[i].first;//13
	//	int factorial2 = bridge[i].second - bridge[i].first;//16
	//	int up = factorial;
	//	int down = factorial3;
	//	int down2 = factorial2;
	//	if (bridge[i].first == 1)
	//	{
	//		result = bridge[i].second;
	//		//cout << result << '\n';
	//	}
	//	else if (bridge[i].first == bridge[i].second)
	//	{
	//		result = 1;
	//		//cout << result << '\n';
	//	}
	//	else
	//	{
	//			for (int i = 0; i < factorial2; i++)
	//			{
	//				resulta = resulta * up;
	//				resulta /= (i + 1);
	//				up--;
	//			}
	//			result = resulta;
	//	}
	//	cout << result << '\n';
	//}

}
