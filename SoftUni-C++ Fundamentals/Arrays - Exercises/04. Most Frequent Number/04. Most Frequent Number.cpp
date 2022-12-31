#include <iostream>
using namespace std;

const unsigned maxSize = 200;


bool getArr(int arr[], int& arrSize);



int main()
{
    int arr[maxSize];
    int arrSize;
    int zeroCounter = 0, oneCaunt = 0, twoCount = 0, threeCount = 0, fourCount = 0, fiveCount = 0, sixCount = 0, sevenCount = 0, eightCount = 0, nineCount = 0;
    getArr(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            zeroCounter++;
        }
        else if (arr[i] == 1)
        {
            oneCaunt++;
        }
        else if (arr[i] == 2)
        {
            twoCount++;
        }
        else if (arr[i] == 3)
        {
            threeCount++;
        }
        else if (arr[i] == 4)
        {
            fourCount++;
        }
        else if (arr[i] == 5)
        {
            fiveCount++;
        }
        else if (arr[i] == 6)
        {
            sixCount++;
        }
        else if (arr[i] == 7)
        {
            sevenCount++;
        }
        else if (arr[i] == 8)
        {
            eightCount++;
        }
        else if (arr[i] == 9)
        {
            nineCount++;
        }
    }

    if (zeroCounter >= oneCaunt && zeroCounter >= twoCount && zeroCounter >= threeCount && zeroCounter >= fourCount && zeroCounter >= fiveCount && zeroCounter >= sixCount && zeroCounter >= sevenCount && zeroCounter >= eightCount && zeroCounter >= nineCount)
    {
        cout << 0 << " ";
    }
    if (oneCaunt >= zeroCounter && oneCaunt >= twoCount && oneCaunt >= threeCount && oneCaunt >= fourCount && oneCaunt >= fiveCount && oneCaunt >= sixCount && oneCaunt >= sevenCount && oneCaunt >= eightCount && oneCaunt >= nineCount)
    {
        cout << 1 << " ";
    }
    if (twoCount >= zeroCounter && twoCount >= oneCaunt && twoCount >= threeCount && twoCount >= fourCount && twoCount >= fiveCount && twoCount >= sixCount && twoCount >= sevenCount && twoCount >= eightCount && twoCount >= nineCount)
    {
        cout << 2 << " ";
    }
    if (threeCount >= zeroCounter && threeCount >= twoCount && threeCount >= oneCaunt && threeCount >= fourCount && threeCount >= fiveCount && threeCount >= sixCount && threeCount >= sevenCount && threeCount >= eightCount && threeCount >= nineCount)
    {
        cout << 3 << " ";
    }
    if (fourCount >= zeroCounter && fourCount >= twoCount && fourCount >= threeCount && fourCount >= oneCaunt && fourCount >= fiveCount && fourCount >= sixCount && fourCount >= sevenCount && fourCount >= eightCount && fourCount >= nineCount)
    {
        cout << 4 << " ";
    }
    if (fiveCount >= zeroCounter && fiveCount >= twoCount && fiveCount >= threeCount && fiveCount >= fourCount && fiveCount >= oneCaunt && fiveCount >= sixCount && fiveCount >= sevenCount && fiveCount >= eightCount && fiveCount >= nineCount)
    {
        cout << 5 << " ";
    }
    if (sixCount >= zeroCounter && sixCount >= twoCount && sixCount >= threeCount && sixCount >= fourCount && sixCount >= fiveCount && sixCount >= oneCaunt && sixCount >= sevenCount && sixCount >= eightCount && sixCount >= nineCount)
    {
        cout << 6 << " ";
    }
    if (sevenCount >= zeroCounter && sevenCount >= twoCount && sevenCount >= threeCount && sevenCount >= fourCount && sevenCount >= fiveCount && sevenCount >= sixCount && sevenCount >= oneCaunt && sevenCount >= eightCount && sevenCount >= nineCount)
    {
        cout << 7 << " ";
    }
    if (eightCount >= zeroCounter && eightCount >= twoCount && eightCount >= threeCount && eightCount >= fourCount && eightCount >= fiveCount && eightCount >= sixCount && eightCount >= sevenCount && eightCount >= oneCaunt && eightCount >= nineCount)
    {
        cout << 8 << " ";
    }
    if (nineCount >= zeroCounter && nineCount >= twoCount && nineCount >= threeCount && nineCount >= fourCount && nineCount >= fiveCount && nineCount >= sixCount && nineCount >= sevenCount && nineCount >= eightCount && nineCount >= oneCaunt)
    {
        cout << 9 << " ";
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