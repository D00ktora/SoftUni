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
	set<double, greater<double>> numbers;
	string in;
	getline(cin, in);
	istringstream input(in);
	stack<double> forPrint;
	double number;

	while (input >> number)
	{
		numbers.insert(number);
	}
	int i = 3;

	for (auto itr = numbers.begin(); itr != numbers.end() && i; itr++, i--)
	{
		cout << *itr << " ";
	}


	return 0;
}
