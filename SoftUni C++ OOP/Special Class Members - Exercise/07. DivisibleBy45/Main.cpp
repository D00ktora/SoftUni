#include <iostream>
#include "BigInt.h"

using namespace std;

unsigned sumOfDigits(const string& numDigits)
{
	unsigned result = 0;
	for (size_t idx = 0; idx < numDigits.length(); idx++)
		result += (numDigits[idx]-'0');

	return result;
}

bool divisableBy45(const BigInt& number)
{
	string numStr = number.getDigits();

	if (numStr[numStr.length() - 1] == '5' || numStr[numStr.length() - 1] == '0')
		if (sumOfDigits(numStr) % 9 == 0)
			return true;
		
	return false;
}

int main()
{
	string start, finish;

	cin >> start >> finish;

	BigInt from(start), to(finish);

	for (BigInt cur = from; cur < to; cur = cur + BigInt(1))
	{
		if (divisableBy45(cur))
			cout << cur << endl;
	}
	return 0;
}