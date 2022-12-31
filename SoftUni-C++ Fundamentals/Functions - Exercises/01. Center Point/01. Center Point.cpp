#include <iostream>
using namespace std;
#include <cmath>



int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double hypotenuse1 = sqrt(x1 * x1 + y1 * y1);
    double hypotenuse2 = sqrt(x2 * x2 + y2 * y2);

    if (hypotenuse1 <= hypotenuse2)
    {
        cout << "(" << x1 << ", " << y1 << ")" << endl;
    }
    else
    {
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }

    return 0;
}
