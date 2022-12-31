#include <iostream>
using namespace std;

int main()
{
    int h, m;

    for (h = 0;h <= 23;h++)
    {
        for (m = 0;m <= 59; m++)
        {
            cout << h << ":" << m << endl;
        }
    }


    return 0;
}
