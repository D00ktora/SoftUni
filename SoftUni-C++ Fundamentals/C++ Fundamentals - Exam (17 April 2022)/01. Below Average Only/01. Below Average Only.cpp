#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <sstream>
#include <list>
using namespace std;

int main()
{
    int arr[200];
    int num;
    cin >> num;
    int sumAverage = 0;
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        sumAverage += arr[i];
    }

    double average = sumAverage / num;


    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0 && arr[i] <= average)
        {
            sumEven += arr[i];
        }
        else if (i % 2 != 0 && arr[i] <= average)
        {
            sumOdd += arr[i];
        }

    }

    double produt = sumEven * sumOdd;

    cout << produt;

    return 0;
}
