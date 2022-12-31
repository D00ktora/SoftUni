#include <iostream>
using namespace std;


int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        int sumOdd = 0, sumEven = 0;


        int lastNumber = i % 10;
        int secondNumber = i / 10 % 10;
        int thirdNumber = i / 100 % 10;
        int forthNumber = i / 1000 % 10;
        int fifthNumber = i / 10000 % 10;
        int sixtNumber = i / 100000;

        sumOdd = lastNumber + thirdNumber + fifthNumber;
        sumEven = secondNumber + forthNumber + sixtNumber;

        if (sumOdd == sumEven)
        {
            cout << i << " ";
        }
    }



    return 0;
}
