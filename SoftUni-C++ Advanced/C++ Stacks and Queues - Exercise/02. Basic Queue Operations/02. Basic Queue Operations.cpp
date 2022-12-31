#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;


int main()
{

	string inp;
	getline(cin, inp);
	istringstream sinp(inp);
	queue<int>stack;
	int numberToPush, numberToPop, numberToSearch;
	sinp >> numberToPush;
	sinp >> numberToPop;
	sinp >> numberToSearch;

	getline(cin, inp);
	istringstream numbers(inp);
	int temp;
	int min = INT_MAX;
	while (numbers >> temp)
	{
		stack.push(temp);
	}
	if (stack.empty())
	{
		cout << "0";
		return 0;
	}
	for (int i = 0; i < numberToPop; i++)
	{

		temp = stack.front();

		/*if (temp == numberToSearch)
		{
			cout << "true" << endl;
			return 0;
		}*/
		stack.pop();
	}
	if (stack.empty())
	{
		cout << "0";
		return 0;
	}

	while (!stack.empty())
	{
		temp = stack.front();
		if (temp == numberToSearch)
		{
			cout << "true" << endl;
			return 0;
		}

		if (temp < min)
		{
			min = temp;
		}
		stack.pop();
	}


	cout << min;



	return 0;
}

