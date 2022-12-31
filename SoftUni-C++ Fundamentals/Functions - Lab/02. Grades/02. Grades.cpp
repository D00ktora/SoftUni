#include <iostream>
using namespace std;

void sign()
{
    double n;
    cin >> n;
    if (n >= 2.00 && n <= 2.99)
    {
        cout << "Fail" << endl;
    }
    else if (n >= 3.00 && n <= 3.49)
    {
        cout << "Poor" << endl;
    }
    else if (n >= 3.50 && n <= 4.49)
    {
        cout << "Good" << endl;
    }
    else if (n >= 4.50 && n <= 5.49)
    {
        cout << "Very good" << endl;
    }
    else if (n >= 5.50 && n <= 6.00)
    {
        cout << "Excellent" << endl;
    }
}

int main()
{
    sign();

    return 0;
}
