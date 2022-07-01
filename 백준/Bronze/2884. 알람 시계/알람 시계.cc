#include <iostream>
using namespace std;
int main()
{
	int hour, min;
	cin >> hour;
	cin >> min;
	if (hour >= 0 && hour <= 23 && min >= 0 && min <= 59)
	{
		if (min < 45&&hour>0) {
			hour--;
			min += 15;
			cout << hour <<'\n' << min << endl;
		}
		else if (min < 45 && hour == 0) {
			hour = 23;
			min += 15;
			cout << hour <<'\n' << min << endl;
		}
		else {
			min -= 45;
			cout << hour <<'\n' << min << endl;
		}
	}
}