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


void print_map(map<int, int> const& elements)
{
    for (auto const& pair : elements)
    {
        cout << pair.first << ": " << pair.second << "}\n";
    }
}



int main()
{
    map<int, int> elements;

    int loops;
    cin >> loops;
    cin.ignore();

    for (int i = 0; i < loops; i++)
    {
        int number;
        cin >> number;
        elements[number]++;
    }

    for (/*int i=0; i<elements.size(); i++*/ auto it = elements.begin(); it != elements.end(); it++)
    {

        if ((*it).second % 2 == 0)
        {
            cout << (*it).first;
        }
    }

    return 0;
}
