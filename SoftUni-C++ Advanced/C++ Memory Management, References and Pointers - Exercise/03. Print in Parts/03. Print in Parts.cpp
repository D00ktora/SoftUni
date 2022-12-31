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

void readArray(int& r, int& c, vector<vector<int>>& arr, vector<int>& temp)
{


	for (int i = 0; i < r; i++)
	{
		string line;
		getline(std::cin, line);
		istringstream input(line);

		for (int j = 0; j < c; j++)
		{
			int tempp;
			input >> tempp;
			temp.push_back(tempp);
		}
		arr.push_back(temp);
		temp.clear();
	}
}

void print(int& r, int& c, vector<vector<int>>& arr)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}



int main()
{
	vector<vector<int>> arr;
	vector<int>temp;
	int convert;
	int r, c;
	cin >> r >> c;
	cin.ignore();
	readArray(r, c, arr, temp);

	cin >> r >> c;
	print(r, c, arr);



	return 0;
}
