#include <iostream>
using namespace std;

int main()
{

    string flower;
    int pcs;
    double flowerPrice, budget;
    cin >> flower >> pcs >> budget;

    if (flower == "Roses")
    {
        flowerPrice = pcs * 5.0;
        if (pcs > 80)
        {
            flowerPrice = flowerPrice * 0.9;
        }
    }
    else if (flower == "Dahlias")
    {
        flowerPrice = pcs * 3.80;
        if (pcs > 90)
        {
            flowerPrice = flowerPrice * 0.85;
        }
    }
    else if (flower == "Tulips")
    {
        flowerPrice = pcs * 2.80;
        if (pcs > 80)
        {
            flowerPrice = flowerPrice + (flowerPrice * 0.85);
        }
    }
    else if (flower == "Narcissus")
    {
        flowerPrice = pcs * 3.0;
        if (pcs < 120)
        {
            flowerPrice = flowerPrice + (flowerPrice * 0.15);
        }
    }
    else if (flower == "Gladiolus")
    {
        flowerPrice = pcs * 2.50;
        if (pcs < 80)
        {
            flowerPrice = flowerPrice + (flowerPrice * 0.20);
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    double sumLeft = abs(budget - flowerPrice);

    if ((budget - flowerPrice) >= 0)
    {
        cout << "Hey, you have a great garden with " << pcs << " " << flower << " and " << sumLeft << " leva left.";
    }
    else
    {
        cout << "Not enough money, you need " << sumLeft << " leva more.";
    }


    return 0;
}
