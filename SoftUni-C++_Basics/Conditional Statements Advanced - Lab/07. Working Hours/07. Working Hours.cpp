#include <iostream>
using namespace std;


int main()
{
	int hour;
	string dayOfWeek;
	cin >> hour >> dayOfWeek;

	if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" || dayOfWeek == "Saturday")
	{
		if (hour >= 10 && hour <= 18)
		{
			cout << "open";
		}
		else
		{
			cout << "closed";
		}
	}
	else
	{
		cout << "closed";
	}

	return 0;
}
