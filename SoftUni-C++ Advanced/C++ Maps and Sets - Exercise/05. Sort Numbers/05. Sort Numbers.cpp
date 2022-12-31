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






int main()
{
	set<double>numbers;
	double number;
	string in;
	getline(cin, in);
	istringstream input(in);
	while (input >> in)
	{
		number = stod(in);
		numbers.insert(number);
	}
	bool first = true;
	for (auto itr = numbers.begin(); itr != numbers.end(); itr++)
	{
		if (first)
		{
			first = false;
			cout << *itr;
		}
		else
		{
			cout << " <= " << *itr;
		}
	}
	return 0;
}
