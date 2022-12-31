#include <iostream>

using namespace std;

const unsigned maxSize = 200;

bool areEqual(int arr1[], int length1, int arr2[], int lenght2)
{
    if (lenght2 != length1)
    {
        return false;
    }

    for (int i = 0; i < lenght2; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

bool getArray(int arr[], int& arrSize)
{
    cin >> arrSize;

    if (arrSize > arrSize)
    {
        return false;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
    return true;
}



int main()
{
    int arr1[maxSize];
    int arr1Size;

    if (getArray(arr1, arr1Size) == false)
    {
        return -1;
    }

    int arr2[maxSize];
    int arr2Size;

    if (getArray(arr2, arr2Size) == false)
    {
        return -1;
    }

    if (areEqual(arr1, arr1Size, arr2, arr2Size))
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "Not equal";
    }

    return 0;
}
