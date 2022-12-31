#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string row1, row2;
    getline(cin, row1);
    getline(cin, row2);
    istringstream line1(row1);
    istringstream line2(row2);


    for (int i = 0; i < row1.size() || i < row2.size(); i++)
    {
        int n1;
        line1 >> n1;
        int n2;
        line2 >> n2;

        if (n1 != n2)
        {
            cout << "not equal" << endl;
            return 0;
        }

    }
    cout << "equal\n";
    return 0;
}
