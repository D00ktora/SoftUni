#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	set<int>first;
	set<int>second;
	set<int>total;
	vector <int> numbers;

	int firstLoop, secondLoop;
	cin >> firstLoop;
	cin >> secondLoop;

	for (int i = 0; i < firstLoop; i++)
	{
		int temp;
		cin >> temp;
		first.insert(temp);
		if (find(numbers.begin(), numbers.end(), temp) == numbers.end())
		{
			numbers.push_back(temp);
		}



	}
	for (int i = 0; i < secondLoop; i++)
	{
		int temp;
		cin >> temp;
		second.insert(temp);
	}

	int firstSize = first.size();
	int secondSize = second.size();
	int iterations;
	if (firstSize > secondSize)
	{
		iterations = firstSize;
	}
	else
		iterations = secondSize;

	for (auto it = first.begin(); it != first.end(); it++)
	{
		for (auto iter = second.begin(); iter != second.end(); iter++)
		{
			if (*iter == *it)
			{
				total.insert(*it);
			}
		}
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		for (auto it = total.begin(); it != total.end(); it++)
		{
			if (*it == numbers[i])
			{
				cout << *it << " ";
				break;
			}
		}

	}

	return 0;
}
