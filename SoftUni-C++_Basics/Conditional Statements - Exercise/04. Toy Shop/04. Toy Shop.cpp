#include <iostream>
using namespace std;

int main()
{
    double tripPrice, priceOfPuzels, priceOfDols, priceOfBears, priceOfMinions, priceOfTrucks, totalPrice;
    int numberOfPuzels, numberOfDols, numberOfBears, numberOfMinions, numberOfTrucks;

    cin >> tripPrice >> numberOfPuzels >> numberOfDols >> numberOfBears >> numberOfMinions >> numberOfTrucks;

    priceOfPuzels = numberOfPuzels * 2.60;
    priceOfDols = numberOfDols * 3.00;
    priceOfBears = numberOfBears * 4.10;
    priceOfMinions = numberOfMinions * 8.20;
    priceOfTrucks = numberOfTrucks * 2.00;
    totalPrice = priceOfPuzels + priceOfDols + priceOfBears + priceOfMinions + priceOfTrucks;

    if (numberOfBears + numberOfDols + numberOfPuzels + numberOfMinions + numberOfTrucks >= 50) {
        totalPrice = totalPrice * 0.75;
    }
    totalPrice = totalPrice * 0.9;
    double moneyLeft = abs(tripPrice - totalPrice);
    cout.setf(ios::fixed);
    cout.precision(2);
    if (tripPrice <= totalPrice) {

        cout << "Yes! " << moneyLeft << " lv left.";
    }
    else if (tripPrice > totalPrice) {
        cout << "Not enough money! " << moneyLeft << " lv needed.";
    }






    return 0;
}
