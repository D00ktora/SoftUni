#include <iostream>
#include <string>
using namespace std;



int main()
{
	string nameOfActor;
	double academyPoints, totalPoints = 0, givenPoints, sumOfPoints = 0;
	int numberOfGidges;
	getline(cin >> ws, nameOfActor);

	cin >> academyPoints >> numberOfGidges;
	cout.setf(ios::fixed);
	cout.precision(1);
	for (int i = 1; i <= numberOfGidges; i++)
	{
		string gudgeName;
		getline(cin >> ws, gudgeName);

		double points;
		cin >> points;
		givenPoints = (gudgeName.length() * points) / 2;
		sumOfPoints += givenPoints;

		if (sumOfPoints + academyPoints > 1250.5)
		{
			cout << "Congratulations, " << nameOfActor << " got a nominee for leading role with " << sumOfPoints + academyPoints << "!";
			break;
		}

	}
	if (sumOfPoints + academyPoints < 1250.5)
	{
		double pointsNeeded = 1250.5 - (sumOfPoints + academyPoints);
		cout << "Sorry, " << nameOfActor << " you need " << pointsNeeded << " more!";
	}

	return 0;
}
