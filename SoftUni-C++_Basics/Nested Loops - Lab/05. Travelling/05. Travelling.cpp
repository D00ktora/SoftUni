#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin >> ws, input);
    if (input == "End")
    {
        return 0;
    }
    double minBudget, saves;
    cin >> minBudget;
    double sum = 0;
    while (true)
    {

        while (true)
        {

            cin >> saves;
            sum += saves;
            if (sum >= minBudget)
            {
                cout << "Going to " << input << "!" << endl;
                sum = 0.0;
                break;
            }
        }

        getline(cin >> ws, input);
        if (input == "End")
        {
            return 0;
        }
        cin >> minBudget;
    }


    return 0;
}
