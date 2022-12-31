#include <iostream>
using namespace std;


int main()
{

    int n, counter = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (counter == n)
            {
                break;
            }
            counter++;
            cout << counter << " ";

        }
        cout << endl;
        if (counter == n)
        {
            break;
        }
    }


    return 0;
}
