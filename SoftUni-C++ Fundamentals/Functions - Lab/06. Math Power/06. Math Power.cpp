#include <iostream>
using namespace std;

int mathPower(int number, int power)
{
    int temp;
    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result = result * number;

    }
    return result;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << mathPower(a, b);
    return 0;
}
