#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;


int main()
{
	int quantityOfFood;
	cin >> quantityOfFood;
	cin.ignore();
	int orderQuantity;
	string orderInput;
	getline(cin, orderInput);
	istringstream order(orderInput);
	int max = INT_MIN;
	queue<int>orders;
	while (order >> orderQuantity)
	{
		orders.push(orderQuantity);
		if (orderQuantity > max)
		{
			max = orderQuantity;
		}
	}
	while (!orders.empty())
	{
		int temp = orders.front();
		quantityOfFood -= temp;

		if (quantityOfFood < 0)
		{
			cout << max << endl;
			cout << "Orders left: ";
			while (!orders.empty())
			{
				cout << orders.front() << " ";
				orders.pop();

			}
			return 0;
		}
		orders.pop();
	}

	cout << max << endl;
	cout << "Orders complete";


	return 0;
}
