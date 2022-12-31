#include <iostream>
using namespace std;

int main()
{
	string articul, city;
	double quantity, price;
	cin >> articul >> city >> quantity;

	if (city == "Sofia")
	{
		if (articul == "coffee")
		{
			price = quantity * 0.50;
		}
		else if (articul == "water")
		{
			price = quantity * 0.80;
		}
		else if (articul == "beer")
		{
			price = quantity * 1.20;
		}
		else if (articul == "sweets")
		{
			price = quantity * 1.45;
		}
		else if (articul == "peanuts")
		{
			price = quantity * 1.60;
		}
	}
	else if (city == "Plovdiv")
	{
		if (articul == "coffee")
		{
			price = quantity * 0.40;
		}
		else if (articul == "water")
		{
			price = quantity * 0.70;
		}
		else if (articul == "beer")
		{
			price = quantity * 1.15;
		}
		else if (articul == "sweets")
		{
			price = quantity * 1.30;
		}
		else if (articul == "peanuts")
		{
			price = quantity * 1.50;
		}
	}
	else if (city == "Varna")
	{
		if (articul == "coffee")
		{
			price = quantity * 0.45;
		}
		else if (articul == "water")
		{
			price = quantity * 0.70;
		}
		else if (articul == "beer")
		{
			price = quantity * 1.10;
		}
		else if (articul == "sweets")
		{
			price = quantity * 1.35;
		}
		else if (articul == "peanuts")
		{
			price = quantity * 1.55;
		}
	}
	cout << price;
	return 0;
}
