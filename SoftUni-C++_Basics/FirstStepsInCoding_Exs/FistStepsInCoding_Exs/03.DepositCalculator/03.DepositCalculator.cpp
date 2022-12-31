#include<iostream>
using namespace std;

int main() {

	double deposit;
	cin >> deposit;
	int interval;
	cin >> interval;
	double procent;
	cin >> procent;
	double convertedProcent = procent * 0.01;
	double sum;

	sum = deposit + interval * ((deposit * convertedProcent) / 12);
	cout << sum;
	return 0;
}