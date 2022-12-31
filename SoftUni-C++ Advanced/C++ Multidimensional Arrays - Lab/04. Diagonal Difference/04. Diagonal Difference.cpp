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
	int num;
	cin >> num;
	cin.ignore();
	vector<vector<int>> matrix;

	for (int i = 0; i < num; i++)
	{
		string line;
		getline(cin, line);
		istringstream input(line);
		vector <int> temp;
		int te;
		for (int j = 0; j < num; j++)
		{
			input >> te;
			temp.push_back(te);
		}
		matrix.push_back(temp);
	}

	int sumPrimer = 0;
	int sumsecond = 0;
	for (int i = 0; i < num; i++)
	{
		sumPrimer += matrix[i][i];
	}

	for (int i = 0; i < num;i++)
	{
		for (int j = num - 1; j >= 0; j--)
		{
			sumsecond += matrix[i][j];
			i++;
		}
	}

	int total = abs(sumPrimer - sumsecond);

	cout << total;

	return 0;
}
