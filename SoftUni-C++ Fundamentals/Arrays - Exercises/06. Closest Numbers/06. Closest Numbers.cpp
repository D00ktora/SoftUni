#include <iostream>
#include <climits>
using namespace std;

const unsigned maxSize = 200;
bool getArr(int arr[], int& arrSize);



int main()
{
    int arr[maxSize];
    int arrSize;
    getArr(arr, arrSize);
    int absDiference = INT_MAX;

    for (int i = 0; i < arrSize;i++)
    {
        for (int k = 0; k < arrSize; k++)
        {
            int currecntDifference;

            if (arr[i] >= arr[k])
            {
                currecntDifference = arr[i] - arr[k];
            }
            else
            {
                currecntDifference = arr[k] - arr[i];
            }

            if (currecntDifference < absDiference && currecntDifference != 0)
            {
                absDiference = currecntDifference;
            }
        }
    }
    if (absDiference == INT_MAX)
    {
        cout << 0;
    }
    else
    {
        cout << absDiference;

    }

    return 0;
}




bool getArr(int arr[], int& arrSize)
{
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
    return true;
}