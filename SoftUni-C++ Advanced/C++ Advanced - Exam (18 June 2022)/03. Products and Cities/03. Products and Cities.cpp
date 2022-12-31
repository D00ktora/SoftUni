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

	map <string, double> list;

	int numberOfCitys;
	cin >> numberOfCitys;

	bool isCityThere = false;
	while (numberOfCitys != 0)
	{
		double sum = 0;
		string city;
		double price, item;
		cin >> city;
		cin >> price >> item;
		sum = price * item;
		for (auto it = list.begin(); it != list.end(); it++)
		{
			if ((*it).first == city)
			{
				isCityThere = true;
			}


		}



		if (list.empty())
		{
			list[city] += sum;
			numberOfCitys--;
			continue;
		}
		else
		{
			list[city] += sum;
		}

		if (!isCityThere)
			numberOfCitys--;
		isCityThere = false;
	}


	for (auto it = list.begin(); it != list.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}
