#include <iostream>
using namespace std;

int main()
{
    double availibleMoney;
    cin >> availibleMoney;
    char gender;
    cin >> gender;
    int age;
    cin >> age;
    string sport;
    cin >> sport;
    double priceForCard;

    if (gender == 'm' && sport == "Gym")
    {
        if (age <= 19)
        {
            priceForCard = 42 * 0.8;
        }
        else
        {
            priceForCard = 42.0;
        }
    }
    else if (gender == 'm' && sport == "Boxing")
    {
        if (age <= 19)
        {
            priceForCard = 41 * 0.8;
        }
        else
        {
            priceForCard = 41.0;
        }
    }
    else if (gender == 'm' && sport == "Yoga")
    {
        if (age <= 19)
        {
            priceForCard = 45 * 0.8;
        }
        else
        {
            priceForCard = 45.0;
        }
    }
    else if (gender == 'm' && sport == "Zumba")
    {
        if (age <= 19)
        {
            priceForCard = 34 * 0.8;
        }
        else
        {
            priceForCard = 34.0;
        }
    }
    else if (gender == 'm' && sport == "Dances")
    {
        if (age <= 19)
        {
            priceForCard = 51 * 0.8;
        }
        else
        {
            priceForCard = 51.0;
        }
    }
    else if (gender == 'm' && sport == "Pilates")
    {
        if (age <= 19)
        {
            priceForCard = 39 * 0.8;
        }
        else
        {
            priceForCard = 39.0;
        }
    }
    //----------------------------------------------------------   

    if (gender == 'f' && sport == "Gym")
    {
        if (age <= 19)
        {
            priceForCard = 35 * 0.8;
        }
        else
        {
            priceForCard = 35.0;
        }
    }
    else if (gender == 'f' && sport == "Boxing")
    {
        if (age <= 19)
        {
            priceForCard = 37 * 0.8;
        }
        else
        {
            priceForCard = 37.0;
        }
    }
    else if (gender == 'f' && sport == "Yoga")
    {
        if (age <= 19)
        {
            priceForCard = 42 * 0.8;
        }
        else
        {
            priceForCard = 42.0;
        }
    }
    else if (gender == 'f' && sport == "Zumba")
    {
        if (age <= 19)
        {
            priceForCard = 31 * 0.8;
        }
        else
        {
            priceForCard = 31.0;
        }
    }
    else if (gender == 'f' && sport == "Dances")
    {
        if (age <= 19)
        {
            priceForCard = 53 * 0.8;
        }
        else
        {
            priceForCard = 53.0;
        }
    }
    else if (gender == 'f' && sport == "Pilates")
    {
        if (age <= 19)
        {
            priceForCard = 37 * 0.8;
        }
        else
        {
            priceForCard = 37.0;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (priceForCard <= availibleMoney)
    {
        cout << "You purchased a 1 month pass for " << sport << ".";
    }
    else
    {
        double doferece = abs(priceForCard - availibleMoney);

        cout << "You don't have enough money! You need $" << doferece << " more.";
    }

    return 0;
}
