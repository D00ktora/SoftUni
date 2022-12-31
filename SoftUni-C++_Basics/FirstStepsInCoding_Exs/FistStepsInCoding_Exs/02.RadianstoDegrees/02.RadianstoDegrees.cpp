#include <iostream>
#include<cmath>
using namespace std;

int main() {
	double rad, deg;
	cin >> rad;
	deg = rad * 57.295779513;
	cout << round(deg);

	return 0;
}