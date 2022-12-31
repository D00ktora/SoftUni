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

void printInputInReversOrder(vector<int>& numbers)
{
	if (numbers.size() != 0)
	{
		for (int i = numbers.size(); i > 0; i--)
		{
			cout << numbers[i - 1] << ' ';
		}
	}
	else
	{
		cout << "empty";
	}

}

void readAndCheckAndPush(vector<int>& numbers, int& convert, istringstream& input)
{
	while (input >> convert)
	{
		if (convert < 0)
		{
			continue;
		}
		else
		{
			numbers.push_back(convert);
		}


	}
}

int main()
{
	vector <int> numbers;
	string line;
	getline(std::cin, line);
	istringstream input(line);
	int convert;

	readAndCheckAndPush(numbers, convert, input);
	printInputInReversOrder(numbers);

	return 0;
}
