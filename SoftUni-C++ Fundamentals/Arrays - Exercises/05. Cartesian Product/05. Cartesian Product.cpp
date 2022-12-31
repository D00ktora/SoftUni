#include <iostream>
using namespace std;

const unsigned maxSize = 200;
bool getArr(int arr[], int& arrSize);



int main()
{
    int arr[maxSize];
    int arrSize;
    getArr(arr, arrSize);

    for (int i = 0; i < arrSize;i++)
    {
        for (int k = 0;k < arrSize;k++)
        {
            cout << arr[i] * arr[k] << " ";
        }
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