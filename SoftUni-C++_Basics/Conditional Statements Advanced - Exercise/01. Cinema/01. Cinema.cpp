#include <iostream>
using namespace std;

int main()
{
    string projection;
    int rows, coloms, tottal;
    double profit;
    cin >> projection;
    cin >> rows >> coloms;
    tottal = rows * coloms;

    if (projection == "Premiere")
    {
        profit = tottal * 12.00;
    }
    else if (projection == "Normal")
    {
        profit = tottal * 7.50;
    }
    else if (projection == "Discount")
    {
        profit = tottal * 5.00;
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << profit;

    return 0;
}
