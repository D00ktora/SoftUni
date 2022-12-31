#include <iostream>
using namespace std;

int main()
{
	string articul, dayOfWeek;
	double quantity, price;
	cin >> articul >> dayOfWeek >> quantity;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (articul == "banana" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 2.50;
		cout << price;
	}
	else if (articul == "apple" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 1.20;
		cout << price;
	}
	else if (articul == "orange" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 0.85;
		cout << price;
	}

	else if (articul == "grapefruit" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 1.45;
		cout << price;
	}
	else if (articul == "kiwi" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 2.70;
		cout << price;
	}
	else if (articul == "pineapple" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 5.50;
		cout << price;
	}
	else if (articul == "grapes" && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"))
	{
		price = quantity * 3.85;
		cout << price;
	}
	else if (articul == "banana" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 2.70;
		cout << price;
	}
	else if (articul == "apple" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 1.25;
		cout << price;
	}
	else if (articul == "orange" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 0.90;
		cout << price;
	}

	else if (articul == "grapefruit" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 1.60;
		cout << price;
	}
	else if (articul == "kiwi" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 3.00;
		cout << price;
	}
	else if (articul == "pineapple" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 5.60;
		cout << price;
	}
	else if (articul == "grapes" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday"))
	{
		price = quantity * 4.20;
		cout << price;
	}
	else
	{
		cout << "error";
	}
	return 0;
}
