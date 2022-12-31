#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sum = 0;
	string text;
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		switch (text[i])
		{
		case 'a':
			sum += 1;
			break;
		case 'e':
			sum += 2;
			break;
		case 'i':
			sum += 3;
			break;
		case 'o':
			sum += 4;
			break;
		case 'u':
			sum += 5;
			break;
		}
	}
	cout << sum;

	return 0;
}
