#include <iostream>
using namespace std;

int main()
{
    double petterBudget;
    int videocards, processors, ram;
    cin >> petterBudget >> videocards >> processors >> ram;
    double priceVideoCards = videocards * 250.0;
    double priceProcesor = (priceVideoCards * 0.35) * processors;
    double priceRam = (priceVideoCards * 0.10) * ram;


    double neededMoney = priceVideoCards + priceProcesor + priceRam;

    if (videocards > processors)
    {
        neededMoney *= 0.85;
    }

    double diference = abs(neededMoney - petterBudget);
    cout.setf(ios::fixed);
    cout.precision(2);
    if (neededMoney <= petterBudget)
    {
        cout << "You have " << diference << " leva left!";
    }
    else
    {
        cout << "Not enough money! You need " << diference << " leva more!";
    }
    return 0;
}
