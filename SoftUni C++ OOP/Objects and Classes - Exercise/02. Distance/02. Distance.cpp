#include <iostream>
#include <vector>
#include <sstream>
#include<cmath>
#include<iomanip>
using namespace std;

class distanceBtweenTwoPoints
{
public:
	int point1, point2;

	distanceBtweenTwoPoints(int, int, int, int);
	double result()
	{
		int temp1 = this->point1 * this->point1;
		int temp2 = this->point2 * this->point2;
		double result = sqrt(temp1 + temp2);


		cout << fixed << setprecision(3);
		cout << result;
		return result;
	}
};


distanceBtweenTwoPoints::distanceBtweenTwoPoints(int p1, int p2, int p3, int p4)
{
	this->point1 = p3 - p1;
	this->point2 = p4 - p2;
}

int main()
{

	int point1, point2, point3, point4;
	cin >> point1 >> point2 >> point3 >> point4;

	distanceBtweenTwoPoints measure(point1, point2, point3, point4);
	measure.result();

	return 0;
}

