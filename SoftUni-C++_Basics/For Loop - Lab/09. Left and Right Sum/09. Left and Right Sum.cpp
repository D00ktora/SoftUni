#include <iostream>
#include <cmath>
using namespace std;




int main()
{
	int n, number, leftSum = 0, RightSum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> number;
		leftSum += number;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		RightSum += number;
	}
	int diference = abs(leftSum - RightSum);
	if (leftSum == RightSum)
	{

		cout << "Yes, sum = " << leftSum << endl;
	}
	else
	{
		cout << "No, diff = " << diference << endl;
	}




	return 0;
}
