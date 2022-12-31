#include <iostream>
using namespace std;


int main()
{
    int cointCointer = 0;
    double change;
    cin >> change;
    int changeToInt = change * 100;

    while (true)
    {
        if (changeToInt >= 200)
        {
            changeToInt = changeToInt - 200;
            cointCointer++;
            if (changeToInt <= 0)
            {
                cout << cointCointer;
                break;
            }
        }
        else if (changeToInt < 200)
        {
            if (changeToInt >= 100)
            {
                changeToInt -= 100;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 100 && changeToInt >= 50)
            {
                changeToInt -= 50;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 50 && changeToInt >= 20)
            {
                changeToInt -= 20;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 20 && changeToInt >= 10)
            {
                changeToInt -= 10;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 10 && changeToInt >= 5)
            {
                changeToInt -= 5;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 5 && changeToInt >= 2)
            {
                changeToInt -= 2;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
            else if (changeToInt < 2 && changeToInt >= 1)
            {
                changeToInt -= 1;
                cointCointer++;
                if (changeToInt <= 0)
                {
                    cout << cointCointer;
                    break;
                }
            }
        }


    }


    return 0;
}
