#include <iostream>
#include <string>
using namespace std;

int main()
{
    int foodInKg, foodInGr;
    cin >> foodInKg;
    int newValue;
    int kgToGr = foodInKg * 1000;
    int temp = kgToGr;
    string adopted;
    int food = 0;
    while (true)
    {
        cin >> adopted;

        if (adopted == "Adopted")
        {
            break;
        }

        newValue = stoi(adopted);

        food += newValue;
    }

    if ((food - kgToGr) <= 0)
    {
        cout << "Food is enough! Leftovers: " << abs(food - kgToGr) << " grams.";
    }
    else
    {
        cout << "Food is not enough. You need " << abs(kgToGr - food) << " grams more.";
    }

    return 0;
}
