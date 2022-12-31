#include <iostream>
using namespace std;

int main()
{

    int n1, n2, magicNumber;
    cin >> n1 >> n2 >> magicNumber;
    int combinationCounter = 0;
    for (int i = n1; i <= n2;i++)
    {
        for (int j = n1;j <= n2;j++)
        {
            int sum = i + j;
            combinationCounter++;
            if (sum == magicNumber)
            {
                cout << "Combination N:" << combinationCounter << " (" << i << " + " << j << " = " << magicNumber << ")";
                return 0;
            }
        }



    }
    cout << combinationCounter << " combinations - neither equals " << magicNumber;


    return 0;
}
