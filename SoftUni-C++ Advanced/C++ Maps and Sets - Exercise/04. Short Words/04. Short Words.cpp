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
	set<string> shortWords;
	string in;
	getline(cin, in);
	for_each(in.begin(), in.end(), [](char& c)
		{
			c = ::tolower(c);
		});
	istringstream input(in);

	while (input >> in)
	{
		if (in.size() < 5)
		{
			shortWords.insert(in);
		}
	}

	bool first = true;
	for (auto itr = shortWords.begin(); itr != shortWords.end(); itr++)
	{
		if (first)
		{
			first = false;
			cout << *itr;
		}
		else
		{
			cout << ", " << *itr;
		}
	}



	return 0;
}

