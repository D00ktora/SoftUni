#include <iostream>
using namespace std;


int main() {


	int dog, cat;

	cin >> dog >> cat;
	double price = dog * 2.5;
	double priceCat = cat * 4;

	cout << price + priceCat << " lv.";
	return 0;
}