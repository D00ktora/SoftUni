#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string row1;
    getline(cin, row1);
    istringstream line1(row1);
    char open;
    char close;
    int counterOpen = 0;
    int counterClose = 0;
    for (int i = 0; i < row1.size();i++)
    {
        line1 >> open;
        if (open == '(')
        {
            counterOpen++;
            open = ' ';
        }
        if (open == ')')
        {
            counterClose++;
            open = ' ';
        }
    }

    if (counterClose == counterOpen)
        cout << "correct";
    else
        cout << "incorrect";

    return 0;
}
