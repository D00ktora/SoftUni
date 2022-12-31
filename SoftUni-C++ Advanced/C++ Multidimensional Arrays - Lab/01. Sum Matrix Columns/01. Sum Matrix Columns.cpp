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
	int rows, coloms;
	string in;
	getline(cin, in);
	istringstream input(in);

	input >> rows;
	input >> coloms;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[coloms];
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloms; j++)
		{
			int temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	for (int i = 0; i < coloms; i++)
	{
		int sum = 0;
		for (int j = 0; j < rows; j++)
		{
			sum += arr[j][i];
		}
		cout << sum << endl;
	}

	return 0;
}
