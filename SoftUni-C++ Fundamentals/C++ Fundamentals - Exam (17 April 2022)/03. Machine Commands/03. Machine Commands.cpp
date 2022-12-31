#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <sstream>
#include <list>
using namespace std;

int main()
{
    int inputNumber;
    string input;
    vector <int> numbers;
    int sum = 0;
    cin >> input;
    while (input != "end")
    {
        if (input != "sum" && input != "subtract" && input != "concat" && input != "discard")
        {
            inputNumber = stoi(input);
            numbers.push_back(inputNumber);
        }
        if (input == "sum")
        {
            sum += numbers.back();
            numbers.pop_back();
            sum += numbers.back();
            numbers.pop_back();
            numbers.push_back(sum);
            sum = 0;
        }
        if (input == "subtract")
        {
            sum += numbers.back();
            numbers.pop_back();
            sum -= numbers.back();
            numbers.pop_back();
            numbers.push_back(sum);
            sum = 0;
        }
        if (input == "concat")
        {
            string temp;
            temp = to_string(numbers.back());
            string temp2;
            numbers.pop_back();
            temp2 = to_string(numbers.back());
            string temp3 = temp2 + temp;
            numbers.pop_back();
            sum = stoi(temp3);
            numbers.push_back(sum);
            sum = 0;
        }
        if (input == "discard")
        {
            numbers.pop_back();
        }

        cin >> input;


    }

    for (int i = 0; i < numbers.size();i++)
    {
        cout << numbers[i] << endl;
    }


    return 0;
}
