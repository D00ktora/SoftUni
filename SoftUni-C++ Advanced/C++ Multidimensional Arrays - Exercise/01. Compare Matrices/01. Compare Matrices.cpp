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
	vector<vector<int>> matrix1;
	vector<vector<int>> matrix2;
	int num;
	cin >> num;
	cin.ignore();

	vector<int>temp;
	for (int i = 0; i < num; i++)
	{
		int val;
		string in;
		getline(cin, in);
		istringstream input(in);

		while (input >> val)
		{
			temp.push_back(val);
		}
		matrix1.push_back(temp);
		temp.clear();
	}


	temp.clear();

	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; i++)
	{
		int val;
		string in;
		getline(cin, in);
		istringstream input(in);

		while (input >> val)
		{
			temp.push_back(val);
		}
		matrix2.push_back(temp);
		temp.clear();
	}


	if (matrix1.size() == matrix2.size())
	{
		for (int i = 0; i < matrix1.size(); i++)
		{
			if (matrix1[i].size() == matrix2[i].size())
			{
				for (int j = 0; j < matrix1[i].size(); j++)
				{
					if (matrix1[i][j] != matrix2[i][j])
					{
						cout << "not equal" << endl;
						return 0;
					}

				}
			}
			else
			{
				cout << "not equal" << endl;
				return 0;
			}
		}
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
		return 0;
	}


	return 0;
}
