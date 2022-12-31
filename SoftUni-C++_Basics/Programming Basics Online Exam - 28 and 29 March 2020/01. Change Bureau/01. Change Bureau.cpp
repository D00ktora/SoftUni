#include <iostream>
using namespace std;

int main()
{
    int numberOfBTC;
    cin >> numberOfBTC;
    double numberChinissJen, comision;
    cin >> numberChinissJen >> comision;


    double BTCToBNG = numberOfBTC * 1168.0;
    double ChinisToUSD = numberChinissJen * 0.15;
    double USDToBGN = ChinisToUSD * 1.76;
    double sumOfBNG = BTCToBNG + USDToBGN;
    double BNGToEUR = sumOfBNG / 1.95;

    double finalSum = BNGToEUR - ((comision / 100) * BNGToEUR);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << finalSum;




    return 0;
}
