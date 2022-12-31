#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;


int main()
{

	string input;
	cin >> input;
	int number = 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			int temp = input[i] - '0';
			number *= 10;

			number = number + temp;

		}
		else
		{
			if (number == 0)
			{
				cout << input[i];
			}
			else
			{
				for (int j = 0; j < number; j++)
				{
					cout << input[i];
				}
				number = 0;
			}
		}


	}
	return 0;
}

