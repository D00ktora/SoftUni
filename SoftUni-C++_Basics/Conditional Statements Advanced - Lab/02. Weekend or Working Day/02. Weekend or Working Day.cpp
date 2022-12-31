#include <iostream>
#include <string>
using namespace std;
int main()
{
	string day;
	getline(cin, day);

	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
		cout << "Working day";
	}
	else if (day == "Saturday" || day == "Sunday") {
		cout << "Weekend";
	}
	else {
		cout << "Error";
	}




	return 0;
}
