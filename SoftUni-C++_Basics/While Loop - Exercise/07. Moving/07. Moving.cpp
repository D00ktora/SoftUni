#include <iostream>
#include <string>
using namespace std;


int main()
{
    int h, w, l;
    cin >> h >> w >> l;
    int space = h * w * l;
    string number;
    cin >> number;
    int numberToInt;
    while (true)
    {
        if (number == "Done")
        {
            cout << space << " Cubic meters left.";
            break;
        }
        numberToInt = stoi(number);
        space -= numberToInt;

        if (space < 0)
        {
            cout << "No more free space! You need " << abs(space) << " Cubic meters more.";
            break;
        }
        cin >> number;

    }


    return 0;
}