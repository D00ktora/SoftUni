#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//const unsigned maxSize = 200;
//bool getArr(string arr [], int& arrSize);



int main()
{

    string number = "";
    string input;
    getline(cin >> ws, input);

    /*int convertedNumber = stoi(input);
    cout << sqrt(convertedNumber);*/
    for (int i = 0; i < input.length();i++)
    {
        if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9')
        {
            number += input[i];
        }
        if (input[i] == '.')
        {
            break;
        }
    }

    int numberAsInt = stoi(number);
    int result = sqrt(numberAsInt);
    cout << result;

    return 0;
}




//bool getArr(string arr[], int& arrSize)
//{
//    cin >> arrSize;
//
//    for (int i = 0; i < arrSize; i++)
//    {
//        cin >> arr[i];
//    }
//    return true;
//}