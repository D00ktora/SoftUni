#include <iostream>
using namespace std;

void operations(double x, double y, char z)
{
    if (z == '+')
    {
        cout << x + y;
    }
    else if (z == '-')
    {
        cout << x - y;
    }
    else if (z == '*')
    {
        cout << x * y;
    }
    else if (z == '/')
    {
        if (y == 0)
        {
            cout << "Can't divide by zero.";
        }
        else
        {
            cout << x / y;
        }
    }
}


int main()
{
    double x, y;
    char z;
    cin >> x >> y >> z;

    operations(x, y, z);



    return 0;
}
