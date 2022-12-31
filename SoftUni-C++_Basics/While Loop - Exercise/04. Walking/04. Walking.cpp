#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    int target = 10000;
    string steps;
    getline(cin >> ws, steps);
    int stepsInt;


    while (true)
    {

        if (steps == "Going home")
        {
            getline(cin >> ws, steps);
            stepsInt = stoi(steps);
            target -= stepsInt;
            if (target <= 0)
            {
                cout << "Goal reached! Good job!" << endl;
                // cout << abs(target);
                break;
            }
            else if (target > 0)
            {
                cout << abs(target) << " more steps to reach goal.";
                break;
            }
        }
        stepsInt = stoi(steps);
        target -= stepsInt;
        if (target <= 0)
        {
            cout << "Goal reached! Good job!" << endl;
            // cout << abs(target);
            break;
        }
        getline(cin >> ws, steps);



    }



    return 0;
}
