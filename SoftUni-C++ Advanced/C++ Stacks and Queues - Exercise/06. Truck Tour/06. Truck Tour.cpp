#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

bool isFuelEnoth(queue<int>litters, queue<int>distance, int fuel)
{


    for (int i = 0; i < litters.size(); i++)
    {
        int lit = litters.front();
        int dis = distance.front();
        fuel += lit;

        if (fuel < dis)
        {
            /*litters.push(litters.front());
            distance.push(distance.front());
            litters.pop();
            distance.pop();*/
            return false;
        }
        else
        {
            fuel -= dis;
            litters.pop();
            distance.pop();
        }
    }
    return true;
}


int main()
{
    int numberOfStations;
    cin >> numberOfStations;
    cin.ignore();
    queue<int>litters;
    queue<int>distance;
    int fuel = 0;
    for (int i = 0; i < numberOfStations; i++)
    {
        int liter;
        cin >> liter; cin.ignore();
        litters.push(liter);
        int dis;
        cin >> dis; cin.ignore();
        distance.push(dis);
    }
    int index = 0;
    for (int i = 0; i < numberOfStations; i++)
    {
        if (isFuelEnoth(litters, distance, fuel))
        {
            cout << index;
            return 0;
        }
        else
        {
            litters.push(litters.front());
            distance.push(distance.front());
            litters.pop();
            distance.pop();
        }
        index++;
    }

    return 0;

}
