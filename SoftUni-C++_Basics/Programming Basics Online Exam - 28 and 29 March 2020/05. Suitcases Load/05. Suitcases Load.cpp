#include <iostream>
#include <string>

using namespace std;

int main()
{
    double truncCapacity;
    cin >> truncCapacity;
    string comand;
    double temp;
    double totalLaggage = 0;
    int i = 0;
    cin >> comand;
    while (true)
    {

        if (comand == "End")
        {
            cout << "Congratulations! All suitcases are loaded!" << endl;
            cout << "Statistic: " << i << " suitcases loaded.";
            break;
        }
        temp = stod(comand);
        i++;
        if (i % 3 == 0)
        {
            temp = temp * 0.1 + temp;
        }
        truncCapacity -= temp;
        totalLaggage += temp;
        if (truncCapacity <= 0)
        {
            cout << "No more space!" << endl;
            cout << "Statistic: " << --i << " suitcases loaded.";
            break;
        }

        cin >> comand;



    }



    return 0;
}
