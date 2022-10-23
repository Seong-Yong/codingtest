#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
vector<int> result;
int n, m;
bool list[8];
int arr[8];
void nandm(int a)
{
	if (a == m) {
		for (int i = 0; i < result.size(); i++)
			cout << result[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++) {
		if (list[i] == false)
		{
			//list[i] = true;
			result.push_back(arr[i]);
			nandm(a + 1);
			result.pop_back();
			list[i] = false;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		list[i] = false;
		arr[i] = i + 1;
	}
	nandm(0);

}
