#include <iostream>
using namespace std;

int main()
{
    double rent;
    cin >> rent;

    double cacke = rent * 0.2;
    double drinks = cacke * 0.55;
    double animator = rent / 3;
    double sum = cacke + drinks + animator + rent;

    cout << sum;



    return 0;
}
