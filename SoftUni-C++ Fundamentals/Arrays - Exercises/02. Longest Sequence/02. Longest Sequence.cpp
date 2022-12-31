#include <iostream>

using namespace std;

const unsigned maxSize = 200;


bool getArray(int arr[], int& arrSize);



int main()
{

    int arr[maxSize];
    int arrSize;
    int counter = 1;
    int number;
    int tempCounter = 1;

    getArray(arr, arrSize);

    for (int i = 1; i < arrSize; i++) // 1 1 1 3 2 2 2 
    {
        int currectVal = arr[i];
        int previousVal = arr[i - 1];
        //cout << currectVal<<endl;
        //cout << previousVal<<endl;
        if (currectVal == previousVal)
        {

            ++tempCounter;
            if (tempCounter >= counter)
            {
                number = arr[i];
                counter = tempCounter;
            }

        }
        else
        {
            tempCounter = 1;
        }
        if (i + 1 == arrSize && counter == 1)
        {
            cout << currectVal;
            return 0;
        }
    }
    if (arrSize == 1)
    {
        cout << arr[0];
        return 0;
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {
            cout << number << " ";
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
