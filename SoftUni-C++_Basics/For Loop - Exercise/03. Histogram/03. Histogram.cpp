#include <iostream>
using namespace std;


int main()
{
	int n, number;
	double p1 = 0.0, p2 = 0.0, p3 = 0.0, p4 = 0.0, p5 = 0.0;
	double procent1, procent2, procent3, procent4, procent5;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> number;

		if (number < 200)
		{
			p1++;
		}
		else if (number >= 200 && number <= 399)
		{
			p2++;
		}
		else if (number >= 400 && number <= 599)
		{
			p3++;
		}
		else if (number >= 600 && number <= 799)
		{
			p4++;
		}
		else if (number >= 800)
		{
			p5++;
		}
	}
	procent1 = (p1 / n) * 100;
	procent2 = (p2 / n) * 100;
	procent3 = (p3 / n) * 100;
	procent4 = (p4 / n) * 100;
	procent5 = (p5 / n) * 100;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << procent1 << "%" << endl;
	cout << procent2 << "%" << endl;
	cout << procent3 << "%" << endl;
	cout << procent4 << "%" << endl;
	cout << procent5 << "%" << endl;
	return 0;
}
