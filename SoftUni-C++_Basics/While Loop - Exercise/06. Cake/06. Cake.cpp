#include <iostream>
#include <string>
using namespace std;


int main()
{

    int h, w, pcsInt;
    cin >> h >> w;
    string pcs;
    int cace = h * w;
    cin >> pcs;
    //pcsInt = stoi(pcs);
    while (true)
    {

        if (pcs == "STOP")
        {
            cout << cace << " pieces are left.";
            break;
        }
        pcsInt = stoi(pcs);
        cace -= pcsInt;

        if (cace <= 0)
        {
            cout << "No more cake left! You need " << abs(cace) << " pieces more.";
            break;
        }
        cin >> pcs;
    }


    return 0;
}
