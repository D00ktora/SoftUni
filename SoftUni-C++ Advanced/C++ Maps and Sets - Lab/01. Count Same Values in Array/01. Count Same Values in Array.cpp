#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <utility>
#include <map>
#include <set>

using namespace std;


int main()
{
    string str;
    getline(cin, str);
    istringstream istr(str);
    map<double, int>mp;
    double number;
    while (istr >> number)
    {
        mp[number]++;
    }

    istringstream istristr(str);



    while (istristr >> number)
    {
        if (mp[number] && !mp.empty())
        {
            cout << mp.find(number)->first << " - " << mp.find(number)->second << " times" << endl;
            mp.erase(number);
        }

    }



    return 0;
}

