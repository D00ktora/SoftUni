#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cin >> number;
    int num = 0;

    while (true)
    {
        if (sum >= number)
        {
            break;
        }


        cin >> num;
        sum += num;


    }
    cout << sum;

    return 0;
}
