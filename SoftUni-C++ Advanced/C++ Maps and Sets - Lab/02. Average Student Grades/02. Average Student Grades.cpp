#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <utility>
#include <map>
#include <set>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
	vector <string> namesInOrder;
	map <string, vector<double>> sAg;
	int loops;
	cin >> loops;
	cin.ignore();


	for (int i = 0; i < loops; i++)
	{
		string inp;
		getline(cin, inp);
		istringstream input(inp);
		string tempString;
		double tempDouble;
		input >> tempString;
		input >> tempDouble;

		if (namesInOrder.empty())
		{
			namesInOrder.push_back(tempString);
			sAg[tempString].push_back(tempDouble);
		}
		else
		{
			for (int itr = 0; itr < namesInOrder.size(); itr++)
			{
				if (namesInOrder[itr] == tempString)
				{
					sAg[tempString].push_back(tempDouble);
					break;
				}
				else if (itr == namesInOrder.size() - 1)
				{
					namesInOrder.push_back(tempString);
					sAg[tempString].push_back(tempDouble);
					break;
				}
			}
		}

	}
	cout << fixed << setprecision(2);

	for (int i = 0; i < namesInOrder.size(); i++)
	{
		double temp = 0;
		double average = 0;
		cout << namesInOrder[i] << " -> ";
		for (int itr = 0; itr < sAg[namesInOrder[i]].size(); itr++)
		{
			cout << sAg[namesInOrder[i]][itr] << " ";
			temp += sAg[namesInOrder[i]][itr];
		}
		average = temp / sAg[namesInOrder[i]].size();
		cout << "(avg: " << average << ")" << endl;
		average = 0;
	}



	return 0;
}
