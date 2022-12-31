#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin >> ws, text);

    while (true)
    {

        if (text == "Stop")
        {
            break;
        }
        cout << text << endl;
        getline(cin >> ws, text);
    }


    return 0;
}
