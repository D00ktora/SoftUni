#include <iostream>
using namespace std;


int main()
{
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if (n1 < 0 && n2 < 0 && n3 < 0)
	{
		cout << "-";
	}
	else if ((n1 < 0 && n2 < 0) || (n1 < 0 && n3 < 0) || (n2 < 0 && n3 < 0))
	{
		cout << "+";
	}
	else if ((n1 < 0 && n2 > 0 && n3 > 0) || (n1 > 0 && n2 < 0 && n3>0) || (n1 > 0 && n2 > 0 && n3 < 0))
	{
		cout << "-";
	}
	else if (n1 == 0 || n2 == 0 || n3 == 0)
	{
		cout << "+";
	}
	else
	{
		cout << "+";
	}


	return 0;
}
