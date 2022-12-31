#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	double budget;
	cin >> budget;
	string seson;
	cin >> seson;



	if (budget <= 100) {
		if (seson == "summer") {
			cout << "Somewhere in Bulgaria" << endl;
			cout << fixed << setprecision(2) << "Camp - " << budget * 0.3;
		}
		else {
			cout << "Somewhere in Bulgaria" << endl;
			cout << fixed << setprecision(2) << "Hotel - " << budget * 0.7;
		}
	}
	else if (budget > 100 && budget <= 1000) {
		if (seson == "summer") {
			cout << "Somewhere in Balkans" << endl;
			cout << fixed << setprecision(2) << "Camp - " << budget * 0.4;
		}
		else {
			cout << "Somewhere in Balkans" << endl;
			cout << fixed << setprecision(2) << "Hotel - " << budget * 0.8;
		}
	}
	else if (budget > 1000) {

		cout << "Somewhere in Europe" << endl;
		cout << fixed << setprecision(2) << "Hotel - " << budget * 0.9;
	}


	return 0;
}