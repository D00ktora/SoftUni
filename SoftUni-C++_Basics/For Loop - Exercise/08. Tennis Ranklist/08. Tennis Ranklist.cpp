#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfCompetishons, startingPoints, sum = 0, countWin = 0;
    cin >> numberOfCompetishons >> startingPoints;

    for (int i = 0; i < numberOfCompetishons; i++)
    {
        string position;
        cin >> position;

        if (position == "W")
        {
            sum += 2000;
            countWin++;

        }
        else if (position == "F")
        {
            sum += 1200;
        }
        else if (position == "SF")
        {
            sum += 720;
        }
    }
    int finalPoints = sum + startingPoints;
    double averagePoints = sum * 1.0 / numberOfCompetishons;
    double procentWins = (countWin * 1.0 / numberOfCompetishons) * 100;

    cout << "Final points: " << finalPoints << endl;
    cout << "Average points: " << floor(averagePoints) << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << procentWins << "%";


    return 0;
}
