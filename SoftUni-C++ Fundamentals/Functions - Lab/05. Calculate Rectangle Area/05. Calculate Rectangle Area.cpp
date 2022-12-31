#include <iostream>
using namespace std;

double triangleArea(int base, int hihg)
{
    double area = (base * hihg);
    return area;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << triangleArea(a, b);
    return 0;
}
