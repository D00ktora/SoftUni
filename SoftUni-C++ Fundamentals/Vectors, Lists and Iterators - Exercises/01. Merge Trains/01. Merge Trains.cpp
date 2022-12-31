#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <vector>

using namespace std;


int main()
{
	vector<int> row1;
	vector<int> row2;
	string reverce;

	string input1;
	getline(cin, input1);
	string input2;
	getline(cin, input2);

	istringstream line1(input1);
	istringstream line2(input2);
	ostringstream outputLetters;
	ostringstream outputNumbers;
	int i;
	int number1 = 0, number2 = 0;
	while (line1 >> i)
	{
		row1.push_back(i);
	}
	while (line2 >> i)
	{
		row2.push_back(i);
	}

	int size1, size2, x;
	size1 = row1.size();
	size2 = row2.size();

	if (size1 > size2)
	{
		x = size1;
	}
	else
	{
		x = size2;
	}

	for (int y = 0; y < (size1 + size2);y++)
	{
		if (row1.size() > number1 && row2.size() > number2)
		{

			if (row1[number1] > row2[number2])
			{
				reverce += "A";
				outputNumbers << row1[number1] << " ";
				number1++;
			}
			else if (row2[number2] > row1[number1])
			{
				reverce += "B";
				outputNumbers << row2[number2] << " ";
				number2++;
			}
		}
		else if (row1.size() == number1)
		{
			/*outputLetters << "A";
			outputNumbers << row1[number1] << " ";
			number1++;*/
			reverce += "B";
			outputNumbers << row2[number2] << " ";
			number2++;

		}
		else if (row2.size() == number2)
		{
			reverce += "A";
			outputNumbers << row1[number1] << " ";
			number1++;
			/*outputLetters << "B";
			outputNumbers << row2[number2] << " ";
			number2++;*/
		}
		if (row1.size() < number1)
		{
			reverce += "B";
			outputNumbers << row2[number2] << " ";
			number2++;
		}
		if (row2.size() < number2)
		{
			reverce += "A";
			outputNumbers << row1[number1] << " ";
			number1++;
		}
	}

	for (int h = reverce.size();h >= 0;h--)
	{
		cout << reverce[h];
	}

	//cout << reverce << endl;
	cout << endl << outputNumbers.str() << endl;
	return 0;
}

