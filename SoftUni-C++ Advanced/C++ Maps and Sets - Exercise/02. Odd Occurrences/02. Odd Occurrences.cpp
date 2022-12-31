#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <cmath>

using namespace std;






int main()
{
    map<string, int> elements;
    string loops;
    getline(cin, loops);

    for_each(loops.begin(), loops.end(), [](char& c)
        {
            c = ::tolower(c);
        });
    list<string> tracker;
    istringstream input(loops);
    while (input >> loops)
    {
        elements[loops]++;
        if (find(tracker.begin(), tracker.end(), loops) == tracker.end())
        {
            tracker.push_back(loops);
        }
    }

    for (/*int i=0; i<elements.size(); i++*/ auto it = elements.begin(); it != elements.end(); it++)
    {


    }
    bool first = true;
    for (auto x = tracker.begin(); x != tracker.end(); x++)
    {
        for (auto it = elements.begin(); it != elements.end(); it++)
        {
            if ((*it).first == *x && (*it).second % 2 != 0)
            {
                if (first)
                {
                    first = false;
                }
                else
                {
                    cout << ", ";
                }
                cout << (*it).first;


            }

        }

    }

    return 0;
}
