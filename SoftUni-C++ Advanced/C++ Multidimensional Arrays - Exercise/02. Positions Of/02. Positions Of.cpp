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
	int row;
	cin >> row;
	cin.ignore();
	int col;
	cin >> col;
	cin.ignore();

	vector<vector<int>> vec;


	for (int i = 0; i < row; i++)
	{
		string line;

		int te;
		getline(cin, line);
		istringstream input(line);
		vector <int> temp;

		while (input >> te)
		{
			temp.push_back(te);
		}
		vec.push_back(temp);
	}

	int search;
	cin >> search;
	int counter = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			if (search == vec[i][j])
			{
				cout << i << " " << j << endl;
				counter++;

			}



		}

	}
	if (counter == 0)
	{
		cout << "not found" << endl;
		return 0;

	}

}
