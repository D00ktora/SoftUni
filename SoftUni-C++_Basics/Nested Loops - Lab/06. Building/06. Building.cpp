#include <iostream>
using namespace std;

int main()
{
    int flors, rooms;
    cin >> flors >> rooms;

    for (int i = flors; i >= 1; i--)
    {
        for (int j = 0; j < rooms; j++)
        {
            if (i == flors)
            {
                cout << "L" << i << j << " ";
            }

            else if (i % 2 == 0 && i != flors)
            {
                cout << "O" << i << j << " ";
            }
            else
            {
                cout << "A" << i << j << " ";
            }

        }
        cout << endl;
    }


    return 0;
}
