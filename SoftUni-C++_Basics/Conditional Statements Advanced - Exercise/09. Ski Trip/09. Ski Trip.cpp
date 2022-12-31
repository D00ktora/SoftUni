#include <iostream>
#include<string>
using namespace std;

int main()
{


	int days;
	string place;
	string greade;

	cin >> days;
	getline(cin >> ws, place);
	cin >> greade;

	int nights = days - 1;
	double priceBefore;
	double priceAfter;
	if (place == "room for one person")
	{
		priceBefore = nights * 18.00;
		priceAfter = priceBefore;
	}
	else if (place == "apartment")
	{
		priceBefore = nights * 25.00;
		if (days < 10)
		{
			priceAfter = priceBefore * 0.70;
		}
		else if (days >= 10 && days <= 15)
		{
			priceAfter = priceBefore * 0.65;
		}
		else if (days > 15)
		{
			priceAfter = priceBefore * 0.5;
		}
	}
	else if (place == "president apartment")
	{
		priceBefore = nights * 35.00;
		if (days < 10)
		{
			priceAfter = priceBefore * 0.90;
		}
		else if (days >= 10 && days <= 15)
		{
			priceAfter = priceBefore * 0.85;
		}
		else if (days > 15)
		{
			priceAfter = priceBefore * 0.80;
		}
	}
	if (greade == "positive")
	{
		priceAfter = (priceAfter * 0.25) + priceAfter;
	}
	else if (greade == "negative")
	{
		priceAfter = priceAfter * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << priceAfter;

	return 0;
}
