#include <iostream>
using namespace std;

int main()
{
    string month;
    cin >> month;
    int numberOfNights;
    cin >> numberOfNights;
    double priceStudio, priceApartment;

    if (month == "May" || month == "October")
    {
        priceStudio = numberOfNights * 50.0;
        priceApartment = numberOfNights * 65.0;

        if (numberOfNights > 7 && numberOfNights <= 14)
        {
            priceStudio = priceStudio * 0.95;
        }
        else if (numberOfNights > 14)
        {
            priceStudio = priceStudio * 0.70;
            priceApartment = priceApartment * 0.9;
        }
    }
    else if (month == "June" || month == "September")
    {
        priceStudio = numberOfNights * 75.20;
        priceApartment = numberOfNights * 68.70;
        if (numberOfNights > 14)
        {
            priceApartment = priceApartment * 0.9;
            priceStudio = priceStudio * 0.80;
        }
    }
    else if (month == "July" || month == "August")
    {
        priceStudio = numberOfNights * 76.0;
        priceApartment = numberOfNights * 77.0;

        if (numberOfNights > 14)
        {
            priceApartment = priceApartment * 0.9;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << priceApartment << " lv." << endl;
    cout << "Studio: " << priceStudio << " lv.";


    return 0;
}
