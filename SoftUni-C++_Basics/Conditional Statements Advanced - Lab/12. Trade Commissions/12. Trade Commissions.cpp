#include <iostream>
using namespace std;

int main()
{
    string city;
    double number, comision = -1;
    cin >> city >> number;

    if (city == "Sofia")
    {
        if (number >= 0 && number <= 500)
        {
            comision = number * 0.05;
        }
        else if (number > 500 && number <= 1000)
        {
            comision = number * 0.07;
        }
        else if (number > 1000 && number <= 10000)
        {
            comision = number * 0.08;
        }
        else if (number > 10000)
        {
            comision = number * 0.12;
        }
    }
    else if (city == "Varna")
    {
        if (number >= 0 && number <= 500)
        {
            comision = number * 0.045;
        }
        else if (number > 500 && number <= 1000)
        {
            comision = number * 0.075;
        }
        else if (number > 1000 && number <= 10000)
        {
            comision = number * 0.10;
        }
        else if (number > 10000)
        {
            comision = number * 0.13;
        }
    }
    else if (city == "Plovdiv")
    {
        if (number >= 0 && number <= 500)
        {
            comision = number * 0.055;
        }
        else if (number > 500 && number <= 1000)
        {
            comision = number * 0.08;
        }
        else if (number > 1000 && number <= 10000)
        {
            comision = number * 0.12;
        }
        else if (number > 10000)
        {
            comision = number * 0.145;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if ((city != "Sofia" && city != "Varna" && city != "Plovdiv") || comision < 0)
    {
        cout << "error";
    }
    else {
        cout << comision;
    }




    return 0;

}
