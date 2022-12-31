#include<iostream>
using namespace std;

int main() {

	int neededNailon, neededPaint, neededAceton, hours;
	cin >> neededNailon >> neededPaint >> neededAceton >> hours;


	double coveredNailon = (neededNailon + 2) * 1.50;

	double procentFromPaint = neededPaint * 0.1;
	double paint = (neededPaint + procentFromPaint) * 14.50;

	double aceton = neededAceton * 5.00;
	double totalMaterialPrice = aceton + paint + coveredNailon + 0.40;
	double workerPrice = totalMaterialPrice * 0.3;
	double totalWorkerPrice = workerPrice * hours;

	cout << totalWorkerPrice + totalMaterialPrice;

	return 0;
}