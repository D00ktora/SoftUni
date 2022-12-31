#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    map<double, int> numbers;
    string line;
    getline(cin, line);
    istringstream input(line);
    vector <double> num;
    while (input >> line)
    {
        double number = stod(line);
        numbers[number]++;
        if (num.empty())
        {
            num.push_back(number);
        }
        else
        {
            for (int i = 0; i < num.size(); i++)
            {
                if (!num[i] == number)
                {
                    num.push_back(number);
                }
            }
        }

    }

    for (auto const& pair : numbers)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
