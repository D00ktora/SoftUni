#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double num1, num2, result;
	string word;
	cin >> word;


	if (word == "square") {
		cin >> num1;
		result = num1 * num1;
	}
	else if (word == "rectangle") {
		cin >> num1 >> num2;
		result = num1 * num2;
	}
	else if (word == "circle") {
		cin >> num1;
		result = 3.14159265359 * num1 * num1;

	}
	else if (word == "triangle") {
		cin >> num1 >> num2;
		result = (num1 * num2) / 2;
	}
	cout.setf(ios::fixed);
	cout.precision(3);

	cout << result;


	return 0;
}
