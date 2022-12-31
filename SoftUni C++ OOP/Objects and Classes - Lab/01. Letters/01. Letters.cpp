#include <iostream>
#include <vector>
#include <sstream>
#include<cmath>
#include <set>
using namespace std;
class Words
{
	string sentance;
	set <string> word;
	set <string> sortedWord;
public:
	Words(string);
	// Push the words with dots and comas
	void pushWordsInSet(/*string &sentance, set <string>& word*/)
	{
		istringstream input(this->sentance);
		string temp;
		while (input >> temp)
		{
			this->word.insert(temp);
		}
	}
	// Sort the set
	void sordWordsInSet(/*set<string> &word, set<string> &sortedWord*/)
	{
		for (auto it = this->word.begin(); it != this->word.end(); it++)
		{
			string temp;
			for (int i = 0; i < (*it).size(); i++)
			{
				if ((*it)[i] != '.' && (*it)[i] != ',' && (*it)[i] != '?' && (*it)[i] != '!')
				{
					temp += (*it)[i];
				}
			}
			this->sortedWord.insert(temp);
		}
	}
	// Search in set for letter.
	void searchInSortedWords(/*set<string>& sortedWord,*/ char x)
	{
		int counter = 0;
		for (auto it = this->sortedWord.begin(); it != this->sortedWord.end(); it++)
		{
			for (int i = 0; i < (*it).size(); i++)
			{
				if (x > 96 && x < 123)
				{
					if ((*it)[i] == x || (*it)[i] == x - 32)
					{
						cout << (*it) << " ";
						counter++;
						break;
					}
				}
				else if (x > 64 && x < 91)
				{
					if ((*it)[i] == x || (*it)[i] == x + 32)
					{
						cout << (*it) << " ";
						counter++;
						break;
					}
				}
			}
		}
		if (counter == 0)
		{
			cout << "---";
		}
		else
			counter = 0;
	}
};
// Put the string in to the class.
Words::Words(string sentance_)
{
	this->sentance = sentance_;
}
int main()
{
	string str;
	getline(cin, str);
	char search;
	Words myClass(str);
	myClass.pushWordsInSet();
	myClass.sordWordsInSet();

	while (true)
	{
		cin >> search;
		cin.ignore();
		if (search == '.')
		{
			break;
		}
		myClass.searchInSortedWords(search);
		cout << endl;
	}
	return 0;
}

/*

You are given a text in English. Let’s define a word as any sequence of alphabetical characters. Each of those characters we’ll call a letter, but we will consider the uppercase and lowercase variant of a character in a word as the same letter.
a
Y
h
.

*/