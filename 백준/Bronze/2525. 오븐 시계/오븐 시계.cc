#include <iostream>
using namespace std;
int main()
{
	int hour, min, time;
	cin >> hour;
	cin >> min;
	cin >> time;
	if (hour >= 0 && hour <= 23 && min >= 0 && min <= 59 && time >= 0 && time <= 1000)
	{
		if ((min + time) < 60) {
			cout << hour << " " << min + time << endl;
		}
		else if ((min + time) >= 60) {
			hour = hour+(min + time) / 60;
			if (hour >= 24) {
				hour -= 24;
				cout << hour << " " << (min + time) % 60 << endl;
			}
			else {
				cout << hour << " " << (min + time) % 60 << endl;
			}
		}
	}

}