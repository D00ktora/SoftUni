#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    stack<char>open;
    stack<char>close;
    int openCounter = 0, closeCounter = 0;
    char openBracket, closeBaracket;
    for (int i = 0; i < input.size(); i++)
    {

        if (input[i] == '(' || input[i] == '[' || input[i] == '{')
        {

            if (closeCounter > openCounter)
            {
                cout << "NO";
                return 0;
            }
            open.push(input[i]);
            openCounter++;
        }
        else if (input[i] == ')' || input[i] == ']' || input[i] == '}')
        {
            if (!open.empty() && ((input[i] == ')' && open.top() == '(') || (input[i] == ']' && open.top() == '[') || (input[i] == '}' && open.top() == '{')))
            {
                open.pop();
                closeCounter++;

            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    if (open.empty() && openCounter > 0)
        cout << "YES";
    else cout << "NO";

    return 0;
}
