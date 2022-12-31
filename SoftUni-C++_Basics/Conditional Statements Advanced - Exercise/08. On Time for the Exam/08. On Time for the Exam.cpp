#include <iostream>
using namespace std;

int main()
{
	int exsamHour, exsamMinute, araivHour, ariveMinute;

	cin >> exsamHour >> exsamMinute >> araivHour >> ariveMinute;

	int exsamHourToMin = exsamHour * 60;
	int exsamTime = exsamHourToMin + exsamMinute;
	int araivingHourToMin = araivHour * 60;
	int araivingTime = araivingHourToMin + ariveMinute;

	int timeLeft = exsamTime - araivingTime;
	int absTime = abs(exsamTime - araivingTime);
	int absHours = absTime / 60;
	int absMin = absTime % 60;

	if (timeLeft >= 0 && timeLeft <= 30)
	{
		cout << "On time" << endl;
	}
	else if (timeLeft > 30)
	{
		cout << "Early" << endl;
	}
	else if (timeLeft < 0)
	{
		cout << "Late" << endl;
	}

	if (timeLeft != 0)
	{
		if (timeLeft > 0 && absHours == 0)
		{
			if (absMin < 10)
			{
				//cout << "0" << absMin << " minutes before the start";
				cout << absMin << " minutes before the start";
			}
			else
			{
				cout << absMin << " minutes before the start";
			}
		}

		else if (timeLeft > 0 && absHours != 0)
		{
			cout << absHours;
			if (absMin < 10)
			{
				cout << ":0" << absMin << " hours before the start";
			}
			else
			{
				cout << ":" << absMin << " hours before the start";
			}
		}
		else if (timeLeft < 0 && absHours == 0)
		{
			if (absMin < 10)
			{
				//cout << "0" << absMin << " minutes after the start";
				cout << absMin << " minutes after the start";
			}
			else
			{
				cout << absMin << " minutes after the start";
			}
		}

		else if (timeLeft < 0 && absHours != 0)
		{
			cout << absHours;
			if (absMin < 10)
			{
				cout << ":0" << absMin << " hours after the start";
			}
			else
			{
				cout << ":" << absMin << " hours after the start";
			}
		}

	}



	return 0;
}
