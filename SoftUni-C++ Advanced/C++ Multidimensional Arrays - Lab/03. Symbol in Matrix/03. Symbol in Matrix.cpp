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
	int arr;
	cin >> arr;
	cin.ignore();

	vector<vector<char>> vec;

	for (int i = 0; i < arr; i++)
	{
		string line;
		getline(cin, line);
		vector <char> temp;
		for (int j = 0; j < line.size(); j++)
		{
			temp.push_back(line[j]);
		}
		vec.push_back(temp);
	}

	char search;
	cin >> search;
	for (int i = 0; i < arr; i++)
	{
		for (int j = 0; j < arr; j++)
		{
			if (search == vec[i][j])
			{
				cout << '(' << i << ", " << j << ')' << endl;
				return 0;

			}



		}
	}
	cout << search << " does not occur in the matrix" << endl;
	return 0;
}
