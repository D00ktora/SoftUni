#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    string finde;
    string replace;
    cin >> finde;
    cin >> replace;
    int index = inp.find(finde);

    while (index != string::npos)
    {
        inp.replace(index, finde.size(), replace);
        index = inp.find(finde, index + 1);
    }

    cout << inp;

    return 0;
}
//I am the night.Dark Night!No, not the knight
//night
//day