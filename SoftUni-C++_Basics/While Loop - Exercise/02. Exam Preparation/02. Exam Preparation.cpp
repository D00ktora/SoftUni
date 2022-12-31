#include <iostream>
#include <string>
using namespace std;


int main()
{
    int numberNOKgreades, counteNOKgreades = 0;

    cin >> numberNOKgreades;
    string lastTest;
    string test;
    getline(cin >> ws, test);
    int greade, sum = 0, gradeCounter = 0, testCounter = 0;

    while (true)
    {




        if (test == "Enough")
        {
            double average = sum * (1.0) / gradeCounter;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << "Average score: " << average << endl;
            cout << "Number of problems: " << gradeCounter << endl;
            cout << "Last problem: " << lastTest;

            break;
        }

        cin >> greade;

        if (greade <= 4)
        {
            counteNOKgreades++;
        }

        if (counteNOKgreades == numberNOKgreades)
        {
            cout << "You need a break, " << counteNOKgreades << " poor grades.";
            break;
        }




        sum += greade;
        gradeCounter++;
        testCounter++;

        getline(cin >> ws, test);
        if (test != "Enough")
        {
            lastTest = test;
        }

    }



    return 0;
}
