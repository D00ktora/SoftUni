#include <iostream>
using namespace std;


int factorialDivision(int x, int y)
{
    double yResult = 1;
    double xResult = 1;
    if (x == 0 || y == 0)
    {

        return 1;
    }
    for (int i = x; i >= 1; i--)
    {
        xResult *= i;
    }
    for (int j = y;j >= 1;j--)
    {
        yResult *= j;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    double result = (xResult * 1.0) / (yResult * 1.0);
    cout << result;
    return 0;
}


int main()
{
    int x, y;
    cin >> x >> y;

    factorialDivision(x, y);


    return 0;
}
