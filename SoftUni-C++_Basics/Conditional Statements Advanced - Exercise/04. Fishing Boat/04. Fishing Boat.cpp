#include <iostream>
using namespace std;


int main()
{
	int budget, fishermans;
	double price, sumLeft;
	string season;

	cin >> budget >> season >> fishermans;

	if (season == "Spring")
	{
		price = 3000.0;
		if (fishermans <= 6)
		{
			price = price * 0.9;
		}
		else if (fishermans > 6 && fishermans <= 11)
		{
			price = price * 0.85;
		}
		else if (fishermans > 11)
		{
			price = price * 0.75;
		}
	}
	else if (season == "Summer" || season == "Autumn")
	{
		price = 4200.0;
		if (fishermans <= 6)
		{
			price = price * 0.9;
		}
		else if (fishermans > 6 && fishermans <= 11)
		{
			price = price * 0.85;
		}
		else if (fishermans > 11)
		{
			price = price * 0.75;
		}
	}
	else if (season == "Winter")
	{
		price = 2600.0;
		if (fishermans <= 6)
		{
			price = price * 0.9;
		}
		else if (fishermans > 6 && fishermans <= 11)
		{
			price = price * 0.85;
		}
		else if (fishermans > 11)
		{
			price = price * 0.75;
		}
	}
	if ((fishermans % 2 == 0) && season != "Autumn")
	{
		price = price * 0.95;
	}
	sumLeft = abs(budget - price);
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= price)
	{
		cout << "Yes! You have " << sumLeft << " leva left.";
	}
	else
	{
		cout << "Not enough money! You need " << sumLeft << " leva.";
	}
	return 0;
}