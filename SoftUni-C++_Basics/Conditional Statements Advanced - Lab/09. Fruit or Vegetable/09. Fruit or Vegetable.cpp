#include <iostream>
using namespace std;



int main()
{
	string nameOfArticul;
	cin >> nameOfArticul;

	if (nameOfArticul == "banana" || nameOfArticul == "apple" || nameOfArticul == "kiwi" || nameOfArticul == "cherry" || nameOfArticul == "lemon" || nameOfArticul == "grapes")
	{
		cout << "fruit";
	}
	else if (nameOfArticul == "tomato" || nameOfArticul == "cucumber" || nameOfArticul == "pepper" || nameOfArticul == "carrot")
	{
		cout << "vegetable";
	}
	else
	{
		cout << "unknown";
	}
	return 0;
}
