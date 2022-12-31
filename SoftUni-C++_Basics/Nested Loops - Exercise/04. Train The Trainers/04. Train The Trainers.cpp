#include <iostream>
#include <string>
using namespace std;


int main()
{
    int judges, counter = 0;
    cin >> judges;
    string presentation;
    getline(cin >> ws, presentation);
    double sum = 0;
    while (presentation != "Finish")
    {
        double sumOfGreade = 0;
        double averageGreade = 0;
        for (int i = 1; i <= judges; i++)
        {
            double greade;
            cin >> greade;
            sumOfGreade += greade;
            sum += greade;
            counter++;
        }

        cout.setf(ios::fixed);
        cout.precision(2);
        averageGreade = sumOfGreade / judges;
        cout << presentation << " - " << averageGreade << "." << endl;




        getline(cin >> ws, presentation);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Student's final assessment is " << sum / counter << "." << endl;

    return 0;
}
