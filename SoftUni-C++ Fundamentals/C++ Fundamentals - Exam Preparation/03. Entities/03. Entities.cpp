#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>
#include <list>

using namespace std;


int main()
{
	string input;
	vector<vector<string>>row;
	getline(cin, input);
	int index;
	int counter = 0;
	string current;
	string output;
	//size_t size=0;
	while (input != "end")
	{
		vector <string>colom;
		istringstream inputStr(input);
		while (inputStr >> current)
		{
			if (input == "end")
			{
				break;
			}
			colom.push_back(current);


		}
		if (input == "end")
		{
			break;
		}

		row.push_back(colom);

		getline(cin, input);

	}


	getline(cin, input);

	for (int i = 0; i < row[0].size(); i++)
	{
		if (row[0][i] == input)
		{
			index = i;
			//cout << index;
			break;
		}
	}

	for (int j = 0; j < row.size(); j++)
	{
		int tempCounter = 0;
		for (int n = 1; n < row.size();n++)
		{
			//cout << row[n][index];
			if (row[j][index] == row[n][index])
			{
				tempCounter++;
				if (tempCounter > counter)
				{
					counter = tempCounter;
					output = row[n][index];
				}
			}
		}

	}
	cout << output << " " << counter;

	return 0;
}

