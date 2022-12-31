#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

int main()
{
    int numberOfComands;
    cin >> numberOfComands;
    int min = INT_MAX;
    int max = INT_MIN;
    stack<int>stack;
    cin.ignore();

    for (int i = 0; i < numberOfComands; i++)
    {
        string temp;
        int tempInt;
        getline(cin, temp);
        istringstream input(temp);
        input >> tempInt;
        if (tempInt == 1)
        {
            while (input >> tempInt)
            {
                stack.push(tempInt);
                if (tempInt > max)
                    max = tempInt;
                if (tempInt < min)
                    min = tempInt;
            }
        }
        else if (tempInt == 2)
        {
            stack.pop();
        }
        else if (tempInt == 3)
        {
            if (stack.empty())
            {
            }
            else
                cout << max << endl;
        }
        else if (tempInt == 4)
        {
            if (stack.empty())
            {
            }
            else
                cout << min << endl;
        }
    }

    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
        if (!stack.empty())
            cout << ", ";
    }

    return 0;
}

