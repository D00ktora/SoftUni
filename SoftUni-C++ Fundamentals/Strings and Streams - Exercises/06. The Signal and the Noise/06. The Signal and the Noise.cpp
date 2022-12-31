#include <iostream>
#include <string>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    int maxNumber = INT_MIN;
    istringstream inpSum(inp);
    string text;
    string temp;
    while (inpSum >> text)
    {
        for (int i = 0; i < text.size(); i++)
        {
            char c = text[i];

            if (c >= '0' && c <= '9')
            {
                temp += c;
            }

        }
        int number = stoi(temp);
        if (number > maxNumber)
            maxNumber = number;
        temp = "";
    }
    cout << maxNumber;
    return 0;
}
