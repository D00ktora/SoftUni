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
	int row, col;
	cin >> row;
	cin >> col;
	cin.ignore();

	vector<vector<char>> matrix;
	vector<char>temp;

	for (int j = 0; j < row; j++)
	{
		string line;
		getline(cin, line);
		istringstream input(line);
		char tem;
		while (input >> tem)
		{
			temp.push_back(tem);
		}
		matrix.push_back(temp);
		temp.clear();
	}


	int counter = 0;
	for (int i = 0; i < matrix.size() - 1; i++)
	{
		for (int j = 0; j < matrix[i].size() - 1; j++)
		{
			if (matrix[i][j] == matrix[i][j + 1] && matrix[i][j] == matrix[i + 1][j] && matrix[i][j] == matrix[i + 1][j + 1])
			{
				counter++;
			}
		}
	}

	cout << counter;

	return 0;
}
