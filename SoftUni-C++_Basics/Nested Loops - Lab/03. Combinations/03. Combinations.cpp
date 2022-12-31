#include <iostream>
using namespace std;

int main()
{

    int n, counter = 0;
    cin >> n;

    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= n;j++)
        {
            for (int k = 0; k <= n;k++)
            {
                int sum = i + j + k;
                if (sum == n)
                {
                    counter++;
                }
            }
        }
    }
    cout << counter;

    return 0;
}
