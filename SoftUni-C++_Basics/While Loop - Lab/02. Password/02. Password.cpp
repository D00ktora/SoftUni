#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;
    string password;
    cin >> password;
    string imput;
    while (password != imput)
    {
        cin >> imput;
    }

    cout << "Welcome " << name << "!";

    return 0;
}
