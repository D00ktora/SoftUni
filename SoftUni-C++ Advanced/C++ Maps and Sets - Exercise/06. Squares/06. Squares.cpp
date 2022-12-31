#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <unordered_set>

using namespace std;
bool isPerfectSquare(double x)
{
	double sr = sqrt(x);
	return((sr - floor(sr))) == 0;
}
int main()
{
	map<double, int> numbers;
	stack<double>descending;
	string in;
	double number;
	getline(cin, in);
	istringstream input(in);

	while (input >> number)
	{
		if (isPerfectSquare(number))
		{
			numbers[number]++;
		}
	}
	for (auto itr = numbers.begin(); itr != numbers.end(); itr++)
	{
		for (int i = 0; i < (*itr).second; i++)
		{
			descending.push((*itr).first);
		}
	}

	while (!descending.empty())
	{
		cout << descending.top() << " ";
		descending.pop();
	}

	return 0;
}
