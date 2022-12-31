#include <iostream>
using namespace std;


int main()
{
	int n1, n2, remain, temp;
	cin >> n1 >> n2;
	remain = n2;
	while (true)
	{
		temp = n1 % n2;

		if (temp == 0)
		{
			cout << remain;
			break;
		}
		else
		{
			n1 = n2;
			n2 = temp;
			remain = temp;
		}
	}

	return 0;
}
