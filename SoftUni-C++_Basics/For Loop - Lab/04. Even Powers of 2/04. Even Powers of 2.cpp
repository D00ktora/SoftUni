#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, number;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			number = pow(2, i);
			cout << number << endl;
		}
	}
	return 0;
}
