#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;


int main()
{

    string cloths;
    getline(cin, cloths);
    int numberOfCloths;
    int rackCapacity;
    istringstream cloth(cloths);
    cin >> rackCapacity;
    int rackCounter = 1;
    int temp = rackCapacity;
    while (cloth >> numberOfCloths)
    {
        temp -= numberOfCloths;
        if (temp < 0)
        {
            rackCounter++;
            temp = rackCapacity - numberOfCloths;
        }
    }
    cout << rackCounter;


    return 0;
}
