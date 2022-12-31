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

void printData(const pair<string, pair<string, string>>& p)
{
	cout << p.first << "," << p.second.first << "," << p.second.second << endl;
}


int main()
{

	list <pair <string, pair<string, string>>> p;

	while (true)
	{
		string line;
		getline(cin, line);
		if (line == ".")
			break;
		istringstream istr(line);
		pair<string, pair<string, string>> buf;
		pair<string, string>& cordinates = buf.second;
		getline(istr, buf.first, ',');
		getline(istr, cordinates.first, ',');
		getline(istr, cordinates.second, ',');
		p.push_back(buf);
	}



	while (true)
	{
		string line;
		getline(cin, line);
		if (line == ".")
		{
			break;
		}
		bool isCity = *line.begin() > '9';
		pair<string, string> cordinates;
		if (!isCity)
		{
			istringstream istr(line);
			istr >> cordinates.first >> cordinates.second;
		}
		auto it = p.begin();
		while (it != p.end())
		{
			if (isCity)
			{
				if (it->first == line)
				{
					printData(*it);
					break;
				}
			}
			else
			{
				if (it->second == cordinates)
				{
					printData(*it);
				}
			}

			it++;
		}

	}
	return 0;
}
