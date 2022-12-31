#include <iostream>
using namespace std;

int main()
{
	int num1, num2, sum;
	string simbol;
	double result, num3;
	cin >> num1 >> num2 >> simbol;

	if (simbol == "+")
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - even";
		}
		else
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - odd";
		}
	}
	else if (simbol == "-")
	{
		sum = num1 - num2;
		if (sum % 2 == 0)
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - even";
		}
		else
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - odd";
		}
	}
	else if (simbol == "*")
	{
		sum = num1 * num2;
		if (sum % 2 == 0)
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - even";
		}
		else
		{
			cout << num1 << " " << simbol << " " << num2 << " = " << sum << " - odd";
		}
	}

	if (simbol == "%")
	{
		if (num2 != 0)
		{
			sum = num1 % num2;
			cout << num1 << " % " << num2 << " = " << sum;
		}
		else
		{
			cout << "Cannot divide " << num1 << " by zero";
		}
	}




	if (simbol == "/" && num1 != 0 && num2 != 0)
	{

		num3 = 1.0 * num1;
		result = num3 / num2;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << num1 << " " << simbol << " " << num2 << " = " << result;

	}
	else if (simbol == "/" && (num1 == 0 || num2 == 0))
	{
		cout << "Cannot divide " << num1 << " by zero";
	}





	return 0;
}

