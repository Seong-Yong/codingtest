#include <iostream>
using namespace std;
int main()
{
	int fi, se, th, total;
	cin >> fi;
	cin >> se;
	cin >> th;
	if (fi >= 1 && fi <= 6 && se >= 1 && se <= 6 && th >= 1 && th <= 6) {
		if (fi==se && fi==th&&se==th) {
			total = 10000 + fi * 1000;
			cout << total << endl;
		}
		else if (fi == se && fi != th) {
			total = 1000 + fi * 100;
			cout << total << endl;
		}
		else if (th != se && th == fi) {
			total = 1000 + fi * 100;
			cout << total << endl;
		}
		else if (fi != se && se == th) {
			total = 1000 + se * 100;
			cout << total << endl;
		}
		else {
			if (fi > se && fi > th) {
				total = fi * 100;
				cout << total << endl;
			}
			else if (se > fi && se > th) {
				total = se * 100;
				cout << total << endl;
			}
			else {
				total = th * 100;
				cout << total << endl;
			}
				
		}
		
		
	}
}