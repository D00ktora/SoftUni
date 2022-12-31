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
	int row1, row2;
	cin >> row1;
	cin.ignore();
	string col1;
	getline(cin, col1);
	istringstream input1(col1);
	int j = 0;
	int** arr1 = new int* [row1];



	for (int i = 0; i < row1; i++)
	{
		int temp;
		if (row1 > 1 && i > 0)
		{
			string tempp;
			getline(cin, tempp);
			input1.clear();
			input1.str(tempp);
		}
		arr1[i] = new int[10];
		while (input1 >> temp)
		{
			arr1[i][j] = temp;
			j++;
		}
		j = 0;
	}



	//for (int i = 0; i < row1; i++)
	//{
	//	for (int y = 0; y < j; y++)
	//	{
	//		cout << arr1[i][y];
	//	}
	//}




	j = 0;




	int counter = 0;
	cin >> row2;
	cin.ignore();
	string col2;
	getline(cin, col2);
	istringstream input2(col2);
	int** arr2 = new int* [row2];


	for (int i = 0; i < row2; i++)
	{
		int temp;

		arr2[i] = new int[10];
		if (row2 > 1 && i > 0)
		{
			string tempp;
			getline(cin, tempp);
			input2.clear();
			input2.str(tempp);
		}
		while (input2 >> temp)
		{
			arr2[i][j] = temp;
			j++;
			if (i == 0)
				counter++;
		}

		j = 0;

	}

	/*for (int i = 0; i < row2; i++)
	{
		for (int y = 0; y < j; y++)
		{
			cout << arr2[i][y];
		}
	}*/


	if (row1 == row2)
	{
		for (int i = 0; i < row2; i++)
		{
			for (int y = 0; y < counter; y++)
			{
				if (arr1[i][y] != arr2[i][y])
				{
					cout << "not equal";
					return 0;
				}
			}
		}
		cout << "equal";
	}

	return 0;
}
