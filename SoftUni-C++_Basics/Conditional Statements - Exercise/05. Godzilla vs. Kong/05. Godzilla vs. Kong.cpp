#include <iostream>
using namespace std;


int main()
{
	double movieBudget, clothPrice, decor, tottalPriceForCloths;
	int actorsNumber;
	cin >> movieBudget >> actorsNumber >> clothPrice;
	tottalPriceForCloths = clothPrice * actorsNumber;
	decor = movieBudget * 0.1;
	if (actorsNumber > 150)
	{
		tottalPriceForCloths *= 0.9;
	}

	double moviPrice = tottalPriceForCloths + decor;
	double diference = abs(movieBudget - moviPrice);
	cout.setf(ios::fixed);
	cout.precision(2);
	if (movieBudget < moviPrice)
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << diference << " leva more.";
	}
	else
	{
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << diference << " leva left.";
	}



	return 0;
}
