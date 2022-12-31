#include <iostream>

using namespace std;

int main()
{
	int number;

	for (number = 0; number < 1000;number++)
	{
		if (number % 10 == 7)
		{
			cout << number << endl;
		}
	}



	return 0;
}
