#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    istringstream inpSum(inp);

    ostringstream text;
    int sum = 0;
    string temp;
    while (inpSum >> temp)
    {

        char letter = temp[0];
        if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
        {
            text << temp << ' ';
        }
        else
        {
            int number = stoi(temp);
            sum += number;
        }


    }



    cout << sum << endl;
    cout << text.str();
    return 0;
}
