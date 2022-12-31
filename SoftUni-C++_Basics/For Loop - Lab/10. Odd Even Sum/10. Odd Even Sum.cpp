#include <iostream>
using namespace std;

int main()
{
	int n, odd = 0, even = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		if (i % 2 == 0)
		{
			even += number;
		}
		else
		{
			odd += number;
		}
	}

	int difference = abs(even - odd);

	if (even == odd) {
		cout << "Yes" << endl;
		cout << "Sum = " << even;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << difference;
	}

	return 0;
}
