#include <iostream>
using namespace std;

void sign()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "The number " << n << " is positive." << endl;
    }
    else if (n < 0)
    {
        cout << "The number " << n << " is negative." << endl;
    }
    else if (n == 0)
    {
        cout << "The number " << n << " is zero." << endl;
    }
}

int main()
{
    sign();

    return 0;
}
