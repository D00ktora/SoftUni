#include <iostream>
using namespace std;

int main()
{
    int time1, time2, time3, sum, min, sec;

    cin >> time1 >> time2 >> time3;

    sum = time1 + time2 + time3;
    min = sum / 60;
    sec = sum % 60;

    cout << min << ":";
    if (sec < 10) {
        cout << "0" << sec;
    }
    else {
        cout << sec;
    }

    return 0;
}
