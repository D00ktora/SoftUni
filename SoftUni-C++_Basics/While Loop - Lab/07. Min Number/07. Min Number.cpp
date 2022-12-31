#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int number = INT_MAX, tempNumb;
    string temp;
    cin >> temp;
    tempNumb = stoi(temp);
    while (true)
    {
        if (temp == "Stop")
        {
            break;
        }
        tempNumb = stoi(temp);
        if (tempNumb < number)
        {
            number = tempNumb;
        }
        cin >> temp;


    }
    cout << number;


    return 0;
}
