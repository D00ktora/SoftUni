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
	string line;
	getline(cin, line);
	char c;
	string output;

	for (int i = 0; i < line.size(); i++)
	{
		c = line[i];
		if (c > 64 && c < 91)
		{
			c += 32;
			output += c;
		}
		else
		{
			output += c;
		}

	}
	cout << output << endl;
	output.clear();

	for (int i = 0; i < line.size(); i++)
	{
		c = line[i];
		if (c > 96 && c < 123)
		{
			c -= 32;
			output += c;
		}
		else
		{
			output += c;
		}

	}

	cout << output;

	return 0;
}
