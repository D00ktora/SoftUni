#include <iostream>
#include <string>
#include <sstream>
#include <climits>

using namespace std;
//1.][.3 5-aA3:)5 2asd=@14
int main()
{
    string inp;
    getline(cin, inp);
    char temp1 = ' ';
    char temp2 = ' ';
    int counter = 0;
    for (int i = 0; i < inp.length(); i++)
    {

        if (temp1 == ' ' && temp2 == ' ')
        {
            temp1 = inp[i];
            temp2 = inp[i];
        }
        temp1 = inp[i];
        if (inp[i] == '(')
        {
            counter++;
        }
        else if (inp[i] == '[')
        {
            if (temp2 == '(')
            {
                cout << "invalid";
                return 0;
            }
            else
                counter++;
        }
        else if (inp[i] == '{')
        {
            if (temp2 == '(' || temp2 == '[')
            {
                cout << "invalid";
                return 0;
            }
            else
                counter++;
        }
        if (inp[i] == ')')
        {
            counter--;
        }
        else if (inp[i] == ']')
        {
            if (temp2 == ')' || temp2 == ']' || temp2 == '[')
            {
                counter--;

            }
            else
            {
                cout << "invalid";
                return 0;
            }

        }
        else if (inp[i] == '}')
        {
            if (temp2 == ')' || temp2 == ']' || temp2 == '}' || temp2 == '{')
            {
                counter--;

            }
            else
            {
                cout << "invalid";
                return 0;
            }

        }

        temp2 = temp1;

    }
    if (counter == 0)
        cout << "valid";

    return 0;
}
