#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
	int n, number, min = INT_MAX, max = INT_MIN;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> number;

		if (number > max) max = number;
		if (number < min) min = number;
	}
	cout << "Max number: " << max << endl;
	cout << "Min number: " << min << endl;



	return 0;
}
