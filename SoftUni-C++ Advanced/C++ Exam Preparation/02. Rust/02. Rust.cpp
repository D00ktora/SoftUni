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

	vector<vector<char>> matrix;
	vector<char> innerMatrix;
	string line;

	for (size_t i = 0; i < 10; i++)
	{
		getline(cin, line);
		for (size_t j = 0; j < 10; j++)
		{
			innerMatrix.push_back(line[j]);
		}
		matrix.push_back(innerMatrix);
		innerMatrix.clear();
	}


	/*for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}*/



	int numberOfRuns;
	cin >> numberOfRuns;

	/*



	====================

	1
	!?......?!
	?........?
	..........
	..........
	..........
	..........
	..........
	..........
	?........?
	!?......?!
	2
	!!?....?!!
	!?......?!
	..........
	..........
	..........
	..........
	..........
	..........
	!?......?!
	!!?....?!!
	3
	!!!?..?!!!
	!!?....?!!
	??......??
	..........
	..........
	..........
	..........
	??......??
	!!?....?!!
	!!!?..?!!!
	4
	!!!!??!!!!
	!!!?..?!!!
	!!?....?!!
	??......??
	..........
	..........
	??......??
	!!?....?!!
	!!!?..?!!!
	!!!!??!!!!
	5
	!!!!!!!!!!
	!!!!??!!!!
	!!!?..?!!!
	!!?....?!!
	??......??
	??......??
	!!?....?!!
	!!!?..?!!!
	!!!!??!!!!
	!!!!!!!!!!

	*/
	for (size_t a = 0; a < numberOfRuns; a++)
	{
		for (size_t i = 0; i < 10; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				if (matrix[i][j] == '!')
				{
					if ((i - 1 < 10) && j < 10 && (matrix[i - 1][j] != '!') && (matrix[i - 1][j] != '#'))
					{
						matrix[i - 1][j] = '?';
					}
					if ((i + 1 < 10) && j < 10 && (matrix[i + 1][j] != '!') && (matrix[i + 1][j] != '#'))
					{
						matrix[i + 1][j] = '?';
					}
					if (i < 10 && (j - 1 < 10) && (matrix[i][j - 1] != '!') && (matrix[i][j - 1] != '#'))
					{
						matrix[i][j - 1] = '?';
					}
					if (i < 10 && (j + 1 < 10) && (matrix[i][j + 1] != '!') && (matrix[i][j + 1] != '#'))
					{
						matrix[i][j + 1] = '?';
					}
				}
			}
		}
		for (size_t i = 0; i < 10; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				if (matrix[i][j] == '?')
				{
					matrix[i][j] = '!';
				}
			}
		}
	}




	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}


	return 0;
}
