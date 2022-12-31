#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <sstream>
#include <list>
using namespace std;

int main()
{
    string input;

    getline(cin, input);
    char temp = ' ';
    for (int i = 0; i < input.size(); i++)
    {

        if (temp == input[i] && input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')
        {

        }
        else
        {
            cout << input[i];
        }

        temp = input[i];
    }




    return 0;
}
