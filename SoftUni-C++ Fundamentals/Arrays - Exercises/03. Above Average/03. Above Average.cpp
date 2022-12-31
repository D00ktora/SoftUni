#include <iostream>
#include <cmath>

using namespace std;

const unsigned maxSize = 200;


bool getArray(int arr[], int& arrSize);



int main()
{
    int arr[maxSize];
    int arrSize;
    int sum = 0;
    getArray(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
        //cout << sum << endl;
    }
    int average = sum / arrSize;
    //cout << average << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] >= average)
        {
            cout << arr[i] << " ";
        }
    }


    return 0;
}



bool getArray(int arr[], int& arrSize)
{
    cin >> arrSize;


    if (arrSize > maxSize)
    {
        return false;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
    return true;
}
