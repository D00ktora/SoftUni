#include <iostream>
using namespace std;

int main()
{
    string fruit, set;

    cin >> fruit >> set;

    int numberOfSets;
    cin >> numberOfSets;
    int totalNumberOfGels;
    double price;
    if (set == "small")
    {
        totalNumberOfGels = numberOfSets * 2;
    }
    else
    {
        totalNumberOfGels = numberOfSets * 5;
    }

    if (fruit == "Watermelon" && set == "small")
    {
        price = totalNumberOfGels * 56.0;
    }
    else if (fruit == "Watermelon" && set == "big")
    {
        price = totalNumberOfGels * 28.70;
    }
    else if (fruit == "Mango" && set == "small")
    {
        price = totalNumberOfGels * 36.66;
    }
    else if (fruit == "Mango" && set == "big")
    {
        price = totalNumberOfGels * 19.60;
    }
    else if (fruit == "Pineapple" && set == "small")
    {
        price = totalNumberOfGels * 42.10;
    }
    else if (fruit == "Pineapple" && set == "big")
    {
        price = totalNumberOfGels * 24.80;
    }
    else if (fruit == "Raspberry" && set == "small")
    {
        price = totalNumberOfGels * 20.0;
    }
    else if (fruit == "Raspberry" && set == "big")
    {
        price = totalNumberOfGels * 15.20;
    }
    if (400 <= price && price <= 1000)
    {
        price *= 0.85;
    }
    else if (price > 1000)
    {
        price *= 0.50;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << " lv.";


    return 0;
}
