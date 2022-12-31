#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, b, c;

	cin >> a >> b >> c;

	double discriminant = (b * b) - (4 * a * c);
	double x1, x2;

	if (discriminant > 0)
	{
		x1 = (b * -1 + sqrt(discriminant)) / (2 * a);
		x2 = (b * -1 - sqrt(discriminant)) / (2 * a);
		cout << x1 << " " << x2;
	}
	else if (discriminant < 0)
	{
		cout << "no roots";
	}
	else if (discriminant == 0)
	{
		x1 = (b * -1 + sqrt(discriminant)) / (2 * a);
		cout << x1;
	}

	return 0;
}
