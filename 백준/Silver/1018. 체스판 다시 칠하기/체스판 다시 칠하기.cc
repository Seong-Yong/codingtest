#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<vector<char>> v(50, vector<char>(50)); // 입력 2차원 벡터
	vector<vector<char>> B(8, vector<char>(8)); // 시작이 B인 8*8 벡터
	vector<vector<char>> W(8, vector<char>(8)); // 시작이 W인 8*8 벡터

	int row, col;
	char c;
	int min = 32;
	int i = 0, j = 0, h = 0, k = 0;
	int count=0;
	cin >> row >> col;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> c;
			v[i][j] = c;
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) B[i][j] = 'B';
			else B[i][j] = 'W';
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) W[i][j] = 'W';
			else W[i][j] = 'B';
		}
	}
	while (1) {
		int BCount = 0, WCount = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++)
			{
				if (v[i + k][j + h] != B[i][j])
					BCount++;
				if (v[i + k][j + h] != W[i][j])
					WCount++;
			}
		}
		if (BCount < WCount) 
			count = BCount;
		else 
			count = WCount;

		if (count < min) min = count;

		h++;
		if (h > col - 8) {
			h = 0;
			k++;
		}
		if (k > row - 8) 
			break;
	}
	cout << min;

}
