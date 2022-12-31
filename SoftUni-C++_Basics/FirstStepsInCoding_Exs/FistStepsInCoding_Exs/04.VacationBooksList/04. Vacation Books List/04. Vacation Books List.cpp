#include<iostream>
using namespace std;

int main() {

	int pages, pagesForHour, days;
	cin >> pages >> pagesForHour >> days;

	int neededHoursPerDay = (pages / pagesForHour) / days;

	cout << neededHoursPerDay;

	return 0;
}