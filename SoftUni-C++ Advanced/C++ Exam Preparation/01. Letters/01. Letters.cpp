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
	string text;
	getline(cin, text);
	istringstream input(text);
	set<string> sortedInput;
	string tempForText;
	string temppo;
	// Push input to the set, that store alpfabeticaly.
	while (input >> tempForText)
	{

		for (int i = 0; i < tempForText.size(); i++)
		{
			if (tempForText[i] != '.' && tempForText[i] != ',' && tempForText[i] != '!' && tempForText[i] != '?')
			{
				temppo += tempForText[i];
			}
		}
		sortedInput.insert(temppo);
		temppo.clear();
	}

	//read input till input = '.'
	char in;
	cin >> in;
	bool flag = false;
	while (true)
	{
		if (in == '.')
		{
			break;
		}
		string everWord;
		for (auto itr = sortedInput.begin(); itr != sortedInput.end(); itr++)
		{
			everWord = *itr;
			for (int i = 0; i < everWord.size(); i++)
			{
				if (in > 96 && in < 123)
				{
					if (everWord[i] == in || everWord[i] == in - 32)
					{
						flag = true;
						break;
					}
				}
				if (in > 64 && in < 91)
				{
					if (everWord[i] == in || everWord[i] == in + 32)
					{
						flag = true;
						break;
					}
				}

			}
			if (flag)
			{
				for (int i = 0; i < everWord.size(); i++)
				{
					if (everWord[i] != '.' || everWord[i] != ',' || everWord[i] != '!' || everWord[i] != '?')
					{
						cout << everWord[i];
					}
				}
				cout << ' ';
			}

			flag = false;

		}
		cout << endl;
		cin >> in;
	}
	return 0;
}
