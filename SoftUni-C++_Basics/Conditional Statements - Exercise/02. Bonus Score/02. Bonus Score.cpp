#include <iostream>
using namespace std;

int main()
{
    int numb;
    double bonusPoints, totalPoints;

    cin >> numb;

    if (numb <= 100) {
        bonusPoints = 5;
    }
    else if (numb > 100 && numb <= 1000) {
        bonusPoints = numb * 0.2;
    }
    else if (numb > 1000) {
        bonusPoints = numb * 0.1;
    }


    if (numb % 2 == 0) {
        bonusPoints++;
    }
    if (numb % 10 == 5) {
        bonusPoints += 2;
    }
    totalPoints = bonusPoints + numb;
    cout << bonusPoints << endl;
    cout << totalPoints;
    return 0;
}
