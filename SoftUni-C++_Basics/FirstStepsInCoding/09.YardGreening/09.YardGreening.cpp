#include <iostream>
#include<iomanip>
using namespace std;


int main() {

	double meters;
	cin >> meters;
	float price = meters * 7.61;

	float priceAfter = price * 0.18;
	float finalPrice = price - priceAfter;

	cout << fixed << setprecision(2) << "The final price is: " << finalPrice << " lv." << endl;
	cout << fixed << setprecision(2) << "The discount is: " << priceAfter << " lv.";


	return 0;
}