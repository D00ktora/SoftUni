#include <iostream>
using namespace std;

int main()
{
    int gradus;
    string time;
    cin >> gradus >> time;

    if (gradus >= 10 && gradus <= 18)
    {
        if (time == "Morning")
        {
            cout << "It's " << gradus << " degrees, get your Sweatshirt and Sneakers.";
        }
        else if (time == "Afternoon")
        {
            cout << "It's " << gradus << " degrees, get your Shirt and Moccasins.";
        }
        else if (time == "Evening")
        {
            cout << "It's " << gradus << " degrees, get your Shirt and Moccasins.";
        }
    }
    else if (gradus > 18 && gradus <= 24)
    {
        if (time == "Morning")
        {
            cout << "It's " << gradus << " degrees, get your Shirt and Moccasins.";
        }
        else if (time == "Afternoon")
        {
            cout << "It's " << gradus << " degrees, get your T-Shirt and Sandals.";
        }
        else if (time == "Evening")
        {
            cout << "It's " << gradus << " degrees, get your Shirt and Moccasins.";
        }
    }
    else if (gradus >= 25)
    {
        if (time == "Morning")
        {
            cout << "It's " << gradus << " degrees, get your T-Shirt and Sandals.";
        }
        else if (time == "Afternoon")
        {
            cout << "It's " << gradus << " degrees, get your Swim Suit and Barefoot.";
        }
        else if (time == "Evening")
        {
            cout << "It's " << gradus << " degrees, get your Shirt and Moccasins.";
        }
    }


    return 0;
}
