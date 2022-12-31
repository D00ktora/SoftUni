#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double recordInSec, distanceInMeters, timeInSecForOneMeter;

    cin >> recordInSec >> distanceInMeters >> timeInSecForOneMeter;

    double timeForClim = distanceInMeters * timeInSecForOneMeter;

    double slowingDown = floor(distanceInMeters / 50.0);
    double timeSlowingDown = slowingDown * 30;
    double clearTime = timeForClim + timeSlowingDown;
    double diference = recordInSec - clearTime;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (clearTime >= recordInSec)
    {
        cout << "No! He was " << abs(diference) << " seconds slower.";
    }
    else
    {
        cout << "Yes! The new record is " << clearTime << " seconds.";
    }


    return 0;
}
