#include <iostream>
using namespace std;

int main()
{
	int lilyAge, priceOfToy, lilySum = 0, toys = 0, birhtdayMoney = 10, stolenMoneycounter = 0;
	double priceOfWashingMachine, sumOfToys;
	cin >> lilyAge >> priceOfWashingMachine >> priceOfToy;

	for (int i = 1; i <= lilyAge; i++)
	{
		if (i % 2 == 0)
		{
			lilySum += birhtdayMoney;
			birhtdayMoney += 10;
			stolenMoneycounter++;
		}
		else
		{
			toys++;
		}
	}
	lilySum = lilySum - stolenMoneycounter;
	sumOfToys = toys * priceOfToy * 1.0;
	double totalMoney = lilySum + sumOfToys;
	double diff = priceOfWashingMachine - totalMoney;

	cout.setf(ios::fixed);
	cout.precision(2);
	if (diff <= 0)
	{
		cout << "Yes! " << abs(diff);
	}
	else
	{
		cout << "No! " << abs(diff);
	}

	return 0;
}
