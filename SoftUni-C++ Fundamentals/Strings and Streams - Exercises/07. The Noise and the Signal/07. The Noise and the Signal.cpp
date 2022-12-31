#include <iostream>
#include <string>
#include <sstream>
#include <climits>

using namespace std;
//1.][.3 5-aA3:)5 2asd=@14
int main()
{
    string inp;
    getline(cin, inp);
    istringstream inpSum(inp);
    string noise = "";
    string text;
    while (inpSum >> text)
    {
        string temp;
        for (int i = 0; i < text.size(); i++)
        {
            char c = text[i];
            if (c >= '0' && c <= '9')
            {

            }
            else
            {
                temp += c;
            }
        }

        if (noise == "")
            noise = temp;

        if (temp.length() > noise.length())
        {
            noise = temp;

        }
        else if (temp.length() == noise.length())
        {
            if (temp < noise)
            {
                noise = temp;
            }
        }


    }
    if (noise == "")
        cout << "no noise";
    else
        cout << noise;

    return 0;
}
