#include <iostream>
#include <string>
using namespace std;

int main()
{
    double grade, sum = 0, counterPass = 0, counterNotPass = 0;
    string name;
    getline(cin >> ws, name);
    cin >> grade;
    int i = 1;
    while (i <= 12)
    {

        if (grade >= 4.00)
        {
            sum += grade;
            counterPass++;
            /*if (counterPass == 12)
            {
                sum = sum / 12.0;
                cout << name << " graduated. Average grade: " << sum;
                break;
            }*/
        }
        else
        {
            counterNotPass++;
        }
        if (counterNotPass > 1)
        {
            cout << name << " has been excluded at " << ++counterPass << " grade";
            break;
        }
        else if (counterPass == 12)
        {
            cout.setf(ios::fixed);
            cout.precision(2);
            sum = sum / 12.0;
            cout << name << " graduated. Average grade: " << sum;
            break;
        }
        cin >> grade;
    }




    return 0;
}
