#include <iostream>
using namespace std;


int main() {

	string name;
	int projects;

	cin >> name;

	cin >> projects;
	int neededHours = projects * 3;


	cout << "The architect " << name << " will need " << neededHours << " hours to complete " << projects << " project/s.";

	return 0;
}