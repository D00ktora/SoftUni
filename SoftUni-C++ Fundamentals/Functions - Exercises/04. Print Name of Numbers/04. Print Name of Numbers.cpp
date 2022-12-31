#include <iostream>
using namespace std;

//9999
void nameOfNumbers(int n)
{

    int units = abs(n) % 10;
    int tents = abs(n) / 10 % 10;
    int hundreds = abs(n) / 100 % 10;
    int thousands = abs(n) / 1000;




    switch (thousands)
    {
    case 1:
        cout << "one thousand ";
        break;
    case 2:
        cout << "two thousand ";
        break;
    case 3:
        cout << "three thousand ";
        break;
    case 4:
        cout << "four thousand ";
        break;
    case 5:
        cout << "five thousand ";
        break;
    case 6:
        cout << "six thousand ";
        break;
    case 7:
        cout << "seven thousand ";
        break;
    case 8:
        cout << "eight thousand ";
        break;
    case 9:
        cout << "nine thousand ";
        break;
    case 0:
        break;
    }

    switch (hundreds)
    {
    case 1:
        cout << "one hundred ";
        break;
    case 2:
        cout << "two hundred ";
        break;
    case 3:
        cout << "three hundred ";
        break;
    case 4:
        cout << "four hundred ";
        break;
    case 5:
        cout << "five hundred ";
        break;
    case 6:
        cout << "six hundred ";
        break;
    case 7:
        cout << "seven hundred ";
        break;
    case 8:
        cout << "eight hundred ";
        break;
    case 9:
        cout << "nine hundred ";
        break;
    case 0:
        break;
    }


    switch (tents)
    {
    case 1:
        if (units == 1)
        {
            cout << "eleven";
            return;
        }
        else if (units == 2)
        {
            cout << "twelve";
            return;
        }
        else if (units == 3)
        {
            cout << "thirteen";
            return;
        }
        else if (units == 4)
        {
            cout << "fourteen";
            return;
        }
        else if (units == 5)
        {
            cout << "fifteen";
            return;
        }
        else if (units == 6)
        {
            cout << "sixteen";
            return;
        }
        else if (units == 7)
        {
            cout << "seventeen";
            return;
        }
        else if (units == 8)
        {
            cout << "eighteen";
            return;
        }
        else if (units == 9)
        {
            cout << "nineteen";
            return;
        }
        else if (units == 0)
        {
            cout << "ten";
            return;
        }
        break;
    case 2:
        cout << "twenty ";
        break;
    case 3:
        cout << "thirty ";
        break;
    case 4:
        cout << "fourty ";
        break;
    case 5:
        cout << "fifty ";
        break;
    case 6:
        cout << "sixty ";
        break;
    case 7:
        cout << "seventy ";
        break;
    case 8:
        cout << "eighty ";
        break;
    case 9:
        cout << "ninety ";
        break;
    case 0:
        break;
    }

    switch (units)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    case 0:

        break;
    }

    if (thousands == 0 && hundreds == 0 && tents == 0 && units == 0)
    {
        cout << "zero";
    }


}



int main()
{
    int n;
    cin >> n;
    /*for (int i = 0; i <= n; i++)
    {
        nameOfNumbers(i);
        cout << endl;

    }*/


    nameOfNumbers(n);
    return 0;
}
