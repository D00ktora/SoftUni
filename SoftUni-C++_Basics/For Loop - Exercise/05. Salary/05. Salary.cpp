#include <iostream>
using namespace std;


int main()
{
	int numberOfTabs, selary, temp;
	cin >> numberOfTabs >> selary;



	temp = selary;
	for (int i = 0; i < numberOfTabs; i++)
	{

		string web;
		cin >> web;
		if (web == "Facebook" || web == "Instagram" || web == "Reddit" && selary >= 0)
		{
			if (web == "Facebook")
			{
				selary -= 150;
			}
			else if (web == "Instagram")
			{
				selary -= 100;
			}
			else if (web == "Reddit")
			{
				selary -= 50;
			}
			if (selary <= 0)
			{
				cout << "You have lost your salary.";
				return 0;
			}
		}
	}
	int diff = temp - selary;
	if (diff == 0)
	{
		cout << temp;
	}
	else
	{
		cout << selary;
	}


	return 0;
}
