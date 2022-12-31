#include <iostream>
#include <climits>
using namespace std;


int main()
{
	int n, max = INT_MIN, min = INT_MAX, nextvalue;
	cin >> n;

	for (int i = 0; i < n;i++)
	{
		cin >> nextvalue;

		if (nextvalue > max)
		{
			max = nextvalue;
		}
		if (nextvalue < min)
		{
			min = nextvalue;
		}
	}
	cout << min << " " << max;

	return 0;
}
