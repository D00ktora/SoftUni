#include<iostream>
using namespace std;

int main() {

	int pens, marcer, clean, procent;

	cin >> pens >> marcer >> clean >> procent;

	double convertedProcent = procent * 0.01;
	double penPrice = pens * 5.80;
	double marcerPrice = marcer * 7.20;
	double cleanPrice = clean * 1.20;

	double procentFromPrice = (penPrice + marcerPrice + cleanPrice) * convertedProcent;
	double result = (penPrice + marcerPrice + cleanPrice) - procentFromPrice;

	cout << result;

	return 0;
}