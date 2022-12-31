#include <iostream>
#include <vector>
#include <sstream>
using namespace std;



class listOfWords
{
private:
	vector <string> list;
public:
	listOfWords(string);


	void getShiftedSentence(int numb)
	{
		vector<string>readyForPrint;
		for (int i = this->list.size()-numb; i < this->list.size(); i++)
		{
			readyForPrint.push_back(this->list[i]);
			
		}
		for (int i = 0; i < numb; i++)
		{
			this->list.pop_back();
		}
		for (int i = 0; i < this->list.size(); i++)
		{
			readyForPrint.push_back(this->list[i]);
		}

		for (int i = 0; i < readyForPrint.size(); i++)
		{
			cout << readyForPrint[i] << endl;
		}
	}
};

listOfWords::listOfWords(string in)
{
	string temp;
	istringstream input(in);
	while (input >> temp)
	{
		this->list.push_back(temp);
	}
}

int main()
{

	string sentance; 
	getline(cin, sentance);
	int number;
	cin >> number;

	listOfWords list(sentance);

	list.getShiftedSentence(number);

	return 0;
}

