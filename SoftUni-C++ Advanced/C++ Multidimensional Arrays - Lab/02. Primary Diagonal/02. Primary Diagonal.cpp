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

	int number;
	cin >> number;



	int** arr = new int* [number];

	for (int i = 0; i < number; i++)
	{
		arr[i] = new int[number];
	}

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			int temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}
	int sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += arr[i][i];
	}
	cout << sum;
	return 0;
}
