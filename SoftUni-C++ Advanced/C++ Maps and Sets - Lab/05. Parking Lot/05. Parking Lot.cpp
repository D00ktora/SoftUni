#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    set<string> cars;
    string input;
    getline(cin, input);
    istringstream str(input);

    string comand;
    string car;
    str >> comand;
    str >> car;
    list <string> tracker;

    while (comand != "END")
    {
        if (comand[0] == 'i' || comand[0] == 'I')
        {
            cars.insert(car);
            if (find(tracker.begin(), tracker.end(), car) == tracker.end())
            {
                tracker.push_back(car);
            }
        }
        else if (comand[0] == 'o' || comand[0] == 'O')
        {
            cars.erase(car);
            if (find(tracker.begin(), tracker.end(), car) != tracker.end())
            {
                tracker.remove(car);
            }
        }
        getline(cin, input);

        istringstream stra(input);
        stra >> comand;
        stra >> car;
    }
    if (cars.empty())
    {
        cout << "Parking Lot is Empty";
    }
    for (auto x = tracker.begin(); x != tracker.end(); x++)
    {
        for (auto it = cars.begin(); it != cars.end(); it++)
        {
            if (*it == *x)
            {
                cout << *it << endl;

            }
        }
    }




    return 0;
}
