#include <iostream>
using namespace std;

int main()
{
    int minutes, numberOfWalks, caloris;
    cin >> minutes >> numberOfWalks >> caloris;

    int calorisBurned = 5 * minutes * numberOfWalks;

    int halfOfCaloris = caloris / 2;

    if (halfOfCaloris <= calorisBurned)
    {
        cout << "Yes, the walk for your cat is enough. Burned calories per day: " << calorisBurned << ".";
    }
    else
    {
        cout << "No, the walk for your cat is not enough. Burned calories per day: " << calorisBurned << ".";
    }



    return 0;
}
