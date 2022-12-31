#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

void firstLast(vector<int>& numbers)
{
	while (true)
	{

		if (numbers.size() == 1)
		{
			cout << numbers.front();
			break;
		}
		else if (numbers.size() == 0)
		{
			break;
		}
		else
		{
			cout << numbers.front() + numbers.back() << " ";
			numbers.pop_back();
			numbers.erase(numbers.begin());
		}

	}
}
void readAndPush(vector<int>& numbers, int& convert, istringstream& input)
{
	while (input >> convert)
	{

		numbers.push_back(convert);
	}
}



int main()
{
	vector <int> numbers;
	string line;
	getline(std::cin, line);
	istringstream input(line);
	int convert;


	readAndPush(numbers, convert, input);
	firstLast(numbers);

	return 0;
}
