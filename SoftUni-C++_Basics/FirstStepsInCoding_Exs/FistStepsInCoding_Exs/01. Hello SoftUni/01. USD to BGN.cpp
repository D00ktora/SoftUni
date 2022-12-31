
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	double usd, bgn;
	cin >> usd;
	bgn = usd * 1.79549;
	cout << fixed << setprecision(2) << bgn;
	return 0;
}