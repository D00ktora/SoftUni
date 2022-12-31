#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string row1;
    getline(cin, row1);
    ostringstream line1;


    int flag = 1;
    //On the south Carpathian mountains, a tree is swingin

    for (int i = 0; i < row1.length(); i++)
    {

        char capital = row1[i];


        if (capital >= 'a' && capital <= 'z' || capital >= 'A' && capital <= 'Z')
        {
            if (flag)
            {
                if (capital >= 'a' && capital <= 'z')
                {
                    capital = capital - ('a' - 'A');

                }
                flag = 0;
            }


        }
        else
        {
            //line1 << capital;
            flag = 1;
        }



        line1 << capital;

    }
    cout << line1.str();
    return 0;
}
