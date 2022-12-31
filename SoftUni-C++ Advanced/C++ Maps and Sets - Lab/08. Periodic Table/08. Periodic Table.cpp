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
    set<string> elements;

    int loops;
    cin >> loops;
    cin.ignore();

    for (int i = 0; i < loops; i++)
    {
        string line;
        getline(cin, line);
        istringstream rows(line);
        while (rows >> line)
        {
            elements.insert(line);
        }

    }

    for (auto it = elements.begin(); it != elements.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
