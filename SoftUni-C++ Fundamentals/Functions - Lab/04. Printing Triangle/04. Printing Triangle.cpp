#include <iostream>
using namespace std;

void printingTriangle()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        if (i < n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
    }
    for (int k = n - 1; k >= 1; k--)
    {

        if (k >= 1)
        {
            for (int w = 1; w <= k;w++)
            {
                cout << w << " ";
            }

            cout << endl;
        }

    }
}

int main()
{
    printingTriangle();

    return 0;
}
