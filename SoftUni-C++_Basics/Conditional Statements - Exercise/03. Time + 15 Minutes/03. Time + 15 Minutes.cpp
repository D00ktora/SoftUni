#include <iostream>
using namespace std;
int main()
{

	int hours, minutes, minPlus15, minGreaderThen60;
	cin >> hours >> minutes;
	minPlus15 = minutes + 15;
	if (minPlus15 > 59) {
		hours++;
	}
	if (hours >= 24) {
		hours = hours - 24;
	}
	minGreaderThen60 = minPlus15 % 60;
	cout << hours;
	if (minPlus15 % 60 < 10) {
		cout << ":0" << minGreaderThen60;
	}
	else {
		cout << ":" << minGreaderThen60;
	}


	return 0;
}
