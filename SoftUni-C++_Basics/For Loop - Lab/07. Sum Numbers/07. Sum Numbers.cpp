#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, sum = 0, numb;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> numb;
		sum += numb;
	}

	cout << sum;


	return 0;
}
