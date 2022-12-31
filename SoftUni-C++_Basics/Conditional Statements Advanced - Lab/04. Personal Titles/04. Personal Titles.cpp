#include <iostream>
using namespace std;


int main()
{
	double years;
	string gender;
	cin >> years >> gender;

	if (gender == "m")
	{
		if (years >= 16)
		{
			cout << "Mr.";
		}
		else
		{
			cout << "Master";
		}
	}
	else
	{
		if (years >= 16)
		{
			cout << "Ms.";
		}
		else
		{
			cout << "Miss";
		}
	}


	return 0;
}
