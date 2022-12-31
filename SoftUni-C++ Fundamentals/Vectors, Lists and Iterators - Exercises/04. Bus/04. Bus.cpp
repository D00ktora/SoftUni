#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>

using namespace std;


int main()
{


	int numberOfBuses;
	cin >> numberOfBuses;
	int position;
	vector<int> hours;
	string input;
	getline(cin >> ws, input);
	istringstream strInput(input);
	int trainHour;
	cin >> trainHour;

	for (int i = 0; i < numberOfBuses; i++)
	{
		int temp;
		strInput >> temp;
		hours.push_back(temp);

	}
	int diference = INT_MAX;

	for (int i = 0; i < numberOfBuses; i++)
	{
		int temp = 0;
		int result = trainHour - hours[i];

		if (result >= 0)
		{
			temp = result;
		}
		if (temp >= 0 && temp <= diference)
		{
			diference = temp;
			position = i;
		}
	}
	cout << position + 1;
	return 0;
}

