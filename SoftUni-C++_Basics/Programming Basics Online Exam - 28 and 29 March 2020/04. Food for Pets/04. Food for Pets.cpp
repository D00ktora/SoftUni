#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfDays, dogFood, catFood;
    cin >> numberOfDays;
    double tottalFood, totalDogFood = 0, tottalCatFood = 0, tottalDogAndCatFood = 0, percentOfTottalFood, percentDog, percentCat, tottalBiscuits = 0;
    cin >> tottalFood;

    for (int i = 1; i <= numberOfDays; i++)
    {
        cin >> dogFood >> catFood;
        totalDogFood += dogFood;
        tottalCatFood += catFood;

        if (i % 3 == 0)
        {
            tottalBiscuits += (dogFood + catFood) * 0.1;
        }

    }

    tottalDogAndCatFood = totalDogFood + tottalCatFood;
    percentOfTottalFood = (tottalDogAndCatFood / tottalFood) * 100.0;
    percentDog = (totalDogFood / tottalDogAndCatFood) * 100.0;
    percentCat = (tottalCatFood / tottalDogAndCatFood) * 100.0;

    cout << "Total eaten biscuits: " << round(tottalBiscuits) << "gr." << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << percentOfTottalFood << "% of the food has been eaten." << endl;
    cout << percentDog << "% eaten from the dog." << endl;
    cout << percentCat << "% eaten from the cat." << endl;


    return 0;
}
