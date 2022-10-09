#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
vector<int> result;
int n, m;
bool list[8]={0,};
int arr[8] = { 0, };
void nandm(int a, int b)
{
	if (b == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = a; i <= n; i++) {
		arr[b] = i;
		nandm(i + 1, b + 1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	nandm(1, 0);

}
