#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, number, maxNumber = INT_MIN, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> number;
		sum += number;
		if (maxNumber < number)
		{
			maxNumber = number;
		}
	}
	if (sum - maxNumber == maxNumber)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << maxNumber;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(maxNumber - abs(maxNumber - sum));
	}




	return 0;
}
