#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	string nameOfSerial;
	int episodTime, breackTime;
	double timeForLunch, timeForBreack;
	getline(cin, nameOfSerial);
	cin >> episodTime >> breackTime;
	double time1 = 1.0 / 8.0;
	double time2 = 1.0 / 4.0;
	timeForLunch = breackTime * time1;
	timeForBreack = breackTime * time2;
	double timeLeft = breackTime - (timeForBreack + timeForLunch);
	double isTimeEnoth = abs(episodTime - timeLeft);

	if (timeLeft >= episodTime)
	{
		cout << "You have enough time to watch " << nameOfSerial << " and left with " << ceil(isTimeEnoth) << " minutes free time.";
	}
	else
	{
		cout << "You don't have enough time to watch " << nameOfSerial << ", you need " << ceil(isTimeEnoth) << " more minutes.";

	}

	return 0;
}
