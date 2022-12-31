#include<iostream>
using namespace std;

int main() {

	int price;
	cin >> price;

	double procentOfPriceForSneecers = price * 0.40;
	double priceForSneecers = price - procentOfPriceForSneecers;
	double procentOfPriceForCloths = priceForSneecers * 0.20;
	double priceForCloths = priceForSneecers - procentOfPriceForCloths;
	double priceOfBall = priceForCloths / 4;
	double priceOfStufs = priceOfBall / 5;

	cout << price + priceForSneecers + priceForCloths + priceOfBall + priceOfStufs;


	return 0;
}