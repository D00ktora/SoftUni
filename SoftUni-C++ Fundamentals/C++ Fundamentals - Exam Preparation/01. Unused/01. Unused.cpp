#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;


int main()
{

	string input;
	cin >> input;
	string alfabetic = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < input.size();i++)
	{

		alfabetic.erase(remove(alfabetic.begin(), alfabetic.end(), input[i]), alfabetic.end());


		/*for (int j = 0; j < alfabetic.size();j++)
		{
			if (input[i] == alfabetic[j])
			{

			}
		}*/

	}

	cout << alfabetic;
	return 0;
}

