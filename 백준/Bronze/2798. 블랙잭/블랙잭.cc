#include<iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int count,max,num,result=0;
    vector<int> list;
    cin >> count>>max;
 
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        list.push_back(num);
    }
    for (int i = 0; i < list.size() ; i++) {
        for (int j = i + 1; j < list.size() ; j++)
        {
            for (int k = j + 1; k < list.size() ; k++)
            {
                int total = list[i] + list[j] + list[k];
                if ((result < total) && total <= max)
                    result = total;
            }
        }
    }
    cout << result << '\n';

}