#include <iostream>
#include <string>
using namespace std;

int main()
{
    double sum = 0, numberToInt;

    string number;

    cin >> number;


    while (true)
    {

        if (number == "NoMoreMoney")
        {
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << "Total: " << sum;
            break;
        }

        numberToInt = stod(number);

        if (numberToInt < 0)
        {
            cout << "Invalid operation!" << endl;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << "Total: " << sum;
            break;
        }
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Increase: " << numberToInt << endl;
        sum += numberToInt;
        cin >> number;

    }


    return 0;
}
