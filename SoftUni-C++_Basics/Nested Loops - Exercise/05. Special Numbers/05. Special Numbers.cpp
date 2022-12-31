#include <iostream>
using namespace std;


int main()
{

    int n;
    cin >> n;


    for (int i = 1111; i <= 9999;i++)
    {
        int firstNumber = i / 1000;
        int secondNumber = i / 100 % 10;
        int thirdNumber = i / 10 % 10;
        int forthNumber = i % 10;
        if (firstNumber != 0 && secondNumber != 0 && thirdNumber != 0 && forthNumber != 0)
        {
            if (n % firstNumber == 0 && n % secondNumber == 0 && n % thirdNumber == 0 && n % forthNumber == 0)
            {
                cout << i << " ";
            }

        }

    }


    return 0;
}
