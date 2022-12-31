#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double record, distanceInMeters, timeForOneMeterDistance;
	double temp, neededTimeForRecord;

	double totalNeededTime = 0;
	cin >> record >> distanceInMeters >> timeForOneMeterDistance;
	temp = floor(distanceInMeters / 15);
	temp *= 12.5;
	//double watherResistanceForMeter = 12.5 / 15;



	totalNeededTime += distanceInMeters * timeForOneMeterDistance + temp;
	double diference = abs(totalNeededTime - record);

	cout.setf(ios::fixed);
	cout.precision(2);
	if (totalNeededTime < record)
	{
		cout << "Yes, he succeeded! The new world record is " << totalNeededTime << " seconds.";
	}
	else
	{
		cout << "No, he failed! He was " << diference << " seconds slower.";
	}


	return 0;
}
