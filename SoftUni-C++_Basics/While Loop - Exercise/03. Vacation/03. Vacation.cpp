#include <iostream>
using namespace std;


int main()
{
    double neededMoneyForTrip, availibleMoney, decision;
    string spendSave;
    cin >> neededMoneyForTrip >> availibleMoney;
    int spendCounter = 0, dayCounter = 0;
    cin >> spendSave;
    while (true)
    {


        cin >> decision;

        if (spendSave == "spend")
        {
            availibleMoney -= decision;
            if (availibleMoney < 0)
            {
                availibleMoney = 0;
            }
            spendCounter++;
            dayCounter++;
        }
        else if (spendSave == "save")
        {
            spendCounter = 0;
            availibleMoney += decision;
            dayCounter++;
        }

        if (spendCounter == 5)
        {
            cout << "You can't save the money." << endl;
            cout << dayCounter;
            break;
        }
        else if (neededMoneyForTrip <= availibleMoney)
        {
            cout << "You saved the money for " << dayCounter << " days.";
            break;
        }
        cin >> spendSave;
    }



    return 0;
}
