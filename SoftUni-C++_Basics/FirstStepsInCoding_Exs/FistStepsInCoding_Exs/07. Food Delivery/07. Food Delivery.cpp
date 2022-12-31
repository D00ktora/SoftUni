#include<iostream>
using namespace std;

int main() {

	int chickenMenu, fishMenu, veaganMenu;

	cin >> chickenMenu >> fishMenu >> veaganMenu;

	double priceChicken, priceFish, priceVegan;

	priceChicken = chickenMenu * 10.35;
	priceFish = fishMenu * 12.40;
	priceVegan = veaganMenu * 8.15;
	double procentOfABill = (priceChicken + priceFish + priceVegan) * 0.20;
	double priceOfDelivery = 2.50;

	cout << priceChicken + priceFish + priceVegan + procentOfABill + priceOfDelivery;

	return 0;
}