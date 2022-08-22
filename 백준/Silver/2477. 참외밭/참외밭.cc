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
	vector<P> A;
	vector<P>B;
	vector<P>C;
	vector<P>D;
	int n,x,y;
	int maxa=0, maxb=0;
	int mina = 0, minb = 0;
	int count = 0;
	int index = -1;
	cin >> n;
	for (int i = 0; i < 6; i++)
	{
		cin >> x >> y;
		A.push_back(P(x, y));
		if (x >= 3)
		{
			if (y > maxa)
			{
				maxa = y;
			}
		}
		else
		{
			if (y > maxb)
			{
				maxb = y;
			}
		}
	}
	
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i].second == maxa || A[i].second == maxb)
		{
			int j = i + 1;
			if (j > 5)
			{
				j = 0;
			}
			if (A[j].second == maxa || A[j].second == maxb)
			{
				index = j;
				break;
			}
		}
	}
	int l = index + 2;
	int m = index + 3;
	if (l > 5)
		l -= 6;
	if (m > 5)
		m -= 6;
	mina = A[l].second;
	minb = A[m].second;
	count = ((maxa * maxb) - (mina * minb)) * n;
	cout << count << '\n';
}


