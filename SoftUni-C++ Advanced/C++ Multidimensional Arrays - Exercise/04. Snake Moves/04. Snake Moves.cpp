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

void napred(vector<vector<char>>& snake, string& text, int& col, int& textSize)
{
	vector<char>temp;
	for (int i = 0; i < col; i++)
	{
		if (textSize != text.size())
		{
			temp.push_back(text[textSize]);
			textSize++;
		}
		if (textSize >= text.size())
		{
			textSize = 0;
		}
	}
	snake.push_back(temp);
	temp.clear();

}

void nazad(vector<vector<char>>& snake, string& text, int& col, int& textSize)
{
	vector<char>temp;
	stack<char> te;
	for (int i = col; i > 0; i--)
	{
		if (textSize <= text.size())
		{
			te.push(text[textSize]);
			textSize++;
		}
		if (textSize >= text.size())
		{
			textSize = 0;
		}

	}
	while (!te.empty())
	{
		temp.push_back(te.top());
		te.pop();
	}
	snake.push_back(temp);
	temp.clear();

}




int main()
{
	int row, col;
	string text;
	cin >> row >> col;
	cin >> text;
	int iteration = row * col;
	int textSize = 0;

	vector<vector<char>>snake;


	for (int i = 0; i < row; i++)
	{
		if (i % 2 == 0)
		{
			napred(snake, text, col, textSize);
		}
		else
		{
			nazad(snake, text, col, textSize);
		}
	}


	for (int i = 0; i < snake.size(); i++)
	{
		for (int j = 0; j < snake[i].size(); j++)
		{
			cout << snake[i][j];
		}
		cout << endl;
	}

	return 0;
}
