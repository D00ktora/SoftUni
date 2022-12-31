#include <iostream>
#include <string>
using namespace std;


int main()
{
    string input;
    cin >> input;
    int sumReal = 0;
    int sumNonReal = 0;



    while (input != "stop")
    {
        int countre = 0;
        int number = stoi(input);
        if (number < 0)
        {
            cout << "Number is negative." << endl;

        }
        else
        {
            for (int i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    countre++;
                }

            }
            if (countre > 2)
            {
                sumNonReal += number;
            }
            else
            {
                sumReal += number;
            }

        }

        cin >> input;
    }

    cout << "Sum of all prime numbers is: " << sumReal << endl;
    cout << "Sum of all non prime numbers is: " << sumNonReal << endl;


    return 0;
}
